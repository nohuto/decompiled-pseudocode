/*
 * XREFs of sub_18005D564 @ 0x18005D564
 * Callers:
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 *     sub_180057C24 @ 0x180057C24 (sub_180057C24.c)
 * Callees:
 *     sub_18005D2CC @ 0x18005D2CC (sub_18005D2CC.c)
 */

void __fastcall sub_18005D564(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  char v4; // al
  _DWORD *v5; // rdx

  v4 = _mm_movemask_ps(_mm_cmpeq_ps((__m128)*(unsigned __int64 *)(a1 + 344), (__m128)a2));
  v5 = (_DWORD *)(a1 + 352);
  if ( (v4 & 3) != 3
    || (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*(unsigned __int64 *)v5, (__m128)a3)) & 3) != 3
    || a4 != *(_DWORD *)(a1 + 360) )
  {
    *(_QWORD *)(a1 + 344) = a2;
    *v5 = a3;
    *(_DWORD *)(a1 + 356) = HIDWORD(a3);
    *(_DWORD *)(a1 + 360) = a4;
    sub_18005D2CC(a1, 4);
  }
}
