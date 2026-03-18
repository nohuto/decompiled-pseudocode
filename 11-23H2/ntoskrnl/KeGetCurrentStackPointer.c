/*
 * XREFs of KeGetCurrentStackPointer @ 0x14041F130
 * Callers:
 *     RtlEnoughStackSpaceForStackCapture @ 0x140227800 (RtlEnoughStackSpaceForStackCapture.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x14022E7B0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     RtlpGetStackLimits @ 0x14022E960 (RtlpGetStackLimits.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140271390 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeQueryCurrentStackInformation @ 0x14034E9B0 (KeQueryCurrentStackInformation.c)
 *     KasanWrapperRtlRestoreContext @ 0x140356BD0 (KasanWrapperRtlRestoreContext.c)
 *     EtwpTraceStackWalk @ 0x140468FCC (EtwpTraceStackWalk.c)
 *     EtwpTraceLastBranchRecord @ 0x140469AA6 (EtwpTraceLastBranchRecord.c)
 *     PnprGetStackLimits @ 0x140562FE4 (PnprGetStackLimits.c)
 *     MiDoStackCopy @ 0x14062CDA0 (MiDoStackCopy.c)
 *     VfUtilCaptureViolationKernelStack @ 0x140AC24C0 (VfUtilCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x140AD8770 (ViDeadlockAnalyze.c)
 *     MmVerifierTrimMemory @ 0x140AE8100 (MmVerifierTrimMemory.c)
 * Callees:
 *     <none>
 */

char *KeGetCurrentStackPointer()
{
  char v1; // [rsp+8h] [rbp+8h] BYREF

  return &v1;
}
