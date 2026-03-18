/*
 * XREFs of KiCopyCounters @ 0x1405741A0
 * Callers:
 *     NtContinueEx @ 0x14041F190 (NtContinueEx.c)
 *     NtRaiseException @ 0x14041F610 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1404202A0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140420C70 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1404210B0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1404214F0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140421930 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140421D60 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1404229F0 (KxIsrLinkage.c)
 *     KxStartUserThread @ 0x140423F30 (KxStartUserThread.c)
 *     KiApcInterrupt @ 0x140424740 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140425FE0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140426430 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140426B20 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140427310 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140427A20 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x140429CF0 (NtCallEnclave.c)
 *     KiNmiInterruptStart @ 0x14042C580 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x14042D200 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14042D900 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14042F900 (KiPageFault.c)
 *     KiMcheckAbort @ 0x140430880 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x140430FC0 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140431A40 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140432140 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x140433B00 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140434940 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140434E40 (KiFastFailDispatch.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiCopyCountersWorker @ 0x140975228 (KiCopyCountersWorker.c)
 */

struct _KPRCB *__fastcall KiCopyCounters(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 v4; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  int v9; // eax
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r10
  _DWORD *v12; // r9
  int v13; // eax
  bool v14; // zf
  struct _KPRCB *result; // rax

  v1 = *(_QWORD *)(a1 + 360);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  do
  {
    v4 = *(_QWORD *)(a1 + 72);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v7 = *SchedulerAssist;
      do
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange(SchedulerAssist, v7 & 0xFFDFFFFF, v7);
      }
      while ( v8 != v7 );
      if ( (v7 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v9 = KiCopyCountersWorker(a1, v1);
    _disable();
  }
  while ( !v9 && v4 != *(_QWORD *)(a1 + 72) );
  if ( KiIrqlFlags )
  {
    v10 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
    {
      v11 = KeGetCurrentPrcb();
      v12 = v11->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v14 = (v13 & v12[5]) == 0;
      v12[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick((__int64)v11);
    }
  }
  __writecr8(CurrentIrql);
  result = KeGetCurrentPrcb();
  if ( (result->PairRegister & 2) != 0 )
    return (struct _KPRCB *)KiUpdateStibpPairing(0LL);
  return result;
}
