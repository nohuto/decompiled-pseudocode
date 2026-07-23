/*
 * XREFs of sub_1406DD778 @ 0x1406DD778
 * Callers:
 *     sub_14030B440 @ 0x14030B440 (sub_14030B440.c)
 *     sub_14079D7A8 @ 0x14079D7A8 (sub_14079D7A8.c)
 *     sub_1407BC750 @ 0x1407BC750 (sub_1407BC750.c)
 *     sub_14097CA4C @ 0x14097CA4C (sub_14097CA4C.c)
 * Callees:
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 */

__int64 __fastcall sub_1406DD778(unsigned __int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r11
  __int64 v6; // rdx
  __int64 v7; // rbx
  unsigned __int64 v8; // r11

  v3 = 0LL;
  v4 = a1;
  if ( a3 >= 0 )
  {
    do
    {
      sub_140313C70(v4);
      sub_140313C70(v5);
    }
    while ( v6 != 1 );
  }
  if ( a3 < 3 )
  {
    v7 = (unsigned int)(3 - a3);
    do
    {
      sub_140313C70(v4);
      sub_140313C70(v8);
      --v7;
    }
    while ( v7 );
  }
  return v3;
}
