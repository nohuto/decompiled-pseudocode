/*
 * XREFs of sub_180021C1C @ 0x180021C1C
 * Callers:
 *     sub_180022B28 @ 0x180022B28 (sub_180022B28.c)
 *     sub_180023FC4 @ 0x180023FC4 (sub_180023FC4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180021914 @ 0x180021914 (sub_180021914.c)
 */

__int64 __fastcall sub_180021C1C(__int64 a1)
{
  GUID v3; // [rsp+20h] [rbp-38h] BYREF
  GUID pguid; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)(a1 + 152) = 64LL;
  pguid = 0LL;
  CoCreateGuid(&pguid);
  v3 = pguid;
  sub_180021914(a1, (__int128 *)&v3);
  return a1;
}
