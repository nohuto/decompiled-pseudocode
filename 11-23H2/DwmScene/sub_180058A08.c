/*
 * XREFs of sub_180058A08 @ 0x180058A08
 * Callers:
 *     sub_180059EA8 @ 0x180059EA8 (sub_180059EA8.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18002F250 @ 0x18002F250 (sub_18002F250.c)
 *     sub_180058F44 @ 0x180058F44 (sub_180058F44.c)
 *     sub_1800596AC @ 0x1800596AC (sub_1800596AC.c)
 *     sub_18005E670 @ 0x18005E670 (sub_18005E670.c)
 *     sub_18005E6B8 @ 0x18005E6B8 (sub_18005E6B8.c)
 */

__int64 __fastcall sub_180058A08(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx

  v3 = *a1;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 4);
  if ( v7 == 0x555555555555555LL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = sub_18005E670(a1, v7 + 1);
  v10 = sub_18002F250(v9);
  v11 = sub_18001090C(v10);
  v12 = v11 + 48 * ((a2 - v3) / 48);
  sub_1800596AC(v12, a3);
  v13 = a1[1];
  v14 = v11;
  v15 = *a1;
  if ( a2 != v13 )
  {
    sub_180058F44(v15, a2, v11);
    v13 = a1[1];
    v14 = v12 + 48;
    v15 = a2;
  }
  sub_180058F44(v15, v13, v14);
  sub_18005E6B8(a1, v11, v8, v9);
  return v12;
}
