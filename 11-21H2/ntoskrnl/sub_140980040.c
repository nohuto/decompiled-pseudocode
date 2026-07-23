/*
 * XREFs of sub_140980040 @ 0x140980040
 * Callers:
 *     sub_14037592C @ 0x14037592C (sub_14037592C.c)
 * Callees:
 *     sub_14025EC08 @ 0x14025EC08 (sub_14025EC08.c)
 *     sub_14032A72C @ 0x14032A72C (sub_14032A72C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406EC1C4 @ 0x1406EC1C4 (sub_1406EC1C4.c)
 *     sub_1406EC338 @ 0x1406EC338 (sub_1406EC338.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140980040(PEPROCESS Process, PVOID P)
{
  __int64 v4; // rbx
  _OWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  memset(v6, 0, sizeof(v6));
  v7 = 0LL;
  LODWORD(v6[0]) = 2;
  sub_1406EC338(Process, 3, (__int64)v6);
  v4 = sub_14032A72C((__int64)Process);
  sub_14025EC08((__int64)P, 2);
  ExFreePoolWithTag(P, 0);
  sub_1406EC1C4(v4);
  LODWORD(v7) = 0;
  sub_1406EC338(Process, 1, (__int64)v6);
  return 0LL;
}
