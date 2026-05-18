/*
 * XREFs of sub_180050540 @ 0x180050540
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008E6B0 @ 0x18008E6B0 (sub_18008E6B0.c)
 *     __RTDynamicCast @ 0x1800FEE97 (__RTDynamicCast.c)
 */

bool __fastcall sub_180050540(unsigned int *a1, __int64 a2)
{
  unsigned int *v4; // rax
  __m128 v5; // xmm4
  __m128 v6; // xmm3
  __m128 v7; // xmm4
  __m128 v8; // xmm3

  if ( !(unsigned __int8)sub_18008E6B0() )
    return 0;
  v4 = (unsigned int *)_RTDynamicCast(
                         a2,
                         0LL,
                         &Spectre::Engine::Component `RTTI Type Descriptor',
                         &Spectre::Engine::Bounds `RTTI Type Descriptor',
                         1);
  v5 = 0LL;
  v6 = 0LL;
  v6.m128_u64[0] = _mm_unpacklo_ps((__m128)a1[22], (__m128)a1[23]).m128_u64[0];
  v5.m128_u64[0] = _mm_unpacklo_ps((__m128)v4[22], (__m128)v4[23]).m128_u64[0];
  if ( (_mm_movemask_ps(_mm_cmpeq_ps(_mm_movelh_ps(v6, (__m128)a1[24]), _mm_movelh_ps(v5, (__m128)v4[24]))) & 7) != 7 )
    return 0;
  v7 = 0LL;
  v8 = 0LL;
  v8.m128_u64[0] = _mm_unpacklo_ps((__m128)a1[25], (__m128)a1[26]).m128_u64[0];
  v7.m128_u64[0] = _mm_unpacklo_ps((__m128)v4[25], (__m128)v4[26]).m128_u64[0];
  return (_mm_movemask_ps(_mm_cmpeq_ps(_mm_movelh_ps(v8, (__m128)a1[27]), _mm_movelh_ps(v7, (__m128)v4[27]))) & 7) == 7;
}
