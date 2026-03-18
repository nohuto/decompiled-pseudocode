/*
 * XREFs of EtwpCovSampAcquireSamplerRundown @ 0x1408A894C
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x1408A899C (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampCaptureBufferProcess @ 0x1408A8AB4 (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampImageNotify @ 0x1408A9D00 (EtwpCovSampImageNotify.c)
 *     EtwpCoverageSamplerQuery @ 0x1408AA478 (EtwpCoverageSamplerQuery.c)
 *     EtwpCovSampSampleBufferProcess @ 0x1409F2BF4 (EtwpCovSampSampleBufferProcess.c)
 *     EtwpCoverageSamplerUnloadImage @ 0x1409F3A3C (EtwpCoverageSamplerUnloadImage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B240 (ExAcquireRundownProtection_0.c)
 */

__int64 __fastcall EtwpCovSampAcquireSamplerRundown(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0(&stru_140C31CA0) )
  {
    *a1 = qword_140C31C98;
    return 0LL;
  }
  else
  {
    KeLeaveCriticalRegion();
    return 3221225865LL;
  }
}
