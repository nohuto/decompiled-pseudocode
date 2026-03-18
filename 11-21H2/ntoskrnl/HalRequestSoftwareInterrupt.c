/*
 * XREFs of HalRequestSoftwareInterrupt @ 0x14022BAA0
 * Callers:
 *     KiDirectSwitchThread @ 0x14020F360 (KiDirectSwitchThread.c)
 *     KiRequestSoftwareInterrupt @ 0x14022BA6C (KiRequestSoftwareInterrupt.c)
 *     IopfCompleteRequest @ 0x1402B59D0 (IopfCompleteRequest.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiSignalThreadForApc @ 0x1402EE894 (KiSignalThreadForApc.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiUpdateRunTime @ 0x140307660 (KiUpdateRunTime.c)
 *     KiCheckForTimerExpiration @ 0x140307E90 (KiCheckForTimerExpiration.c)
 *     KiChooseTargetProcessor @ 0x1403419B0 (KiChooseTargetProcessor.c)
 *     KiStartThreadCycleAccumulation @ 0x140345B70 (KiStartThreadCycleAccumulation.c)
 *     KiDetachProcess @ 0x1403470F0 (KiDetachProcess.c)
 *     KiChainedDispatch @ 0x140420C10 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1404215E0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140421A20 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140421E60 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1404222A0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404226D0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140423360 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x140426820 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140426C70 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140427360 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140428220 (KiIpiInterrupt.c)
 *     SwapContext @ 0x140428D90 (SwapContext.c)
 *     KiSelectIdleProcessor @ 0x140574678 (KiSelectIdleProcessor.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 */

__int64 __fastcall HalRequestSoftwareInterrupt(char a1)
{
  __int64 v1; // rdx
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  v3[0] = 5LL;
  v1 = 31LL;
  if ( a1 != 1 )
    v1 = 47LL;
  *(_OWORD *)((char *)v3 + 4) = 0LL;
  return HalpInterruptSendIpi(v3, v1);
}
