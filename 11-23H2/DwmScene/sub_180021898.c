/*
 * XREFs of sub_180021898 @ 0x180021898
 * Callers:
 *     sub_180021C90 @ 0x180021C90 (sub_180021C90.c)
 *     sub_180024160 @ 0x180024160 (sub_180024160.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_1800216F8 @ 0x1800216F8 (sub_1800216F8.c)
 */

char __fastcall sub_180021898(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  char result; // al
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a2;
  *(_QWORD *)(a1 + 136) = 23LL;
  v5 = v2;
  *(_QWORD *)(a1 + 144) = 0x1900000000LL;
  memset((void *)a1, 0, 0x81uLL);
  result = sub_1800216F8((unsigned __int8 *)&v5, 0x10uLL, a1);
  *(_WORD *)(a1 + 22) = 46;
  return result;
}
