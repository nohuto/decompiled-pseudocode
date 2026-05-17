/*
 * XREFs of RtlpHpHeapHandleError @ 0x180115130
 * Callers:
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x18007FE00 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     HeapCommitFailAvoidTriageRules @ 0x180114AC0 (HeapCommitFailAvoidTriageRules.c)
 *     RtlpHeapHandleError @ 0x180114EB0 (RtlpHeapHandleError.c)
 *     RtlpHpRaiseFatalLimitError @ 0x1801153DC (RtlpHpRaiseFatalLimitError.c)
 *     RtlpLocateRelatedBlocks @ 0x180116748 (RtlpLocateRelatedBlocks.c)
 *     RtlpHeapExceptionFilter @ 0x18011F538 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpHeapHandleError(int a1, __int64 a2, __int64 a3)
{
  memset(&BackTrace, 0, 0x100uLL);
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
