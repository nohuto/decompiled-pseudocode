/*
 * XREFs of EtwpCovSampSampleBufferDecRef @ 0x140603C90
 * Callers:
 *     EtwpCovSampCaptureBufferQueue @ 0x14046998C (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampSampleBufferReserve @ 0x140469D06 (EtwpCovSampSampleBufferReserve.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1406032E0 (EtwpCovSampCaptureFlushSampleBuffers.c)
 * Callees:
 *     EtwpCovSampCaptureQueueBuffer @ 0x140469A58 (EtwpCovSampCaptureQueueBuffer.c)
 */

int __fastcall EtwpCovSampSampleBufferDecRef(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 48), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    LODWORD(v4) = EtwpCovSampCaptureQueueBuffer(a1, (_SLIST_ENTRY *)a2);
  }
  return v4;
}
