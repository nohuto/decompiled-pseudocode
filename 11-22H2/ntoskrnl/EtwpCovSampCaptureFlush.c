/*
 * XREFs of EtwpCovSampCaptureFlush @ 0x1409F0FC0
 * Callers:
 *     EtwpCoverageSamplerQuery @ 0x1408AA478 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1402AF840 (KeInitializeEvent.c)
 *     memset @ 0x140435400 (memset.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140469A58 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1406032E0 (EtwpCovSampCaptureFlushSampleBuffers.c)
 */

NTSTATUS __fastcall EtwpCovSampCaptureFlush(__int64 a1)
{
  _BYTE v3[80]; // [rsp+30h] [rbp-58h] BYREF

  EtwpCovSampCaptureFlushSampleBuffers(a1);
  memset(v3, 0, sizeof(v3));
  *(_QWORD *)v3 = 6941LL;
  *(_QWORD *)&v3[16] = 4054171642LL;
  KeInitializeEvent((PRKEVENT)&v3[48], NotificationEvent, 0);
  EtwpCovSampCaptureQueueBuffer(a1, (_SLIST_ENTRY *)v3);
  return KeWaitForSingleObject(&v3[48], Executive, 0, 0, 0LL);
}
