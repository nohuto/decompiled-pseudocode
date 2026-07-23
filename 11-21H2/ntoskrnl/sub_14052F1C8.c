/*
 * XREFs of sub_14052F1C8 @ 0x14052F1C8
 * Callers:
 *     sub_140A63CE0 @ 0x140A63CE0 (sub_140A63CE0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14052F378 @ 0x14052F378 (sub_14052F378.c)
 *     sub_14052F618 @ 0x14052F618 (sub_14052F618.c)
 */

__int64 __fastcall sub_14052F1C8(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF

  v4[1] = 0LL;
  v4[0] = 17LL;
  sub_14052F378(a1, v4, 0LL);
  return sub_14052F618(a1, v2, 0LL);
}
