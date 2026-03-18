/*
 * XREFs of ExUninitializeDeviceAts @ 0x14063EC3C
 * Callers:
 *     PiIommuUninitializeDeviceAts @ 0x1403DED30 (PiIommuUninitializeDeviceAts.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExpAtsDereferenceDevice @ 0x14063EEB0 (ExpAtsDereferenceDevice.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExUninitializeDeviceAts(__int64 a1)
{
  PVOID *v1; // rsi
  unsigned int v3; // r15d
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v7; // r14d
  __int64 v8; // rdx
  int SessionId; // eax
  __int64 *i; // rcx
  struct _KTHREAD *v12; // rdi
  __int64 p_Process; // rbx
  unsigned int v14; // ecx
  int v15; // r9d

  v1 = 0LL;
  if ( a1 )
  {
    v3 = 0;
    CurrentThread = KeGetCurrentThread();
    v5 = 0LL;
    _disable();
    AbEntrySummary = CurrentThread->AbEntrySummary;
    v7 = -1;
    if ( CurrentThread->AbEntrySummary
      || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&ExpAtsSvmDeviceListLock, (__int64)CurrentThread)) != 0 )
    {
      _BitScanForward((unsigned int *)&v8, AbEntrySummary);
      CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v8);
      _enable();
      v5 = (__int64)(&CurrentThread[1].Process + 12 * v8);
      if ( (unsigned __int64)&ExpAtsSvmDeviceListLock - qword_140C50630 >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      *(_DWORD *)(v5 + 8) = SessionId;
      *(_QWORD *)v5 = (unsigned __int64)&ExpAtsSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, v5, (__int64)&ExpAtsSvmDeviceListLock);
    if ( v5 )
      *(_BYTE *)(v5 + 18) = 1;
    for ( i = (__int64 *)ExpAtsSvmDevices; i != &ExpAtsSvmDevices; i = (__int64 *)*i )
    {
      v1 = (PVOID *)i;
      if ( i[3] == a1 )
      {
        v3 = ExpAtsDereferenceDevice();
        break;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&ExpAtsSvmDeviceListLock);
    v12 = KeGetCurrentThread();
    if ( (unsigned __int64)&ExpAtsSvmDeviceListLock - qword_140C50630 < 0x8000000000LL )
      v7 = MmGetSessionIdEx((__int64)v12->ApcState.Process);
    _disable();
    p_Process = (__int64)&v12[1].Process;
    v14 = 0;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&ExpAtsSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(p_Process + 18)
         || (*(_DWORD *)p_Process & 1) != 0
         || *(_DWORD *)(p_Process + 8) != v7 )
    {
      ++v14;
      p_Process += 96LL;
      if ( v14 >= 6 )
        goto LABEL_29;
    }
    *(_BYTE *)(p_Process + 18) = 0;
    if ( !p_Process )
    {
LABEL_29:
      if ( (*((_DWORD *)&v12->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v12, (ULONG_PTR)&ExpAtsSvmDeviceListLock, v7, 0LL);
      _enable();
      goto LABEL_37;
    }
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v15 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    v12->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
    _enable();
    if ( v15 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v12, (__int64)&ExpAtsSvmDeviceListLock, v15);
LABEL_37:
    if ( v1 )
    {
      ExFreePoolWithTag(v1[22], 0);
      ExFreePoolWithTag(v1, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
