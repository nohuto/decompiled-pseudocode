/*
 * XREFs of sub_1800A6F80 @ 0x1800A6F80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800122D0 @ 0x1800122D0 (sub_1800122D0.c)
 *     sub_18008E6B0 @ 0x18008E6B0 (sub_18008E6B0.c)
 *     __RTDynamicCast @ 0x1800FEE97 (__RTDynamicCast.c)
 */

bool __fastcall sub_1800A6F80(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  bool result; // al

  result = 0;
  if ( sub_18008E6B0(a1, a2) )
  {
    v4 = _RTDynamicCast(
           a2,
           0LL,
           &Spectre::Engine::Component `RTTI Type Descriptor',
           &Spectre::Engine::Aimer `RTTI Type Descriptor',
           1);
    if ( !sub_1800122D0((_QWORD *)(v4 + 96), (_QWORD *)(a1 + 96))
      && *(_DWORD *)(v5 + 88) == *(_DWORD *)(a1 + 88)
      && (_mm_movemask_ps(
            _mm_cmpeq_ps(
              _mm_movelh_ps((__m128)*(unsigned __int64 *)(v5 + 112), (__m128)*(unsigned int *)(v5 + 120)),
              _mm_movelh_ps((__m128)*(unsigned __int64 *)(a1 + 112), (__m128)*(unsigned int *)(a1 + 120)))) & 7) == 7
      && (_mm_movemask_ps(
            _mm_cmpeq_ps(
              _mm_movelh_ps((__m128)*(unsigned __int64 *)(v5 + 124), (__m128)*(unsigned int *)(v5 + 132)),
              _mm_movelh_ps((__m128)*(unsigned __int64 *)(a1 + 124), (__m128)*(unsigned int *)(a1 + 132)))) & 7) == 7
      && (_mm_movemask_ps(
            _mm_cmpeq_ps(
              _mm_movelh_ps((__m128)*(unsigned __int64 *)(v5 + 140), (__m128)*(unsigned int *)(v5 + 148)),
              _mm_movelh_ps((__m128)*(unsigned __int64 *)(a1 + 140), (__m128)*(unsigned int *)(a1 + 148)))) & 7) == 7
      && *(float *)(v5 + 136) == *(float *)(a1 + 136) )
    {
      return 1;
    }
  }
  return result;
}
