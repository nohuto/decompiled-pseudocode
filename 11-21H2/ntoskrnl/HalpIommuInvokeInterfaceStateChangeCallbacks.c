/*
 * XREFs of HalpIommuInvokeInterfaceStateChangeCallbacks @ 0x140510DA4
 * Callers:
 *     HalpNotifyIommuDomainPolicyChange @ 0x140511030 (HalpNotifyIommuDomainPolicyChange.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpIommuDeviceGetDomainTypes @ 0x140510C60 (HalpIommuDeviceGetDomainTypes.c)
 */

__int64 __fastcall HalpIommuInvokeInterfaceStateChangeCallbacks(__int64 a1, char a2)
{
  __int64 i; // rdi
  __int64 v5; // rcx
  int DomainTypes; // eax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v10; // edx
  __int64 result; // rax
  int v12; // r9d
  int v13; // [rsp+50h] [rbp+18h] BYREF
  int v14; // [rsp+54h] [rbp+1Ch]

  v13 = 0;
  v14 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&IommuInterfaceStateChangeCallbackPushLock, 0LL);
  for ( i = IommuInterfaceStateChangeCallbackListHead;
        (__int64 *)i != &IommuInterfaceStateChangeCallbackListHead;
        i = *(_QWORD *)i )
  {
    v5 = *(_QWORD *)(i + 32);
    if ( *(_QWORD *)(v5 + 8) == a1 )
    {
      if ( (a2 & 1) != 0 && (*(_DWORD *)(i + 40) & 1) != 0 )
      {
        DomainTypes = HalpIommuDeviceGetDomainTypes(v5);
        if ( *(_DWORD *)(i + 44) != DomainTypes )
        {
          *(_DWORD *)(i + 44) = DomainTypes;
          v13 |= 1u;
          v14 = DomainTypes;
          (*(void (__fastcall **)(int *, _QWORD))(i + 16))(&v13, *(_QWORD *)(i + 24));
        }
      }
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&IommuInterfaceStateChangeCallbackPushLock);
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int64)&IommuInterfaceStateChangeCallbackPushLock - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  _disable();
  p_Process = (__int64)&CurrentThread[1].Process;
  v10 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&IommuInterfaceStateChangeCallbackPushLock & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v10;
    p_Process += 96LL;
    if ( v10 >= 6 )
      goto LABEL_21;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_21:
    result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(
        0x162u,
        (ULONG_PTR)CurrentThread,
        (ULONG_PTR)&IommuInterfaceStateChangeCallbackPushLock,
        SessionId,
        0LL);
    _enable();
    return result;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v12 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  result = *(unsigned __int8 *)(p_Process + 16);
  CurrentThread->AbEntrySummary |= 1 << result;
  _enable();
  if ( v12 )
    return KiAbThreadRemoveBoostsSlow(
             (ULONG_PTR)CurrentThread,
             (__int64)&IommuInterfaceStateChangeCallbackPushLock,
             v12);
  return result;
}
