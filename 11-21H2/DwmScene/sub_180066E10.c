/*
 * XREFs of sub_180066E10 @ 0x180066E10
 * Callers:
 *     sub_1800673A0 @ 0x1800673A0 (sub_1800673A0.c)
 * Callees:
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_180067590 @ 0x180067590 (sub_180067590.c)
 */

__int64 __fastcall sub_180066E10(__int64 a1, _BYTE *a2)
{
  size_t v2; // r8
  __int64 v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v5[3] = 15LL;
  v5[2] = 0LL;
  v2 = -1LL;
  LOBYTE(v5[0]) = 0;
  do
    ++v2;
  while ( a2[v2] );
  sub_180012190(v5, a2, v2);
  return sub_180067590(a1, v5);
}
