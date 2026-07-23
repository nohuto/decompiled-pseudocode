/*
 * XREFs of sub_1405EC264 @ 0x1405EC264
 * Callers:
 *     RtlExtendCorrelationVector @ 0x1409BB700 (RtlExtendCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x1409BB8C0 (RtlValidateCorrelationVector.c)
 * Callees:
 *     sub_1409BBA8C @ 0x1409BBA8C (sub_1409BBA8C.c)
 */

__int64 __fastcall sub_1405EC264(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // r8d
  __int64 v4; // r10
  int v5; // r9d
  __int64 i; // rdx
  __int64 result; // rax

  v2 = sub_1409BBA8C(a1, a2, 0LL);
  v5 = v2;
  if ( v2 > 0 )
  {
    for ( i = 0LL; i < v2; ++i )
    {
      if ( !*(_BYTE *)(v4 + i + 1) )
        break;
      ++v3;
    }
  }
  result = 0xFFFFFFFFLL;
  if ( v5 > v3 )
    return (unsigned int)v3;
  return result;
}
