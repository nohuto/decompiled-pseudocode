/*
 * XREFs of sub_1800817C4 @ 0x1800817C4
 * Callers:
 *     sub_180082598 @ 0x180082598 (sub_180082598.c)
 *     sub_180084E14 @ 0x180084E14 (sub_180084E14.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180029054 @ 0x180029054 (sub_180029054.c)
 *     sub_180081C14 @ 0x180081C14 (sub_180081C14.c)
 *     sub_180081F38 @ 0x180081F38 (sub_180081F38.c)
 *     sub_18008390C @ 0x18008390C (sub_18008390C.c)
 *     sub_180083AB0 @ 0x180083AB0 (sub_180083AB0.c)
 */

__int64 __fastcall sub_1800817C4(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx

  v3 = *a1;
  v7 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  if ( v7 == 0x666666666666666LL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = sub_18008390C(a1, v7 + 1);
  v10 = sub_180029054(v9);
  v11 = sub_18001090C(v10);
  v12 = (__int64)((unsigned __int128)((a2 - v3) * (__int128)0x6666666666666667LL) >> 64) >> 4;
  v13 = v11 + 40 * ((a2 - v3) / 40);
  sub_180081F38(v11 + 40 * ((v12 >> 63) + v12), a3);
  v14 = a1[1];
  v15 = v11;
  v16 = *a1;
  if ( a2 != v14 )
  {
    sub_180081C14(v16, a2, v11);
    v14 = a1[1];
    v15 = v13 + 40;
    v16 = a2;
  }
  sub_180081C14(v16, v14, v15);
  sub_180083AB0(a1, v11, v8, v9);
  return v13;
}
