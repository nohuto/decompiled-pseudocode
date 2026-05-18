/*
 * XREFs of sub_180093940 @ 0x180093940
 * Callers:
 *     sub_180091CE8 @ 0x180091CE8 (sub_180091CE8.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_18008E974 @ 0x18008E974 (sub_18008E974.c)
 */

unsigned __int64 __fastcall sub_180093940(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 result; // rax

  if ( a2 > 0x666666666666666LL )
    sub_180012170();
  v3 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 3);
  v4 = v3 >> 1;
  if ( v3 <= 0x666666666666666LL - (v3 >> 1) )
  {
    v5 = v4 + v3;
    if ( v4 + v3 < a2 )
      v5 = a2;
  }
  else
  {
    v5 = 0x666666666666666LL;
  }
  if ( *a1 )
  {
    sub_18008E974(*a1, a1[1]);
    sub_180010884((char *)*a1, 8 * ((a1[2] - *a1) >> 3));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  if ( v5 > 0x666666666666666LL )
    sub_1800120D4();
  v6 = 40 * v5;
  v7 = sub_180011088(v6);
  *a1 = v7;
  a1[1] = v7;
  result = v6 + v7;
  a1[2] = result;
  return result;
}
