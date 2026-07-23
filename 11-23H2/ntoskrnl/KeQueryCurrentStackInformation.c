/*
 * XREFs of KeQueryCurrentStackInformation @ 0x14034EB50
 * Callers:
 *     RtlDispatchException @ 0x1402A4050 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402A4FD0 (RtlUnwindEx.c)
 *     RtlpIsFrameInBoundsEx @ 0x1402A6840 (RtlpIsFrameInBoundsEx.c)
 *     EtwpTraceStackWalk @ 0x1404693CC (EtwpTraceStackWalk.c)
 *     EtwpTraceLastBranchRecord @ 0x140469EA6 (EtwpTraceLastBranchRecord.c)
 *     PnprGetStackLimits @ 0x1405636A4 (PnprGetStackLimits.c)
 *     KeBugCheck2 @ 0x140568950 (KeBugCheck2.c)
 *     EtwpCovSampCaptureKernelStack @ 0x140603908 (EtwpCovSampCaptureKernelStack.c)
 *     VfUtilCaptureViolationKernelStack @ 0x140AC24B0 (VfUtilCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x140AD8760 (ViDeadlockAnalyze.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x14022EAC0 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x14041F4C0 (KeGetCurrentStackPointer.c)
 */

bool __fastcall KeQueryCurrentStackInformation(_DWORD *a1, char **a2, unsigned __int64 *a3)
{
  unsigned __int64 CurrentStackPointer; // rax

  CurrentStackPointer = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformationEx(CurrentStackPointer, a1, a2, a3);
}
