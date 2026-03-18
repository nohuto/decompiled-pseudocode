/*
 * XREFs of ExSvmBeginDeviceReset @ 0x140640500
 * Callers:
 *     <none>
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExSvmBeginDeviceReset(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _KTHREAD *v5; // rsi
  __int64 v6; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v8; // r14d
  __int64 v9; // rdx
  int SessionId; // eax
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // esi
  struct _KTHREAD *v14; // rdi
  __int64 p_Process; // rbx
  unsigned int v16; // ecx
  int v17; // r9d
  bool v18; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = KeGetCurrentThread();
  v6 = 0LL;
  _disable();
  AbEntrySummary = v5->AbEntrySummary;
  v8 = -1;
  if ( v5->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&ExpAtsSvmDeviceListLock, (__int64)v5)) != 0 )
  {
    _BitScanForward((unsigned int *)&v9, AbEntrySummary);
    v5->AbEntrySummary = AbEntrySummary & ~(1 << v9);
    _enable();
    v6 = (__int64)(&v5[1].Process + 12 * v9);
    if ( (unsigned __int64)&ExpAtsSvmDeviceListLock - qword_140C50630 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v5->ApcState.Process);
    *(_DWORD *)(v6 + 8) = SessionId;
    *(_QWORD *)v6 = (unsigned __int64)&ExpAtsSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, v6, (__int64)&ExpAtsSvmDeviceListLock);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  v11 = ExpAtsSvmDevices;
  if ( (__int64 *)ExpAtsSvmDevices == &ExpAtsSvmDevices )
  {
    v13 = -1073741810;
  }
  else
  {
    do
    {
      v12 = v11;
      if ( !*(_BYTE *)(v11 + 16) && *(_QWORD *)(v11 + 24) == a1 )
        break;
      v11 = *(_QWORD *)v11;
    }
    while ( (__int64 *)v11 != &ExpAtsSvmDevices );
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(HalIommuDispatch + 136))(*(_QWORD *)(v12 + 184), a2);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExpAtsSvmDeviceListLock);
  v14 = KeGetCurrentThread();
  if ( (unsigned __int64)&ExpAtsSvmDeviceListLock - qword_140C50630 < 0x8000000000LL )
    v8 = MmGetSessionIdEx((__int64)v14->ApcState.Process);
  _disable();
  p_Process = (__int64)&v14[1].Process;
  v16 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&ExpAtsSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != v8 )
  {
    ++v16;
    p_Process += 96LL;
    if ( v16 >= 6 )
      goto LABEL_27;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_27:
    if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v14, (ULONG_PTR)&ExpAtsSvmDeviceListLock, v8, 0LL);
    _enable();
    goto LABEL_35;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v17 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  v14->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v17 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v14, (__int64)&ExpAtsSvmDeviceListLock, v17);
LABEL_35:
  v18 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v18 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v13;
}
