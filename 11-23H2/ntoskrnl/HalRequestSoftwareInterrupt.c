/*
 * XREFs of HalRequestSoftwareInterrupt @ 0x140254D10
 * Callers:
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KiDetachProcess @ 0x14022DD00 (KiDetachProcess.c)
 *     KeYieldExecution @ 0x1402469F0 (KeYieldExecution.c)
 *     KiDirectSwitchThread @ 0x1402B18A0 (KiDirectSwitchThread.c)
 *     KiSetQuantumTargetThread @ 0x1402B2AF0 (KiSetQuantumTargetThread.c)
 *     KiStartThreadCycleAccumulation @ 0x1402B2D40 (KiStartThreadCycleAccumulation.c)
 *     KeSetBasePriorityThread @ 0x1402B9DA0 (KeSetBasePriorityThread.c)
 *     KeRemovePriQueue @ 0x1402BF0B0 (KeRemovePriQueue.c)
 *     KiUpdateRunTime @ 0x1402C74E0 (KiUpdateRunTime.c)
 *     KiSignalThreadForApc @ 0x14030B308 (KiSignalThreadForApc.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F820 (KiCheckForKernelApcDelivery.c)
 *     KiRequestSoftwareInterrupt @ 0x140318968 (KiRequestSoftwareInterrupt.c)
 *     KiChainedDispatch @ 0x1404202A0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140420C70 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1404210B0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1404214F0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140421930 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140421D60 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1404229F0 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x140425FE0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140426430 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140426B20 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140427A20 (KiIpiInterrupt.c)
 *     SwapContext @ 0x1404283C0 (SwapContext.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140254D50 (HalpInterruptSendIpi.c)
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
