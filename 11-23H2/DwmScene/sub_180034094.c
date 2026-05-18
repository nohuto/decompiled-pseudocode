/*
 * XREFs of sub_180034094 @ 0x180034094
 * Callers:
 *     sub_18001278C @ 0x18001278C (sub_18001278C.c)
 *     sub_180019608 @ 0x180019608 (sub_180019608.c)
 *     sub_18002BCA0 @ 0x18002BCA0 (sub_18002BCA0.c)
 *     sub_18002CE40 @ 0x18002CE40 (sub_18002CE40.c)
 *     sub_180032A34 @ 0x180032A34 (sub_180032A34.c)
 *     sub_180033CA0 @ 0x180033CA0 (sub_180033CA0.c)
 *     sub_180035320 @ 0x180035320 (sub_180035320.c)
 *     sub_1800364F8 @ 0x1800364F8 (sub_1800364F8.c)
 *     sub_180037050 @ 0x180037050 (sub_180037050.c)
 *     sub_180057C24 @ 0x180057C24 (sub_180057C24.c)
 *     sub_180064BB0 @ 0x180064BB0 (sub_180064BB0.c)
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 *     sub_180066E20 @ 0x180066E20 (sub_180066E20.c)
 *     sub_180067030 @ 0x180067030 (sub_180067030.c)
 *     sub_180067350 @ 0x180067350 (sub_180067350.c)
 *     sub_180067610 @ 0x180067610 (sub_180067610.c)
 *     sub_18006798C @ 0x18006798C (sub_18006798C.c)
 *     sub_1800679F8 @ 0x1800679F8 (sub_1800679F8.c)
 *     sub_180067A64 @ 0x180067A64 (sub_180067A64.c)
 *     sub_180067EB0 @ 0x180067EB0 (sub_180067EB0.c)
 *     sub_180068C20 @ 0x180068C20 (sub_180068C20.c)
 *     sub_180068E68 @ 0x180068E68 (sub_180068E68.c)
 *     sub_180069750 @ 0x180069750 (sub_180069750.c)
 *     sub_180069D30 @ 0x180069D30 (sub_180069D30.c)
 *     sub_18006A694 @ 0x18006A694 (sub_18006A694.c)
 *     sub_18006AFE4 @ 0x18006AFE4 (sub_18006AFE4.c)
 *     sub_18006B29C @ 0x18006B29C (sub_18006B29C.c)
 *     sub_18006B8F4 @ 0x18006B8F4 (sub_18006B8F4.c)
 *     sub_18006BADC @ 0x18006BADC (sub_18006BADC.c)
 *     sub_18006BEB0 @ 0x18006BEB0 (sub_18006BEB0.c)
 *     sub_18006D0BC @ 0x18006D0BC (sub_18006D0BC.c)
 *     sub_18006DE34 @ 0x18006DE34 (sub_18006DE34.c)
 *     sub_1800727D0 @ 0x1800727D0 (sub_1800727D0.c)
 *     sub_180072C68 @ 0x180072C68 (sub_180072C68.c)
 *     sub_18007E470 @ 0x18007E470 (sub_18007E470.c)
 *     sub_180095E20 @ 0x180095E20 (sub_180095E20.c)
 *     sub_18009AD20 @ 0x18009AD20 (sub_18009AD20.c)
 * Callees:
 *     sub_18002F04C @ 0x18002F04C (sub_18002F04C.c)
 */

__int64 __fastcall sub_180034094(__int64 a1, int a2)
{
  __int64 *v2; // r10
  int v3; // r11d
  __int64 v4; // rax
  _BYTE v6[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = a2;
  sub_18002F04C((__int64 *)(a1 + 1080), (__int64)v6, &v8);
  v4 = v7;
  if ( *(_BYTE *)(v7 + 25) || v3 < *(_DWORD *)(v7 + 32) )
    v4 = *v2;
  return *(_QWORD *)(v4 + 40);
}
