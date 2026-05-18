/*
 * XREFs of ?CompareInternal@Bounds@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z @ 0x18004A230
 * Callers:
 *     <none>
 * Callees:
 *     ?CompareInternal@Component@Engine@Spectre@@MEBA_NAEBV123@@Z @ 0x180081340 (-CompareInternal@Component@Engine@Spectre@@MEBA_NAEBV123@@Z.c)
 *     __RTDynamicCast_0 @ 0x1800E38E0 (__RTDynamicCast_0.c)
 */

bool __fastcall Spectre::Engine::Bounds::CompareInternal(Spectre::Engine::Bounds *this, const struct Component *a2)
{
  unsigned int *v4; // rax
  __m128 v5; // xmm4
  __m128 v6; // xmm3
  __m128 v7; // xmm4
  __m128 v8; // xmm3

  if ( !Spectre::Engine::Component::CompareInternal(this, a2) )
    return 0;
  v4 = (unsigned int *)_RTDynamicCast_0(
                         a2,
                         0LL,
                         &Spectre::Engine::Component `RTTI Type Descriptor',
                         &Spectre::Engine::Bounds `RTTI Type Descriptor',
                         1);
  v5 = 0LL;
  v6 = 0LL;
  v6.m128_u64[0] = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 22), (__m128)*((unsigned int *)this + 23)).m128_u64[0];
  v5.m128_u64[0] = _mm_unpacklo_ps((__m128)v4[22], (__m128)v4[23]).m128_u64[0];
  if ( (_mm_movemask_ps(_mm_cmpeq_ps(_mm_movelh_ps(v6, (__m128)*((unsigned int *)this + 24)), _mm_movelh_ps(v5, (__m128)v4[24]))) & 7) != 7 )
    return 0;
  v7 = 0LL;
  v8 = 0LL;
  v8.m128_u64[0] = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 25), (__m128)*((unsigned int *)this + 26)).m128_u64[0];
  v7.m128_u64[0] = _mm_unpacklo_ps((__m128)v4[25], (__m128)v4[26]).m128_u64[0];
  return (_mm_movemask_ps(_mm_cmpeq_ps(_mm_movelh_ps(v8, (__m128)*((unsigned int *)this + 27)), _mm_movelh_ps(v7, (__m128)v4[27]))) & 7) == 7;
}
