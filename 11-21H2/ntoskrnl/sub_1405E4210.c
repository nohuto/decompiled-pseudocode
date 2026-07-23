/*
 * XREFs of sub_1405E4210 @ 0x1405E4210
 * Callers:
 *     sub_140A4B9E0 @ 0x140A4B9E0 (sub_140A4B9E0.c)
 *     sub_140A6BE04 @ 0x140A6BE04 (sub_140A6BE04.c)
 * Callees:
 *     sub_140429850 @ 0x140429850 (sub_140429850.c)
 */

__int64 __fastcall sub_1405E4210(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+34h] [rbp-14h]

  v5 = 0;
  v6 = 0;
  v4[0] = a2;
  v4[1] = a3;
  return sub_140429850(a1, (__int64)v4, 4u);
}
