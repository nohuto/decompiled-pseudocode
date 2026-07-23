/*
 * XREFs of EtwpCovSampCaptureReleaseToLookaside @ 0x14046A58A
 * Callers:
 *     EtwpCovSampCaptureBufferRelease @ 0x140412370 (EtwpCovSampCaptureBufferRelease.c)
 *     EtwpCovSampCaptureApc @ 0x14046A170 (EtwpCovSampCaptureApc.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x14046A3EC (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampLookasidePop @ 0x14046A608 (EtwpCovSampLookasidePop.c)
 *     EtwpCovSampCaptureApcRelease @ 0x140603304 (EtwpCovSampCaptureApcRelease.c)
 *     EtwpCovSampCaptureCancelApcs @ 0x140603350 (EtwpCovSampCaptureCancelApcs.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406039D0 (EtwpCovSampCaptureQueueApc.c)
 *     EtwpCovSampCaptureSample @ 0x140603C70 (EtwpCovSampCaptureSample.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1408A8A90 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x140429280 (RtlpInterlockedPushEntrySList.c)
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
