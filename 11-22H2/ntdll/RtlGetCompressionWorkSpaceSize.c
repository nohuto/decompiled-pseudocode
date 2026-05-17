/*
 * XREFs of RtlGetCompressionWorkSpaceSize @ 0x1800842A0
 * Callers:
 *     EtwpInitializeCompression @ 0x180125158 (EtwpInitializeCompression.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetCompressionWorkSpaceSize(__int64 a1)
{
  unsigned __int16 v1; // ax

  v1 = (unsigned __int8)a1;
  if ( (unsigned __int8)a1 < 2u )
    return 3221225485LL;
  if ( (unsigned __int8)a1 > 5u )
    return 3221226079LL;
  LOWORD(a1) = a1 & 0xFF00;
  return RtlWorkSpaceProcs[v1](a1);
}
