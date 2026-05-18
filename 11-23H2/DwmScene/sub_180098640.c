/*
 * XREFs of sub_180098640 @ 0x180098640
 * Callers:
 *     sub_1800983E8 @ 0x1800983E8 (sub_1800983E8.c)
 * Callees:
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18005EF18 @ 0x18005EF18 (sub_18005EF18.c)
 *     sub_180081E00 @ 0x180081E00 (sub_180081E00.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180098640(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 64LL )
  {
    sub_180017648((_QWORD *)a3, i);
    *(_DWORD *)(a3 + 32) = *(_DWORD *)(i + 32);
    sub_180081E00((__int64 *)(a3 + 40), i + 40);
    a3 += 64LL;
  }
  sub_18005EF18(a3, a3);
  return a3;
}
