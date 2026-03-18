/*
 * XREFs of RtlpHpHeapHandleError @ 0x1405B5074
 * Callers:
 *     RtlpLogHeapFailure @ 0x1405B4ACC (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1402276E0 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x140435A00 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x1405B49B4 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x1405B502C (RtlpHeapHandleError.c)
 *     RtlpLocateRelatedBlocks @ 0x1405B5104 (RtlpLocateRelatedBlocks.c)
 */

void __fastcall __noreturn RtlpHpHeapHandleError(int a1, __int64 a2, __int64 a3)
{
  memset(&BackTrace, 0, 0x100uLL);
  RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
  if ( a1 == 3 )
    RtlpLocateRelatedBlocks(a2, a3);
  RtlpHeapHandleError();
}
