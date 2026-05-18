/*
 * XREFs of sub_18008C4A0 @ 0x18008C4A0
 * Callers:
 *     sub_18008BAC8 @ 0x18008BAC8 (sub_18008BAC8.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_18007CA00 @ 0x18007CA00 (sub_18007CA00.c)
 */

__int64 __fastcall sub_18008C4A0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8

  v2 = 0x555555555555555LL;
  if ( a2 > 0x555555555555555LL )
    sub_180011B80();
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 4);
  v5 = v4 >> 1;
  if ( v4 <= 0x555555555555555LL - (v4 >> 1) )
  {
    v2 = v5 + v4;
    if ( v5 + v4 < a2 )
      v2 = a2;
  }
  if ( *a1 )
  {
    sub_18007CA00(*a1, a1[1]);
    sub_1800100E8((void *)*a1, 16 * ((a1[2] - *a1) >> 4));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return sub_180087E94(a1, v2);
}
