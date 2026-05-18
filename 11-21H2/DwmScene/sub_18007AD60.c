/*
 * XREFs of sub_18007AD60 @ 0x18007AD60
 * Callers:
 *     sub_18007B2D0 @ 0x18007B2D0 (sub_18007B2D0.c)
 *     sub_18007B774 @ 0x18007B774 (sub_18007B774.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_18007AD28 @ 0x18007AD28 (sub_18007AD28.c)
 *     sub_18007AEB8 @ 0x18007AEB8 (sub_18007AEB8.c)
 *     sub_1800A78A4 @ 0x1800A78A4 (sub_1800A78A4.c)
 */

unsigned __int64 __fastcall sub_18007AD60(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // rdi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 result; // rax

  v4 = a2 - *a1;
  v5 = (a1[1] - *a1) >> 7;
  if ( v5 == 0x1FFFFFFFFFFFFFFLL )
    sub_180012170();
  v8 = v5 + 1;
  v9 = (a1[2] - *a1) >> 7;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v8;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    if ( v11 > 0x1FFFFFFFFFFFFFFLL )
      sub_1800120D4();
  }
  else
  {
    v11 = 0x1FFFFFFFFFFFFFFLL;
  }
  v12 = v11 << 7;
  v13 = sub_180011088(v12);
  v14 = v13 + (v4 & 0xFFFFFFFFFFFFFF80uLL);
  v15 = v13;
  sub_1800A78A4(v14, a3);
  v16 = a1[1];
  v17 = *a1;
  if ( a2 == v16 )
  {
    sub_18007AEB8(v17, v16, v15, a1);
  }
  else
  {
    sub_18007AEB8(v17, a2, v15, a1);
    sub_18007AEB8(a2, a1[1], v14 + 128, a1);
  }
  if ( *a1 )
  {
    sub_18007AD28(*a1, a1[1]);
    sub_180010884((char *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFF80uLL);
  }
  *a1 = v15;
  result = v14;
  a1[1] = v15 + (v8 << 7);
  a1[2] = v12 + v15;
  return result;
}
