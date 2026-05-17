/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x18008C4F0
 * Callers:
 *     RtlExtendCorrelationVector @ 0x18008C330 (RtlExtendCorrelationVector.c)
 *     RtlpGetCorrelationVectorEndPosition @ 0x18008C374 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlIncrementCorrelationVector @ 0x18008C3C0 (RtlIncrementCorrelationVector.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x18008C4A4 (RtlpGetCorrelationVectorLastDotPosition.c)
 *     RtlValidateCorrelationVector @ 0x1801088F0 (RtlValidateCorrelationVector.c)
 *     RtlpGetLastContiguosBase64Position @ 0x1801089DC (RtlpGetLastContiguosBase64Position.c)
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
