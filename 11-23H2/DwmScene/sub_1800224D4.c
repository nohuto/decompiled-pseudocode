/*
 * XREFs of sub_1800224D4 @ 0x1800224D4
 * Callers:
 *     sub_180021A28 @ 0x180021A28 (sub_180021A28.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_180021BDC @ 0x180021BDC (sub_180021BDC.c)
 *     sub_180021BFC @ 0x180021BFC (sub_180021BFC.c)
 *     sub_1800223EC @ 0x1800223EC (sub_1800223EC.c)
 */

__int64 *__fastcall sub_1800224D4(__int64 *a1)
{
  GUID pguid; // [rsp+28h] [rbp-60h] BYREF
  GUID rguid; // [rsp+38h] [rbp-50h] BYREF
  __int128 v5; // [rsp+48h] [rbp-40h]
  __int128 v6; // [rsp+58h] [rbp-30h]
  __int64 v7; // [rsp+68h] [rbp-20h]

  *(_QWORD *)&pguid.Data1 = a1;
  if ( CoCreateGuid(&pguid) )
  {
    sub_18001DB68(&stru_1801C81F8, 4, "Unable to generate a valid, globally unique, GUID");
    sub_180021BFC(a1);
  }
  else
  {
    v7 = 0LL;
    rguid = pguid;
    v5 = 0LL;
    v6 = 0LL;
    sub_1800223EC(&rguid);
    sub_180021BDC(a1, (__int64)&rguid);
  }
  return a1;
}
