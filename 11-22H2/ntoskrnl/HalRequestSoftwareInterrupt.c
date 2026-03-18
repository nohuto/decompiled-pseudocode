/*
 * XREFs of HalRequestSoftwareInterrupt @ 0x140254BF0
 * Callers:
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KiDetachProcess @ 0x14022DD20 (KiDetachProcess.c)
 *     KeYieldExecution @ 0x1402469D0 (KeYieldExecution.c)
 *     KiDirectSwitchThread @ 0x1402B1870 (KiDirectSwitchThread.c)
 *     KiSetQuantumTargetThread @ 0x1402B2AC0 (KiSetQuantumTargetThread.c)
 *     KiStartThreadCycleAccumulation @ 0x1402B2D10 (KiStartThreadCycleAccumulation.c)
 *     KeSetBasePriorityThread @ 0x1402B9D70 (KeSetBasePriorityThread.c)
 *     KeRemovePriQueue @ 0x1402BF080 (KeRemovePriQueue.c)
 *     KiUpdateRunTime @ 0x1402C74B0 (KiUpdateRunTime.c)
 *     KiSignalThreadForApc @ 0x14030B1D8 (KiSignalThreadForApc.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     KiRequestSoftwareInterrupt @ 0x140318788 (KiRequestSoftwareInterrupt.c)
 *     KiChainedDispatch @ 0x14041FBE0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1404205B0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1404209F0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140420E30 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140421270 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404216A0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140422330 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x140425920 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140425D70 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140426460 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140427360 (KiIpiInterrupt.c)
 *     SwapContext @ 0x140427D00 (SwapContext.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140254C30 (HalpInterruptSendIpi.c)
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
