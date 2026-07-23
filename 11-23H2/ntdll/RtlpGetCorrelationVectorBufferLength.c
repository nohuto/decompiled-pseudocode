/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x180109DAC
 * Callers:
 *     RtlExtendCorrelationVector @ 0x180109A10 (RtlExtendCorrelationVector.c)
 *     RtlIncrementCorrelationVector @ 0x180109A60 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x180109BE0 (RtlValidateCorrelationVector.c)
 *     RtlpGetCorrelationVectorEndPosition @ 0x180109DD0 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x180109E14 (RtlpGetCorrelationVectorLastDotPosition.c)
 *     RtlpGetLastContiguosBase64Position @ 0x180109E60 (RtlpGetLastContiguosBase64Position.c)
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
