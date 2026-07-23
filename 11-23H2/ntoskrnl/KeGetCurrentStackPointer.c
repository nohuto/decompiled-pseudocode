/*
 * XREFs of KeGetCurrentStackPointer @ 0x14041F4C0
 * Callers:
 *     RtlEnoughStackSpaceForStackCapture @ 0x140227910 (RtlEnoughStackSpaceForStackCapture.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x14022E8C0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     RtlpGetStackLimits @ 0x14022EA70 (RtlpGetStackLimits.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140271620 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeQueryCurrentStackInformation @ 0x14034EB50 (KeQueryCurrentStackInformation.c)
 *     KasanWrapperRtlRestoreContext @ 0x140356D70 (KasanWrapperRtlRestoreContext.c)
 *     EtwpTraceStackWalk @ 0x1404693CC (EtwpTraceStackWalk.c)
 *     EtwpTraceLastBranchRecord @ 0x140469EA6 (EtwpTraceLastBranchRecord.c)
 *     PnprGetStackLimits @ 0x1405636A4 (PnprGetStackLimits.c)
 *     MiDoStackCopy @ 0x14062D2F0 (MiDoStackCopy.c)
 *     VfUtilCaptureViolationKernelStack @ 0x140AC24B0 (VfUtilCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x140AD8760 (ViDeadlockAnalyze.c)
 *     MmVerifierTrimMemory @ 0x140AE80F0 (MmVerifierTrimMemory.c)
 * Callees:
 *     <none>
 */

char *KeGetCurrentStackPointer()
{
  char v1; // [rsp+8h] [rbp+8h] BYREF

  return &v1;
}
