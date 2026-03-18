/*
 * XREFs of EtwpCovSampLookasidePop @ 0x14046A208
 * Callers:
 *     EtwpCovSampCaptureBufferGet @ 0x140469EDC (EtwpCovSampCaptureBufferGet.c)
 *     EtwpCovSampSampleBufferReserve @ 0x14046A366 (EtwpCovSampSampleBufferReserve.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140603480 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140428EB0 (RtlpInterlockedPopEntrySList.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x14046A18A (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampCaptureQueueRebalance @ 0x1406036A8 (EtwpCovSampCaptureQueueRebalance.c)
 */

PSLIST_ENTRY __fastcall EtwpCovSampLookasidePop(__int64 a1, __int64 a2)
{
  PSLIST_ENTRY result; // rax

  if ( *(_WORD *)a2 && (result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)a2)) != 0LL )
  {
    if ( *(_DWORD *)(a2 + 40) )
    {
      result->Next = (_SLIST_ENTRY *)6941;
      return result;
    }
    EtwpCovSampCaptureReleaseToLookaside(a1, a2, result);
  }
  else if ( *(_DWORD *)(a2 + 52) < *(_DWORD *)(a2 + 56) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
    EtwpCovSampCaptureQueueRebalance(a1);
  }
  return 0LL;
}
