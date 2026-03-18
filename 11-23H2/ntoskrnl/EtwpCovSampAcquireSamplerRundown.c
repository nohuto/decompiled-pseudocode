/*
 * XREFs of EtwpCovSampAcquireSamplerRundown @ 0x1408A846C
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x1408A84BC (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampCaptureBufferProcess @ 0x1408A85D4 (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampImageNotify @ 0x1408A9820 (EtwpCovSampImageNotify.c)
 *     EtwpCoverageSamplerQuery @ 0x1408A9F98 (EtwpCoverageSamplerQuery.c)
 *     EtwpCovSampSampleBufferProcess @ 0x1409F2B44 (EtwpCovSampSampleBufferProcess.c)
 *     EtwpCoverageSamplerUnloadImage @ 0x1409F398C (EtwpCoverageSamplerUnloadImage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B360 (ExAcquireRundownProtection_0.c)
 */

__int64 __fastcall EtwpCovSampAcquireSamplerRundown(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0(&stru_140C31CC0) )
  {
    *a1 = qword_140C31CB8;
    return 0LL;
  }
  else
  {
    KeLeaveCriticalRegion();
    return 3221225865LL;
  }
}
