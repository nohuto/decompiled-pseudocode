/*
 * XREFs of sub_1800747C4 @ 0x1800747C4
 * Callers:
 *     sub_1800710C0 @ 0x1800710C0 (sub_1800710C0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180037388 @ 0x180037388 (sub_180037388.c)
 *     sub_180056B94 @ 0x180056B94 (sub_180056B94.c)
 *     sub_180093340 @ 0x180093340 (sub_180093340.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800747C4(__int64 a1)
{
  __int64 v1; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = sub_180037388(a1);
  sub_180056B94(v1, v3);
  sub_180093340(v3[0]);
  return sub_180010910((__int64)v3);
}
