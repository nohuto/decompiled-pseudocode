/*
 * XREFs of sub_1800CF0F4 @ 0x1800CF0F4
 * Callers:
 *     sub_1800CD298 @ 0x1800CD298 (sub_1800CD298.c)
 *     sub_1800CE190 @ 0x1800CE190 (sub_1800CE190.c)
 *     sub_1800CECC0 @ 0x1800CECC0 (sub_1800CECC0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001E018 @ 0x18001E018 (sub_18001E018.c)
 *     sub_180020470 @ 0x180020470 (sub_180020470.c)
 *     sub_180020670 @ 0x180020670 (sub_180020670.c)
 *     sub_1800207C8 @ 0x1800207C8 (sub_1800207C8.c)
 *     sub_180020FA4 @ 0x180020FA4 (sub_180020FA4.c)
 *     sub_1800CCC14 @ 0x1800CCC14 (sub_1800CCC14.c)
 *     sub_1800CF1C0 @ 0x1800CF1C0 (sub_1800CF1C0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800CF0F4(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rax
  _BYTE v11[16]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v12[240]; // [rsp+40h] [rbp-138h] BYREF
  _BYTE v13[32]; // [rsp+130h] [rbp-48h] BYREF

  sub_180020670((__int64)v11);
  v6 = sub_180020470((__int64)v12, (__int64)"desc=");
  v7 = sub_1800CCC14(v6, a2);
  v8 = sub_180020470(v7, (__int64)", subresourceData=");
  v9 = (_QWORD *)sub_1800CF1C0(v13, a3);
  sub_18001E018(v8, v9);
  sub_180011B24((__int64)v13);
  sub_180020FA4((__int64)v11, a1);
  sub_1800207C8((__int64)v11);
  return a1;
}
