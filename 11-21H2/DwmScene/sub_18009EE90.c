/*
 * XREFs of sub_18009EE90 @ 0x18009EE90
 * Callers:
 *     sub_18009ED14 @ 0x18009ED14 (sub_18009ED14.c)
 *     sub_18009F81C @ 0x18009F81C (sub_18009F81C.c)
 *     sub_18009FCC0 @ 0x18009FCC0 (sub_18009FCC0.c)
 *     sub_18009FF18 @ 0x18009FF18 (sub_18009FF18.c)
 *     sub_1800A0210 @ 0x1800A0210 (sub_1800A0210.c)
 *     sub_1800A068C @ 0x1800A068C (sub_1800A068C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009EE90(__int64 a1, __int64 a2)
{
  for ( ; a2; --a2 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 12) = 1065353216;
    a1 += 16LL;
  }
  return a1;
}
