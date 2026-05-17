/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x180109DDC
 * Callers:
 *     RtlExtendCorrelationVector @ 0x180109A40 (RtlExtendCorrelationVector.c)
 *     RtlIncrementCorrelationVector @ 0x180109A90 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x180109C10 (RtlValidateCorrelationVector.c)
 *     RtlpGetCorrelationVectorEndPosition @ 0x180109E00 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x180109E44 (RtlpGetCorrelationVectorLastDotPosition.c)
 *     RtlpGetLastContiguosBase64Position @ 0x180109E90 (RtlpGetLastContiguosBase64Position.c)
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
