/*
 * XREFs of sub_180081688 @ 0x180081688
 * Callers:
 *     sub_18008214C @ 0x18008214C (sub_18008214C.c)
 *     sub_180082598 @ 0x180082598 (sub_180082598.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180027C54 @ 0x180027C54 (sub_180027C54.c)
 *     sub_180081B70 @ 0x180081B70 (sub_180081B70.c)
 *     sub_180081CE4 @ 0x180081CE4 (sub_180081CE4.c)
 *     sub_180083A24 @ 0x180083A24 (sub_180083A24.c)
 */

__int64 __fastcall sub_180081688(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // r14
  __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx

  v4 = 0x492492492492492LL;
  v7 = (a2 - *a1) / 56;
  v8 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 3);
  if ( v8 == 0x492492492492492LL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = 0x6DB6DB6DB6DB6DB7LL * ((a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0x492492492492492LL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  v12 = sub_180027C54(v4);
  v13 = sub_18001090C(v12);
  v14 = v13 + 56 * v7;
  sub_180081CE4(v15, v14, a3);
  v16 = a1[1];
  v17 = v13;
  v18 = *a1;
  if ( a2 != v16 )
  {
    sub_180081B70(v18, a2, v13);
    v16 = a1[1];
    v17 = v14 + 56;
    v18 = a2;
  }
  sub_180081B70(v18, v16, v17);
  sub_180083A24(a1, v13, v9, v4);
  return v14;
}
