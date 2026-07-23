/*
 * XREFs of sub_1405E40E4 @ 0x1405E40E4
 * Callers:
 *     sub_14096CCF8 @ 0x14096CCF8 (sub_14096CCF8.c)
 * Callees:
 *     sub_140429850 @ 0x140429850 (sub_140429850.c)
 */

__int64 __fastcall sub_1405E40E4(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+34h] [rbp-14h]

  v6[0] = a2;
  v6[1] = a3;
  v7 = a5;
  v8 = a4;
  return sub_140429850(a1, (__int64)v6, 3u);
}
