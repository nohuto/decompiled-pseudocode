/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x1409BF110
 * Callers:
 *     RtlpGetCorrelationVectorEndPosition @ 0x1405AF724 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x1405AF76C (RtlpGetCorrelationVectorLastDotPosition.c)
 *     RtlExtendCorrelationVector @ 0x1409BED80 (RtlExtendCorrelationVector.c)
 *     RtlIncrementCorrelationVector @ 0x1409BEDD0 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x1409BEF40 (RtlValidateCorrelationVector.c)
 *     RtlpGetLastContiguosBase64Position @ 0x1409BF134 (RtlpGetLastContiguosBase64Position.c)
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
