/*
 * XREFs of sub_180049728 @ 0x180049728
 * Callers:
 *     sub_18004A0D8 @ 0x18004A0D8 (sub_18004A0D8.c)
 *     sub_1800ABAF0 @ 0x1800ABAF0 (sub_1800ABAF0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18004978C @ 0x18004978C (sub_18004978C.c)
 *     sub_1800904AC @ 0x1800904AC (sub_1800904AC.c)
 *     sub_180092DD8 @ 0x180092DD8 (sub_180092DD8.c)
 */

__int64 __fastcall sub_180049728(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // r9
  unsigned __int16 v6; // bx
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  v3 = (_QWORD *)sub_18004978C(a1, v9, a3, a2);
  v4 = (_QWORD *)sub_180092DD8(*v3, v8);
  v6 = sub_1800904AC(*v4, v5);
  sub_180010910((__int64)v8);
  sub_180010910((__int64)v9);
  return v6;
}
