/*
 * XREFs of VfIsVerifierEnabled @ 0x140293980
 * Callers:
 *     IopLoadUnloadDriver @ 0x1407CEE50 (IopLoadUnloadDriver.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x1408437FC (PipDmgGetDriverDmarCompatLevel.c)
 *     KsepPatchDriverImportsTable @ 0x14085E744 (KsepPatchDriverImportsTable.c)
 *     PopDripsWatchdogTakeAction @ 0x1409A11AC (PopDripsWatchdogTakeAction.c)
 *     MmAddVerifierSpecialThunks @ 0x140A2D430 (MmAddVerifierSpecialThunks.c)
 *     IoShutdownSystem @ 0x140A99B34 (IoShutdownSystem.c)
 *     PopMarkComponentsBootPhase @ 0x140AA360C (PopMarkComponentsBootPhase.c)
 *     PopInvokeSystemStateHandler @ 0x140AA859C (PopInvokeSystemStateHandler.c)
 *     KdExitDebugger @ 0x140AB0008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140AB0144 (KdEnterDebugger.c)
 *     VfDriverUnloadImage @ 0x140ABCED4 (VfDriverUnloadImage.c)
 *     MmIsVerifierEnabled @ 0x140ABD2C0 (MmIsVerifierEnabled.c)
 *     MmIsDriverSuspectForVerifier @ 0x140AC2090 (MmIsDriverSuspectForVerifier.c)
 *     ViThunkFindSharedExports @ 0x140ADBAF0 (ViThunkFindSharedExports.c)
 *     ViThunkGetWdmThunk @ 0x140ADBBF4 (ViThunkGetWdmThunk.c)
 *     ViThunkHookExportAddress @ 0x140ADBC78 (ViThunkHookExportAddress.c)
 *     ViThunkReplaceIatEntryForWdmThunk @ 0x140ADC078 (ViThunkReplaceIatEntryForWdmThunk.c)
 *     ViThunkReplaceSharedExports @ 0x140ADC138 (ViThunkReplaceSharedExports.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierEnabled()
{
  return (unsigned int)ViVerifierEnabled;
}
