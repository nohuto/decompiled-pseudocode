/*
 * XREFs of sub_1800D05C0 @ 0x1800D05C0
 * Callers:
 *     sub_1800CFE40 @ 0x1800CFE40 (sub_1800CFE40.c)
 *     sub_1800D1660 @ 0x1800D1660 (sub_1800D1660.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180027CE8 @ 0x180027CE8 (sub_180027CE8.c)
 */

_QWORD *__fastcall sub_1800D05C0(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v4; // rax
  _BYTE v6[32]; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = a3;
  v4 = sub_180027CE8((_QWORD *)(a1 + 120), (__int64)v6, &v7);
  sub_18001246C(a2, (_QWORD *)(*(_QWORD *)v4 + 40LL));
  return a2;
}
