/*
 * XREFs of sub_140AB2130 @ 0x140AB2130
 * Callers:
 *     <none>
 * Callees:
 *     sub_140AB28B8 @ 0x140AB28B8 (sub_140AB28B8.c)
 */

__int64 __fastcall sub_140AB2130(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  v5[2] = a4;
  return sub_140AB28B8(a1, v5, a3);
}
