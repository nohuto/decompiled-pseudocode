/*
 * XREFs of EtwpCovSampCaptureReleaseToLookaside @ 0x140469B2A
 * Callers:
 *     EtwpCovSampCaptureBufferRelease @ 0x14041191C (EtwpCovSampCaptureBufferRelease.c)
 *     EtwpCovSampCaptureApc @ 0x140469710 (EtwpCovSampCaptureApc.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x14046998C (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampLookasidePop @ 0x140469BA8 (EtwpCovSampLookasidePop.c)
 *     EtwpCovSampCaptureApcRelease @ 0x140602E24 (EtwpCovSampCaptureApcRelease.c)
 *     EtwpCovSampCaptureCancelApcs @ 0x140602E70 (EtwpCovSampCaptureCancelApcs.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406034F0 (EtwpCovSampCaptureQueueApc.c)
 *     EtwpCovSampCaptureSample @ 0x140603790 (EtwpCovSampCaptureSample.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1408A8D20 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254670 (KiInsertQueueDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x140428830 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall EtwpCovSampCaptureReleaseToLookaside(__int64 a1, __int64 a2, _SLIST_ENTRY *a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = *(_QWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 40) )
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)a2, a3);
    result = *(unsigned int *)(a2 + 40);
    if ( (_DWORD)result )
      return result;
  }
  else
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)v4, a3);
    result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v4 + 76));
    if ( (unsigned int)result < *(_DWORD *)(v4 + 72) )
      return result;
  }
  return KiInsertQueueDpc(a1 + 1192, 0LL, 0LL, 0LL, 0);
}
