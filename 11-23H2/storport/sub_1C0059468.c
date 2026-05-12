/*
 * XREFs of sub_1C0059468 @ 0x1C0059468
 * Callers:
 *     sub_1C005B3C0 @ 0x1C005B3C0 (sub_1C005B3C0.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0057690 @ 0x1C0057690 (sub_1C0057690.c)
 *     sub_1C005961C @ 0x1C005961C (sub_1C005961C.c)
 */

__int64 __fastcall sub_1C0059468(struct _DEVICE_OBJECT *a1)
{
  __int64 result; // rax
  int v2; // [rsp+30h] [rbp-38h] BYREF
  __int128 v3; // [rsp+38h] [rbp-30h]
  __int64 v4; // [rsp+48h] [rbp-20h]

  v2 = 24;
  v3 = 0LL;
  v4 = 0LL;
  result = sub_1C005961C(a1, (__int64)&v2);
  if ( (int)result >= 0 )
    return sub_1C0057690((unsigned __int16)v4);
  return result;
}
