/*
 * XREFs of sub_1800A2A24 @ 0x1800A2A24
 * Callers:
 *     sub_1800A3610 @ 0x1800A3610 (sub_1800A3610.c)
 * Callees:
 *     sub_1800A1EC0 @ 0x1800A1EC0 (sub_1800A1EC0.c)
 */

__m128 __fastcall sub_1800A2A24(__int64 a1)
{
  __m128 result; // xmm0
  __m128 v3; // xmm1

  if ( *(_DWORD *)(a1 + 1816) )
  {
    v3 = sub_1800A1EC0(a1, *(float *)(a1 + 1812));
    result = (__m128)*(unsigned int *)(a1 + 1828);
    if ( result.m128_f32[0] <= v3.m128_f32[0] )
      return v3;
  }
  else
  {
    return (__m128)*(unsigned int *)(a1 + 1828);
  }
  return result;
}
