/*
 * XREFs of EtwpCovSampCaptureApcRundown @ 0x1409F0970
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCovSampCaptureApcRelease @ 0x140602DB4 (EtwpCovSampCaptureApcRelease.c)
 */

__int64 __fastcall EtwpCovSampCaptureApcRundown(__int64 a1)
{
  return EtwpCovSampCaptureApcRelease(a1 - 56);
}
