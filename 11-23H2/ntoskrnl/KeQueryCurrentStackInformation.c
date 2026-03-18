/*
 * XREFs of KeQueryCurrentStackInformation @ 0x14034E9B0
 * Callers:
 *     RtlDispatchException @ 0x1402A3DC0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402A4D40 (RtlUnwindEx.c)
 *     RtlpIsFrameInBoundsEx @ 0x1402A65B0 (RtlpIsFrameInBoundsEx.c)
 *     EtwpTraceStackWalk @ 0x140468FCC (EtwpTraceStackWalk.c)
 *     EtwpTraceLastBranchRecord @ 0x140469AA6 (EtwpTraceLastBranchRecord.c)
 *     PnprGetStackLimits @ 0x140562FE4 (PnprGetStackLimits.c)
 *     KeBugCheck2 @ 0x140568290 (KeBugCheck2.c)
 *     EtwpCovSampCaptureKernelStack @ 0x1406033B8 (EtwpCovSampCaptureKernelStack.c)
 *     VfUtilCaptureViolationKernelStack @ 0x140AC24C0 (VfUtilCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x140AD8770 (ViDeadlockAnalyze.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x14022E9B0 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x14041F130 (KeGetCurrentStackPointer.c)
 */

bool __fastcall KeQueryCurrentStackInformation(_DWORD *a1, char **a2, unsigned __int64 *a3)
{
  unsigned __int64 CurrentStackPointer; // rax

  CurrentStackPointer = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformationEx(CurrentStackPointer, a1, a2, a3);
}
