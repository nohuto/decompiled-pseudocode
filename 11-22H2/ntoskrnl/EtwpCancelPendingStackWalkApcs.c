/*
 * XREFs of EtwpCancelPendingStackWalkApcs @ 0x14031F078
 * Callers:
 *     EtwpFreeLoggerContext @ 0x14078E1AC (EtwpFreeLoggerContext.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259BB0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     KeRemoveQueueDpcEx @ 0x14031EEF0 (KeRemoveQueueDpcEx.c)
 *     KeRemoveQueueApc @ 0x140361D10 (KeRemoveQueueApc.c)
 *     RtlpInterlockedPushEntrySList @ 0x140428830 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x140428870 (RtlpInterlockedFlushSList.c)
 *     EtwpFinalizePendingApc @ 0x140468234 (EtwpFinalizePendingApc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall EtwpCancelPendingStackWalkApcs(unsigned int *a1)
{
  _SLIST_HEADER *v1; // r15
  void *v3; // rsi
  PSLIST_ENTRY v4; // rdi
  _SLIST_ENTRY *v5; // r13
  unsigned __int64 v6; // r14
  void *v7; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf

  v1 = (_SLIST_HEADER *)(a1 + 236);
  v3 = 0LL;
  v4 = RtlpInterlockedFlushSList((PSLIST_HEADER)a1 + 59);
  while ( v4 )
  {
    v5 = v4;
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 114);
    if ( BYTE2(v4[-1].Next) )
    {
      v7 = (void *)*((_QWORD *)&v4[-6].Next + 1);
      if ( v7 )
      {
        v3 = (void *)*((_QWORD *)&v4[-6].Next + 1);
        ObfReferenceObjectWithTag(v7, 0x746C6644u);
      }
    }
    KxReleaseSpinLock((volatile signed __int64 *)a1 + 114);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v6 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v6);
    if ( v3 )
    {
      if ( (unsigned __int8)KeRemoveQueueApc(&v4[-6]) )
        EtwpFinalizePendingApc(a1, &v4[-6]);
      ObfDereferenceObjectWithTag(v3, 0x746C6644u);
      v3 = 0LL;
    }
    v4 = v4->Next;
    RtlpInterlockedPushEntrySList(v1, v5);
  }
  if ( KeRemoveQueueDpcEx((__int64)(a1 + 212), 0) )
  {
    _interlockedbittestandreset((volatile signed __int32 *)a1 + 243, 1u);
    ExReleaseRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 137) + 448LL) + 8LL * *a1),
      1u);
  }
}
