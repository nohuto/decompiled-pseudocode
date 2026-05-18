/*
 * XREFs of sub_180087BD0 @ 0x180087BD0
 * Callers:
 *     sub_180098B8C @ 0x180098B8C (sub_180098B8C.c)
 * Callees:
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_1800878E8 @ 0x1800878E8 (sub_1800878E8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180087BD0(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  _QWORD v7[4]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v8[5]; // [rsp+40h] [rbp-28h] BYREF

  v4 = sub_180010DD0(v7, (__int64)byte_180106082);
  v5 = sub_180010DD0(v8, (__int64)byte_180106082);
  return sub_1800878E8(a1, v5, a2, v4);
}
