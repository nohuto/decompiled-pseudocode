/*
 * XREFs of EtwpCovSampSampleBufferDecRef @ 0x140603C20
 * Callers:
 *     EtwpCovSampCaptureBufferQueue @ 0x140469FEC (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampSampleBufferReserve @ 0x14046A366 (EtwpCovSampSampleBufferReserve.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x140603270 (EtwpCovSampCaptureFlushSampleBuffers.c)
 * Callees:
 *     EtwpCovSampCaptureQueueBuffer @ 0x14046A0B8 (EtwpCovSampCaptureQueueBuffer.c)
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
    LODWORD(v4) = EtwpCovSampCaptureQueueBuffer(a1, (struct _SLIST_ENTRY *)a2);
  }
  return v4;
}
