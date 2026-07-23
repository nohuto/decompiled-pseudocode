/*
 * XREFs of sub_1409F8048 @ 0x1409F8048
 * Callers:
 *     sub_1409F8018 @ 0x1409F8018 (sub_1409F8018.c)
 *     sub_1409F8178 @ 0x1409F8178 (sub_1409F8178.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 */

__int64 __fastcall sub_1409F8048(__int64 a1, int a2, __int64 a3)
{
  _QWORD v6[15]; // [rsp+30h] [rbp-78h] BYREF
  int v7; // [rsp+B8h] [rbp+10h] BYREF

  v7 = a2;
  memset(v6, 0, 0x70uLL);
  LODWORD(v6[1]) = 288;
  v6[2] = a1;
  v6[3] = a3;
  LODWORD(v6[4]) = 67108868;
  v6[5] = &v7;
  LODWORD(v6[6]) = 4;
  return sub_140781F40(2, L"TimeZoneInformation", (__int64)v6, 0LL);
}
