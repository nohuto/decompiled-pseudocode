/*
 * XREFs of RtlpHpHeapHandleError @ 0x180115510
 * Callers:
 *     RtlpLogHeapFailure @ 0x180121540 (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180079D50 (RtlCaptureStackBackTrace.c)
 *     HeapCommitFailAvoidTriageRules @ 0x180114F10 (HeapCommitFailAvoidTriageRules.c)
 *     RtlpHeapHandleError @ 0x180115298 (RtlpHeapHandleError.c)
 *     RtlpHpRaiseFatalLimitError @ 0x1801157BC (RtlpHpRaiseFatalLimitError.c)
 *     RtlpLocateRelatedBlocks @ 0x180116B38 (RtlpLocateRelatedBlocks.c)
 *     RtlpHeapExceptionFilter @ 0x180121428 (RtlpHeapExceptionFilter.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpHeapHandleError(int a1, __int64 a2, __int64 a3)
{
  memset_thunk_772440563353939046(&BackTrace, 0, 0x100uLL);
  RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
  if ( a1 == 20 )
  {
    RtlpHpRaiseFatalLimitError(RtlpHpHeapHandleError);
  }
  else if ( a1 == 21 )
  {
    HeapCommitFailAvoidTriageRules();
  }
  if ( a1 == 3 )
    RtlpLocateRelatedBlocks(a2, a3);
  return RtlpHeapHandleError();
}
