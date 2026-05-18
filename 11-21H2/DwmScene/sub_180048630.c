/*
 * XREFs of sub_180048630 @ 0x180048630
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008E6B0 @ 0x18008E6B0 (sub_18008E6B0.c)
 *     __RTDynamicCast @ 0x1800FEE97 (__RTDynamicCast.c)
 */

bool __fastcall sub_180048630(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  bool result; // al

  result = 0;
  if ( (unsigned __int8)sub_18008E6B0() )
  {
    v4 = _RTDynamicCast(
           a2,
           0LL,
           &Spectre::Engine::Component `RTTI Type Descriptor',
           &Spectre::Engine::Light `RTTI Type Descriptor',
           1);
    if ( *(_DWORD *)(v4 + 128) == *(_DWORD *)(a1 + 128)
      && *(_DWORD *)(v4 + 120) == *(_DWORD *)(a1 + 120)
      && *(_BYTE *)(v4 + 124) == *(_BYTE *)(a1 + 124)
      && !_mm_movemask_ps(_mm_cmpneq_ps(*(__m128 *)(v4 + 88), *(__m128 *)(a1 + 88)))
      && *(float *)(v4 + 104) == *(float *)(a1 + 104)
      && *(float *)(v4 + 116) == *(float *)(a1 + 116)
      && *(float *)(v4 + 112) == *(float *)(a1 + 112)
      && *(_DWORD *)(v4 + 108) == *(_DWORD *)(a1 + 108) )
    {
      return 1;
    }
  }
  return result;
}
