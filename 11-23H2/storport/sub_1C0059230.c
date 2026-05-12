/*
 * XREFs of sub_1C0059230 @ 0x1C0059230
 * Callers:
 *     sub_1C005ADDC @ 0x1C005ADDC (sub_1C005ADDC.c)
 *     sub_1C005B3C0 @ 0x1C005B3C0 (sub_1C005B3C0.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0057690 @ 0x1C0057690 (sub_1C0057690.c)
 *     sub_1C005961C @ 0x1C005961C (sub_1C005961C.c)
 */

__int64 __fastcall sub_1C0059230(struct _DEVICE_OBJECT *a1, _DWORD *a2)
{
  int v3; // ecx
  unsigned int v5; // [rsp+30h] [rbp-38h] BYREF
  __int128 v6; // [rsp+38h] [rbp-30h]
  __int64 v7; // [rsp+48h] [rbp-20h]

  v5 = 24;
  v6 = 0LL;
  v7 = 0LL;
  v3 = sub_1C005961C(a1, (__int64)&v5);
  if ( v3 >= 0 )
  {
    if ( v5 >= 0x18 && (_DWORD)v6 == 1114596673 && DWORD2(v6) && WORD6(v6) == 2 )
    {
      if ( (_WORD)v7 )
        return (unsigned int)sub_1C0057690((unsigned __int16)v7);
      else
        *a2 = HIDWORD(v7);
    }
    else
    {
      return (unsigned int)-1072431089;
    }
  }
  return (unsigned int)v3;
}
