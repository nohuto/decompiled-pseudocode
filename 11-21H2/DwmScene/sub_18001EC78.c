/*
 * XREFs of sub_18001EC78 @ 0x18001EC78
 * Callers:
 *     sub_18001F06C @ 0x18001F06C (sub_18001F06C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_18001E474 @ 0x18001E474 (sub_18001E474.c)
 *     sub_18001EBA0 @ 0x18001EBA0 (sub_18001EBA0.c)
 */

__int64 *__fastcall sub_18001EC78(__int64 *a1)
{
  size_t v2; // r8
  _BYTE Src[256]; // [rsp+40h] [rbp-118h] BYREF

  sub_18001EBA0();
  sub_18001E474();
  a1[3] = 15LL;
  a1[2] = 0LL;
  *(_BYTE *)a1 = 0;
  v2 = -1LL;
  do
    ++v2;
  while ( Src[v2] );
  sub_180012190(a1, Src, v2);
  return a1;
}
