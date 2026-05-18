/*
 * XREFs of sub_180065994 @ 0x180065994
 * Callers:
 *     sub_18001A2B0 @ 0x18001A2B0 (sub_18001A2B0.c)
 *     sub_18005F684 @ 0x18005F684 (sub_18005F684.c)
 * Callees:
 *     sub_18006560C @ 0x18006560C (sub_18006560C.c)
 */

void __fastcall sub_180065994(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  if ( (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*(unsigned __int64 *)(a1 + 344), (__m128)a2)) & 3) != 3
    || (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*(unsigned __int64 *)(a1 + 352), (__m128)a3)) & 3) != 3
    || a4 != *(_DWORD *)(a1 + 360) )
  {
    *(_QWORD *)(a1 + 344) = a2;
    *(_QWORD *)(a1 + 352) = a3;
    *(_DWORD *)(a1 + 360) = a4;
    sub_18006560C(a1, 4);
  }
}
