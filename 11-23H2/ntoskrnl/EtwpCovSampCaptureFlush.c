/*
 * XREFs of EtwpCovSampCaptureFlush @ 0x1409F0F10
 * Callers:
 *     EtwpCoverageSamplerQuery @ 0x1408A9F98 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1402AF870 (KeInitializeEvent.c)
 *     memset @ 0x140435A00 (memset.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x14046A0B8 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x140603270 (EtwpCovSampCaptureFlushSampleBuffers.c)
 */

NTSTATUS __fastcall EtwpCovSampCaptureFlush(__int64 a1)
{
  _BYTE v3[80]; // [rsp+30h] [rbp-58h] BYREF

  EtwpCovSampCaptureFlushSampleBuffers(a1);
  memset(v3, 0, sizeof(v3));
  *(_QWORD *)v3 = 6941LL;
  *(_QWORD *)&v3[16] = 4054171642LL;
  KeInitializeEvent((PRKEVENT)&v3[48], NotificationEvent, 0);
  EtwpCovSampCaptureQueueBuffer(a1, (struct _SLIST_ENTRY *)v3);
  return KeWaitForSingleObject(&v3[48], Executive, 0, 0, 0LL);
}
