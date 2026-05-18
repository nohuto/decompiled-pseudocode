/*
 * XREFs of sub_18002BCE8 @ 0x18002BCE8
 * Callers:
 *     sub_18002BE50 @ 0x18002BE50 (sub_18002BE50.c)
 *     sub_18002BF28 @ 0x18002BF28 (sub_18002BF28.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_18002BE2C @ 0x18002BE2C (sub_18002BE2C.c)
 */

unsigned __int64 __fastcall sub_18002BCE8(__int64 *a1, char *a2, _QWORD *a3, _BYTE *a4)
{
  char *v5; // r15
  __int64 v6; // rdi
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // r15
  __int64 v17; // rsi
  __int64 v18; // r8
  char *v19; // rdx
  char *v20; // rcx
  unsigned __int64 result; // rax

  v5 = &a2[-*a1];
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    sub_180012170();
  v10 = v6 + 1;
  v11 = (a1[2] - *a1) >> 4;
  v12 = v11 >> 1;
  if ( v11 <= 0xFFFFFFFFFFFFFFFLL - (v11 >> 1) )
  {
    v13 = v10;
    if ( v12 + v11 >= v10 )
      v13 = v12 + v11;
    if ( v13 > 0xFFFFFFFFFFFFFFFLL )
      sub_1800120D4();
  }
  else
  {
    v13 = 0xFFFFFFFFFFFFFFFLL;
  }
  v14 = 16 * v13;
  v15 = sub_180011088(v14);
  v16 = v15 + ((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFF0uLL);
  v17 = v15;
  v18 = v15;
  *(_QWORD *)v16 = *a3;
  *(_BYTE *)(v16 + 8) = *a4;
  v19 = (char *)a1[1];
  v20 = (char *)*a1;
  if ( a2 != v19 )
  {
    sub_18002BE2C(v20, a2, v15);
    v19 = (char *)a1[1];
    v18 = v16 + 16;
    v20 = a2;
  }
  sub_18002BE2C(v20, v19, v18);
  if ( *a1 )
    sub_180010884((char *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
  *a1 = v17;
  result = v16;
  a1[1] = v17 + 16 * v10;
  a1[2] = v14 + v17;
  return result;
}
