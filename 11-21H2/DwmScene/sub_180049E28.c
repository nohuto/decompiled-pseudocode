/*
 * XREFs of sub_180049E28 @ 0x180049E28
 * Callers:
 *     sub_1800ABC50 @ 0x1800ABC50 (sub_1800ABC50.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800904AC @ 0x1800904AC (sub_1800904AC.c)
 *     sub_180092DD8 @ 0x180092DD8 (sub_180092DD8.c)
 */

__int64 __fastcall sub_180049E28(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rax
  __int64 v8; // r10
  unsigned __int16 v9; // bx
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  v7 = (_QWORD *)sub_180092DD8(*(_QWORD *)(a1 + 120), v11);
  v9 = sub_1800904AC(*v7, v8);
  sub_180010910((__int64)v11);
  return sub_180049E98(a1, v9, a3, a4);
}
