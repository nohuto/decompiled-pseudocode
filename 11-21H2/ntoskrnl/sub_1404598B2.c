/*
 * XREFs of sub_1404598B2 @ 0x1404598B2
 * Callers:
 *     sub_140459930 @ 0x140459930 (sub_140459930.c)
 *     sub_14052FC00 @ 0x14052FC00 (sub_14052FC00.c)
 *     sub_140A63CE0 @ 0x140A63CE0 (sub_140A63CE0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14052F378 @ 0x14052F378 (sub_14052F378.c)
 *     sub_14052F618 @ 0x14052F618 (sub_14052F618.c)
 */

__int64 __fastcall sub_1404598B2(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF

  v5[1] = 0LL;
  v5[0] = 4LL;
  if ( a2 )
    v5[0] = ((unsigned __int64)(unsigned __int16)*a2 << 32) | 0x14;
  sub_14052F378(a1, v5, 0LL);
  return sub_14052F618(a1, v3, 0LL);
}
