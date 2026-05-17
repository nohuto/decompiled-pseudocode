/*
 * XREFs of RtlpGetCorrelationVectorEndPosition @ 0x1801089B8
 * Callers:
 *     RtlExtendCorrelationVector @ 0x1801085E0 (RtlExtendCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x1801087D0 (RtlValidateCorrelationVector.c)
 * Callees:
 *     RtlpGetCorrelationVectorBufferLength @ 0x180108994 (RtlpGetCorrelationVectorBufferLength.c)
 */

__int64 __fastcall RtlpGetCorrelationVectorEndPosition(_BYTE *a1)
{
  int CorrelationVectorBufferLength; // eax
  __int64 v2; // rcx
  int v3; // r8d
  int v4; // r9d
  __int64 i; // rdx
  __int64 result; // rax

  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(a1);
  v4 = CorrelationVectorBufferLength;
  if ( CorrelationVectorBufferLength > 0 )
  {
    for ( i = 0LL; i < CorrelationVectorBufferLength; ++i )
    {
      if ( !*(_BYTE *)(v2 + i + 1) )
        break;
      ++v3;
    }
  }
  result = 0xFFFFFFFFLL;
  if ( v4 > v3 )
    return (unsigned int)v3;
  return result;
}
