/*
 * XREFs of sub_1800497C4 @ 0x1800497C4
 * Callers:
 *     sub_1800ABAF0 @ 0x1800ABAF0 (sub_1800ABAF0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18004978C @ 0x18004978C (sub_18004978C.c)
 *     sub_1800907FC @ 0x1800907FC (sub_1800907FC.c)
 *     sub_180092DD8 @ 0x180092DD8 (sub_180092DD8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800497C4(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rax
  unsigned __int16 v3; // r9
  __int64 v4; // rbx
  _BYTE v6[16]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = sub_18004978C(a1, v7);
  v2 = (_QWORD *)sub_180092DD8(*v1, v6);
  v4 = sub_1800907FC(*v2, v3);
  sub_180010910((__int64)v6);
  sub_180010910((__int64)v7);
  return v4;
}
