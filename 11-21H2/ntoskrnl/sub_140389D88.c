/*
 * XREFs of sub_140389D88 @ 0x140389D88
 * Callers:
 *     sub_1406759F8 @ 0x1406759F8 (sub_1406759F8.c)
 *     sub_14075717C @ 0x14075717C (sub_14075717C.c)
 * Callees:
 *     sub_140372644 @ 0x140372644 (sub_140372644.c)
 *     sub_1403C68CC @ 0x1403C68CC (sub_1403C68CC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140646E04 @ 0x140646E04 (sub_140646E04.c)
 */

__int64 __fastcall sub_140389D88(__int16 a1, _WORD *a2)
{
  __int16 v2; // bx
  _BYTE v5[176]; // [rsp+20h] [rbp-178h] BYREF
  _BYTE v6[176]; // [rsp+D0h] [rbp-C8h] BYREF

  v2 = 0;
  if ( !a2 || !(unsigned int)sub_140372644(a1, (__int64)v5, 85, 2) )
    return 3221225485LL;
  if ( (int)sub_140646E04(v5, v6) >= 2 )
    v2 = sub_1403C68CC(v6, 2LL);
  *a2 = v2;
  return 0LL;
}
