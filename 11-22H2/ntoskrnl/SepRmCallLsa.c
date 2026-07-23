/*
 * XREFs of SepRmCallLsa @ 0x14031C700
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x14022D620 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9E0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     SepRmDispatchDataToLsa @ 0x14031C948 (SepRmDispatchDataToLsa.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     NtWaitForSingleObject @ 0x1406E3770 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1406E4570 (NtClose.c)
 *     AdtpWriteToEtw @ 0x14083EAE0 (AdtpWriteToEtw.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140843B10 (SepAdtOpenEtwReadyEvent.c)
 *     SepAuditFailed @ 0x1409D1CF0 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepRmCallLsa(__int64 **a1)
{
  char v1; // r15
  int v3; // r14d
  __int64 *v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rcx
  __int64 *v7; // rax
  signed __int32 v8; // r14d
  void *v9; // rcx
  __int64 result; // rax
  struct _KTHREAD *v11; // rax
  struct _LIST_ENTRY *v12; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  int v14; // eax
  int v15; // eax
  NTSTATUS v16; // ebx
  struct _KEVENT *v17; // rcx
  _QWORD *v18; // rdx
  __int64 *v19; // rcx
  struct _KEVENT *v20; // rcx
  __int64 v21; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf
  char v28[8]; // [rsp+20h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v31; // [rsp+48h] [rbp-38h] BYREF

  Handle = 0LL;
  v1 = SepRmAuditingEnabled;
  memset(&v31, 0, sizeof(v31));
  v3 = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !AdtpRegisteredWithEtw )
  {
    result = SepAdtOpenEtwReadyEvent(&Handle);
    if ( (int)result < 0 )
      return result;
    v16 = NtWaitForSingleObject(Handle, 1u, 0LL);
    NtClose(Handle);
    if ( v16 < 0 )
      return (unsigned int)v16;
  }
  if ( v1 )
    KiStackAttachProcess((_KPROCESS *)SepRmLsaCallProcess, 0, (__int64)&v31);
  do
  {
    v4 = 0LL;
    if ( ((_BYTE)a1[28] & 1) == 0 )
      goto LABEL_55;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 4), 1u);
    v6 = *a1;
    if ( *a1 == (__int64 *)a1 )
    {
      v17 = (struct _KEVENT *)a1[24];
      if ( v17 )
        KeSetEvent(v17, 0, 0);
    }
    else if ( *((_DWORD *)v6 + 13) == *((_DWORD *)a1 + 46) + 1 )
    {
      v4 = *a1;
      v7 = (__int64 *)*v6;
      if ( (__int64 **)v6[1] != a1 || (__int64 *)v7[1] != v6 )
LABEL_52:
        __fastfail(3u);
      *a1 = v7;
      v7[1] = (__int64)a1;
    }
    ExReleaseResourceLite((PERESOURCE)(a1 + 4));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !v4 )
    {
LABEL_55:
      if ( ((_BYTE)a1[28] & 2) == 0 )
        continue;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 17, &LockHandle);
      v18 = a1 + 2;
      v19 = a1[2];
      if ( v19 == (__int64 *)(a1 + 2) )
      {
        v20 = (struct _KEVENT *)a1[25];
        if ( v20 )
          KeSetEvent(v20, 0, 0);
      }
      else if ( *((_DWORD *)v19 + 13) == *((_DWORD *)a1 + 46) + 1 )
      {
        v4 = a1[2];
        v21 = *v19;
        if ( (_QWORD *)v19[1] != v18 || *(__int64 **)(v21 + 8) != v19 )
          goto LABEL_52;
        *v18 = v21;
        *(_QWORD *)(v21 + 8) = v18;
      }
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && LockHandle.OldIrql <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v27 = (v26 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v26;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
      if ( !v4 )
        continue;
    }
    if ( *((_DWORD *)v4 + 8) != 1 || (*(_DWORD *)(v4[3] + 20) & 2) != 0 )
    {
      if ( v1 )
        SepRmDispatchDataToLsa(v4);
    }
    else
    {
      v11 = KeGetCurrentThread();
      v12 = (struct _LIST_ENTRY *)v4[7];
      v28[0] = 0;
      Blink = v11[1].WaitBlock[3].WaitListEntry.Blink;
      v11[1].WaitBlock[3].WaitListEntry.Blink = v12;
      v14 = AdtpWriteToEtw(v4[3], v28);
      KeGetCurrentThread()[1].WaitBlock[3].WaitListEntry.Blink = Blink;
      if ( v14 < 0 )
      {
        SepAdtLastAuditFailStatus = v14;
        _InterlockedIncrement(&SepAdtAuditFailureCount);
        if ( !v28[0] )
          SepAuditFailed((unsigned int)v14);
      }
      v15 = *((_DWORD *)v4 + 4);
      if ( v15 == 4 || v15 == 5 )
        ExFreePoolWithTag((PVOID)v4[3], 0);
    }
    _InterlockedIncrement((volatile signed __int32 *)a1 + 46);
    v8 = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 44, 0xFFFFFFFF);
    v9 = (void *)v4[7];
    v3 = v8 - 1;
    if ( v9 )
    {
      ObfDereferenceObjectWithTag(v9, 0x69416553u);
      v4[7] = 0LL;
    }
    ((void (__fastcall *)(__int64 *))a1[27])(v4);
  }
  while ( v3 );
  if ( v1 )
    KiUnstackDetachProcess(&v31);
  return 0LL;
}
