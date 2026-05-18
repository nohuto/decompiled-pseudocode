/*
 * XREFs of sub_18009ED14 @ 0x18009ED14
 * Callers:
 *     sub_18009FCC0 @ 0x18009FCC0 (sub_18009FCC0.c)
 *     sub_18009FF18 @ 0x18009FF18 (sub_18009FF18.c)
 *     sub_1800A0210 @ 0x1800A0210 (sub_1800A0210.c)
 *     sub_1800A068C @ 0x1800A068C (sub_1800A068C.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_18009EE6C @ 0x18009EE6C (sub_18009EE6C.c)
 *     sub_18009EE90 @ 0x18009EE90 (sub_18009EE90.c)
 */

unsigned __int64 __fastcall sub_18009ED14(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rcx
  __int64 v6; // rbp
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rsi
  __int64 v10; // r14
  unsigned __int64 result; // rax

  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    sub_180012170();
  v4 = a1[1] - *a1;
  v5 = (a1[2] - *a1) >> 4;
  v6 = v4 >> 4;
  v7 = v5 >> 1;
  if ( v5 <= 0xFFFFFFFFFFFFFFFLL - (v5 >> 1) )
  {
    v8 = v7 + v5;
    if ( v7 + v5 >= a2 )
    {
      if ( v8 > 0xFFFFFFFFFFFFFFFLL )
        sub_1800120D4();
    }
    else
    {
      v8 = a2;
    }
  }
  else
  {
    v8 = 0xFFFFFFFFFFFFFFFLL;
  }
  v9 = 16 * v8;
  v10 = sub_180011088(v9);
  sub_18009EE90(v10 + 16 * v6, a2 - v6);
  sub_18009EE6C(*a1, a1[1], v10);
  if ( *a1 )
    sub_180010884((char *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
  result = v9 + v10;
  *a1 = v10;
  a1[1] = v10 + 16 * a2;
  a1[2] = v9 + v10;
  return result;
}
