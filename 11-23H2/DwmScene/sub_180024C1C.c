/*
 * XREFs of sub_180024C1C @ 0x180024C1C
 * Callers:
 *     sub_18002CCA0 @ 0x18002CCA0 (sub_18002CCA0.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18001D0F4 @ 0x18001D0F4 (sub_18001D0F4.c)
 *     sub_180024E60 @ 0x180024E60 (sub_180024E60.c)
 *     sub_180025108 @ 0x180025108 (sub_180025108.c)
 *     sub_180027568 @ 0x180027568 (sub_180027568.c)
 */

__int64 __fastcall sub_180024C1C(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx

  v3 = 0x3FFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 6;
  if ( v6 == 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 6;
  v11 = v10 >> 1;
  if ( v10 <= 0x3FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  v12 = sub_180024E60(v3);
  v13 = sub_18001090C(v12);
  v14 = v13 + (v4 & 0xFFFFFFFFFFFFFFC0uLL);
  v15 = v13;
  sub_18001D0F4(v14, a3);
  v16 = a1[1];
  v17 = v15;
  v18 = *a1;
  if ( a2 != v16 )
  {
    sub_180025108(v18, a2, v15);
    v16 = a1[1];
    v17 = v14 + 64;
    v18 = a2;
  }
  sub_180025108(v18, v16, v17);
  sub_180027568(a1, v15, v9, v3);
  return v14;
}
