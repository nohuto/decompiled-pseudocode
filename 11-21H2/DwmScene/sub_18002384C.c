/*
 * XREFs of sub_18002384C @ 0x18002384C
 * Callers:
 *     sub_180022BC8 @ 0x180022BC8 (sub_180022BC8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_180022DD8 @ 0x180022DD8 (sub_180022DD8.c)
 *     sub_180022DF8 @ 0x180022DF8 (sub_180022DF8.c)
 *     sub_180023764 @ 0x180023764 (sub_180023764.c)
 */

__int64 *__fastcall sub_18002384C(__int64 *a1)
{
  GUID pguid; // [rsp+20h] [rbp-58h] BYREF
  GUID rguid; // [rsp+30h] [rbp-48h] BYREF
  __int128 v5; // [rsp+40h] [rbp-38h]
  __int128 v6; // [rsp+50h] [rbp-28h]
  __int64 v7; // [rsp+60h] [rbp-18h]

  *(_QWORD *)&pguid.Data1 = a1;
  if ( CoCreateGuid(&pguid) )
  {
    sub_18001F2B4(&stru_1801EA1F8, 4, "Unable to generate a valid, globally unique, GUID");
    sub_180022DF8(a1);
  }
  else
  {
    v7 = 0LL;
    rguid = pguid;
    v5 = 0LL;
    v6 = 0LL;
    sub_180023764(&rguid);
    sub_180022DD8(a1, (__int64)&rguid);
  }
  return a1;
}
