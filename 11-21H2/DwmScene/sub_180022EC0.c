/*
 * XREFs of sub_180022EC0 @ 0x180022EC0
 * Callers:
 *     sub_180024068 @ 0x180024068 (sub_180024068.c)
 *     sub_18002596C @ 0x18002596C (sub_18002596C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_180022920 @ 0x180022920 (sub_180022920.c)
 */

_QWORD *__fastcall sub_180022EC0(_QWORD *a1)
{
  _QWORD *result; // rax
  GUID pguid; // [rsp+20h] [rbp-28h] BYREF

  a1[19] = 127LL;
  pguid = 0LL;
  CoCreateGuid(&pguid);
  a1[17] = 23LL;
  a1[18] = 0x1900000000LL;
  memset(a1, 0, 0x81uLL);
  sub_180022920((unsigned __int8 *)&pguid, 0x10uLL, (__int64)a1);
  result = a1;
  *((_WORD *)a1 + 11) = 46;
  return result;
}
