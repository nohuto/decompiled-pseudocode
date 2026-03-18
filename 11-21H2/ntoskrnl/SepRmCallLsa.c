/*
 * XREFs of SepRmCallLsa @ 0x140203950
 * Callers:
 *     <none>
 * Callees:
 *     KeStackAttachProcess @ 0x140203630 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402037B0 (KeUnstackDetachProcess.c)
 *     SepRmDispatchDataToLsa @ 0x1402037E8 (SepRmDispatchDataToLsa.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B0DF0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     NtWaitForSingleObject @ 0x1407E0180 (NtWaitForSingleObject.c)
 *     AdtpWriteToEtw @ 0x140844C0C (AdtpWriteToEtw.c)
 *     SepAdtOpenEtwReadyEvent @ 0x14084CC44 (SepAdtOpenEtwReadyEvent.c)
 *     SepAuditFailed @ 0x1409CF1A0 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepRmCallLsa(__int64 a1)
{
  char v1; // r15
  int v3; // r14d
  __int64 v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  signed __int32 v8; // r14d
  void *v9; // rcx
  __int64 result; // rax
  struct _KTHREAD *v11; // rax
  struct _LIST_ENTRY *v12; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // ebx
  struct _KEVENT *v17; // rcx
  _QWORD *v18; // rdx
  __int64 *v19; // rcx
  struct _KEVENT *v20; // rcx
  __int64 v21; // rax
  _BYTE v22[8]; // [rsp+20h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-38h] BYREF

  Handle = 0LL;
  v1 = SepRmAuditingEnabled;
  memset(&ApcState, 0, sizeof(ApcState));
  v3 = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !AdtpRegisteredWithEtw )
  {
    result = SepAdtOpenEtwReadyEvent(&Handle);
    if ( (int)result < 0 )
      return result;
    LOBYTE(v15) = 1;
    v16 = NtWaitForSingleObject(Handle, v15, 0LL);
    NtClose(Handle);
    if ( v16 < 0 )
      return (unsigned int)v16;
  }
  if ( v1 )
    KeStackAttachProcess(SepRmLsaCallProcess, &ApcState);
  do
  {
    v4 = 0LL;
    if ( (*(_BYTE *)(a1 + 224) & 1) == 0 )
      goto LABEL_46;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 32), 1u);
    v6 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 == a1 )
    {
      v17 = *(struct _KEVENT **)(a1 + 192);
      if ( v17 )
        KeSetEvent(v17, 0, 0);
    }
    else if ( *(_DWORD *)(v6 + 52) == *(_DWORD *)(a1 + 184) + 1 )
    {
      v4 = *(_QWORD *)a1;
      if ( *(_QWORD *)(v6 + 8) != a1 || (v7 = *(_QWORD *)v6, *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6) )
LABEL_43:
        __fastfail(3u);
      *(_QWORD *)a1 = v7;
      *(_QWORD *)(v7 + 8) = a1;
    }
    ExReleaseResourceLite((PERESOURCE)(a1 + 32));
    KeLeaveCriticalRegion();
    if ( !v4 )
    {
LABEL_46:
      if ( (*(_BYTE *)(a1 + 224) & 2) == 0 )
        continue;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
      v18 = (_QWORD *)(a1 + 16);
      v19 = *(__int64 **)(a1 + 16);
      if ( v19 == (__int64 *)(a1 + 16) )
      {
        v20 = *(struct _KEVENT **)(a1 + 200);
        if ( v20 )
          KeSetEvent(v20, 0, 0);
      }
      else if ( *((_DWORD *)v19 + 13) == *(_DWORD *)(a1 + 184) + 1 )
      {
        v4 = *(_QWORD *)(a1 + 16);
        if ( (_QWORD *)v19[1] != v18 )
          goto LABEL_43;
        v21 = *v19;
        if ( *(__int64 **)(*v19 + 8) != v19 )
          goto LABEL_43;
        *v18 = v21;
        *(_QWORD *)(v21 + 8) = v18;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( !v4 )
        continue;
    }
    if ( *(_DWORD *)(v4 + 32) != 1 || (*(_DWORD *)(*(_QWORD *)(v4 + 24) + 20LL) & 2) != 0 )
    {
      if ( v1 )
        SepRmDispatchDataToLsa(v4);
    }
    else
    {
      v11 = KeGetCurrentThread();
      v12 = *(struct _LIST_ENTRY **)(v4 + 56);
      v22[0] = 0;
      Blink = v11[1].WaitBlock[3].WaitListEntry.Blink;
      v11[1].WaitBlock[3].WaitListEntry.Blink = v12;
      v14 = AdtpWriteToEtw(*(_QWORD *)(v4 + 24), v22);
      KeGetCurrentThread()[1].WaitBlock[3].WaitListEntry.Blink = Blink;
      if ( v14 < 0 )
      {
        SepAdtLastAuditFailStatus = v14;
        _InterlockedIncrement(&SepAdtAuditFailureCount);
        if ( !v22[0] )
          SepAuditFailed((unsigned int)v14);
      }
      if ( (unsigned int)(*(_DWORD *)(v4 + 16) - 4) <= 1 )
        ExFreePoolWithTag(*(PVOID *)(v4 + 24), 0);
    }
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 184));
    v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 176), 0xFFFFFFFF);
    v9 = *(void **)(v4 + 56);
    v3 = v8 - 1;
    if ( v9 )
    {
      ObfDereferenceObjectWithTag(v9, 0x69416553u);
      *(_QWORD *)(v4 + 56) = 0LL;
    }
    (*(void (__fastcall **)(__int64))(a1 + 216))(v4);
  }
  while ( v3 );
  if ( v1 )
    KeUnstackDetachProcess(&ApcState);
  return 0LL;
}
