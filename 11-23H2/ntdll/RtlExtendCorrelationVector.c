/*
 * XREFs of RtlExtendCorrelationVector @ 0x180109A40
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetCorrelationVectorBufferLength @ 0x180109DDC (RtlpGetCorrelationVectorBufferLength.c)
 *     RtlpGetCorrelationVectorEndPosition @ 0x180109E00 (RtlpGetCorrelationVectorEndPosition.c)
 */

__int64 RtlExtendCorrelationVector()
{
  int CorrelationVectorBufferLength; // eax
  __int64 v1; // rcx
  unsigned int v2; // r10d
  __int64 v3; // r11

  if ( (int)RtlpGetCorrelationVectorEndPosition() < 0 )
    return (unsigned int)-2147483643;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength();
  if ( (int)v3 >= CorrelationVectorBufferLength - 3 )
  {
    return (unsigned int)-2147483643;
  }
  else
  {
    *(_WORD *)(v3 + v1 + 1) = 12334;
    *(_BYTE *)(v3 + v1 + 3) = v2;
  }
  return v2;
}
