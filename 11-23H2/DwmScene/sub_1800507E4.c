/*
 * XREFs of sub_1800507E4 @ 0x1800507E4
 * Callers:
 *     sub_18005A490 @ 0x18005A490 (sub_18005A490.c)
 *     sub_18005CDB0 @ 0x18005CDB0 (sub_18005CDB0.c)
 *     sub_180067B80 @ 0x180067B80 (sub_180067B80.c)
 *     sub_18006BEB0 @ 0x18006BEB0 (sub_18006BEB0.c)
 *     sub_18006E780 @ 0x18006E780 (sub_18006E780.c)
 *     sub_18008EA40 @ 0x18008EA40 (sub_18008EA40.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180085680 @ 0x180085680 (sub_180085680.c)
 */

__int64 __fastcall sub_1800507E4(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_18001246C(v7, a3);
  return sub_180085680(v4, v5, v3);
}
