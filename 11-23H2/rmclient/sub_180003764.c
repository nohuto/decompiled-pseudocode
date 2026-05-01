/*
 * XREFs of sub_180003764 @ 0x180003764
 * Callers:
 *     sub_180003740 @ 0x180003740 (sub_180003740.c)
 * Callees:
 *     sub_180004E90 @ 0x180004E90 (sub_180004E90.c)
 */

__int64 __fastcall sub_180003764(__int64 a1)
{
  __int64 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v4[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0LL;
  v2 = 0LL;
  v4[0] = &v2;
  v4[1] = &v3;
  return sub_180004E90(a1, v4);
}
