/*
 * XREFs of sub_1800B0960 @ 0x1800B0960
 * Callers:
 *     sub_18003D868 @ 0x18003D868 (sub_18003D868.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800B0960(__int64 a1, __m128 *a2)
{
  __int64 result; // rax

  result = (unsigned int)_mm_movemask_ps(_mm_cmpneq_ps(*a2, *(__m128 *)(a1 + 44)));
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a1 + 44) = a2->m128_i32[0];
    *(_DWORD *)(a1 + 48) = a2->m128_i32[1];
    *(_DWORD *)(a1 + 52) = a2->m128_i32[2];
    result = a2->m128_u32[3];
    *(_DWORD *)(a1 + 56) = result;
    *(_BYTE *)(a1 + 61) = 1;
  }
  return result;
}
