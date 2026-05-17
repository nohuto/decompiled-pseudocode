/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x180108994
 * Callers:
 *     RtlExtendCorrelationVector @ 0x1801085E0 (RtlExtendCorrelationVector.c)
 *     RtlIncrementCorrelationVector @ 0x180108630 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x1801087D0 (RtlValidateCorrelationVector.c)
 *     RtlpGetCorrelationVectorEndPosition @ 0x1801089B8 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetLastContiguosBase64Position @ 0x1801089FC (RtlpGetLastContiguosBase64Position.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetCorrelationVectorBufferLength(_BYTE *a1)
{
  __int64 result; // rax

  if ( *a1 == 1 )
    return 65LL;
  result = 0xFFFFFFFFLL;
  if ( *a1 == 2 )
    return 129LL;
  return result;
}
