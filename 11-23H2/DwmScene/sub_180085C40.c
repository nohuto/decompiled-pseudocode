/*
 * XREFs of sub_180085C40 @ 0x180085C40
 * Callers:
 *     sub_180084018 @ 0x180084018 (sub_180084018.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_180017028 @ 0x180017028 (sub_180017028.c)
 *     sub_18001F54C @ 0x18001F54C (sub_18001F54C.c)
 */

unsigned __int64 __fastcall sub_180085C40(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 result; // rax

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    sub_180011B80();
  v3 = sub_18001F54C(a1, a2);
  if ( *a1 )
  {
    sub_1800100E8((void *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFFCuLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  v4 = sub_180017028(v3);
  v5 = sub_18001090C(v4);
  *a1 = v5;
  a1[1] = v5;
  result = v5 + 4 * v3;
  a1[2] = result;
  return result;
}
