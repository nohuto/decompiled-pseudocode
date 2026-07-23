/*
 * XREFs of sub_140562EBC @ 0x140562EBC
 * Callers:
 *     sub_14056322C @ 0x14056322C (sub_14056322C.c)
 *     sub_140A687F0 @ 0x140A687F0 (sub_140A687F0.c)
 * Callees:
 *     sub_140294D90 @ 0x140294D90 (sub_140294D90.c)
 *     sub_14041FAB0 @ 0x14041FAB0 (sub_14041FAB0.c)
 */

__int64 __fastcall sub_140562EBC(char **a1, __int64 a2)
{
  char v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  *a1 = sub_14041FAB0();
  return sub_140294D90((__int64)&v4, (__int64)&v5, a2);
}
