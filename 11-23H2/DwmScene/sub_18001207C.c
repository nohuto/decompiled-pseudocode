/*
 * XREFs of sub_18001207C @ 0x18001207C
 * Callers:
 *     sub_1800131D0 @ 0x1800131D0 (sub_1800131D0.c)
 *     sub_18007E6B0 @ 0x18007E6B0 (sub_18007E6B0.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180010B48 @ 0x180010B48 (sub_180010B48.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_180012228 @ 0x180012228 (sub_180012228.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001306C @ 0x18001306C (sub_18001306C.c)
 */

unsigned __int64 __fastcall sub_18001207C(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    sub_180011B80();
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  v12 = sub_180010B48(v3);
  v13 = sub_18001090C(v12);
  v14 = v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL);
  v15 = v13;
  sub_18001246C(v14, a3);
  v16 = a1[1];
  v17 = v15;
  v18 = *a1;
  if ( a2 != v16 )
  {
    sub_180012228(v18, a2, v15);
    v16 = a1[1];
    v17 = v14 + 16;
    v18 = a2;
  }
  sub_180012228(v18, v16, v17);
  sub_18001306C(a1, v15, v9, v3);
  return v14;
}
