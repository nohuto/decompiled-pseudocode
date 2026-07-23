/*
 * XREFs of VfIsVerifierEnabled @ 0x140293C10
 * Callers:
 *     IopLoadUnloadDriver @ 0x1407CF120 (IopLoadUnloadDriver.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x140843AFC (PipDmgGetDriverDmarCompatLevel.c)
 *     KsepPatchDriverImportsTable @ 0x14085E984 (KsepPatchDriverImportsTable.c)
 *     PopDripsWatchdogTakeAction @ 0x1409A13AC (PopDripsWatchdogTakeAction.c)
 *     MmAddVerifierSpecialThunks @ 0x140A2D6E0 (MmAddVerifierSpecialThunks.c)
 *     IoShutdownSystem @ 0x140A999A4 (IoShutdownSystem.c)
 *     PopMarkComponentsBootPhase @ 0x140AA347C (PopMarkComponentsBootPhase.c)
 *     PopInvokeSystemStateHandler @ 0x140AA840C (PopInvokeSystemStateHandler.c)
 *     KdExitDebugger @ 0x140AB0008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140AB0144 (KdEnterDebugger.c)
 *     VfDriverUnloadImage @ 0x140ABCEC4 (VfDriverUnloadImage.c)
 *     MmIsVerifierEnabled @ 0x140ABD2B0 (MmIsVerifierEnabled.c)
 *     MmIsDriverSuspectForVerifier @ 0x140AC2080 (MmIsDriverSuspectForVerifier.c)
 *     ViThunkFindSharedExports @ 0x140ADBAE0 (ViThunkFindSharedExports.c)
 *     ViThunkGetWdmThunk @ 0x140ADBBE4 (ViThunkGetWdmThunk.c)
 *     ViThunkHookExportAddress @ 0x140ADBC68 (ViThunkHookExportAddress.c)
 *     ViThunkReplaceIatEntryForWdmThunk @ 0x140ADC068 (ViThunkReplaceIatEntryForWdmThunk.c)
 *     ViThunkReplaceSharedExports @ 0x140ADC128 (ViThunkReplaceSharedExports.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierEnabled()
{
  return (unsigned int)ViVerifierEnabled;
}
