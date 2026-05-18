/*
 * XREFs of sub_18007FC90 @ 0x18007FC90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180045298 @ 0x180045298 (sub_180045298.c)
 *     sub_180045FF8 @ 0x180045FF8 (sub_180045FF8.c)
 *     sub_180046554 @ 0x180046554 (sub_180046554.c)
 *     sub_180046A58 @ 0x180046A58 (sub_180046A58.c)
 */

__int64 __fastcall sub_18007FC90(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_QWORD *)(a1 + 56);
  v4 = sub_18001246C(v9, (_QWORD *)(a1 + 56));
  sub_180045298(a2, (__int64)v4);
  v5 = sub_18001246C(v9, v2);
  sub_180045FF8(a2, (__int64)v5);
  v6 = sub_18001246C(v9, v2);
  sub_180046554(a2, (__int64)v6);
  v7 = sub_18001246C(v9, v2);
  return sub_180046A58(a2, (__int64)v7);
}
