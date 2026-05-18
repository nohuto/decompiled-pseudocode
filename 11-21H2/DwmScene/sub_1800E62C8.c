/*
 * XREFs of sub_1800E62C8 @ 0x1800E62C8
 * Callers:
 *     sub_1800E3D8C @ 0x1800E3D8C (sub_1800E3D8C.c)
 *     sub_1800E51F0 @ 0x1800E51F0 (sub_1800E51F0.c)
 *     sub_1800E5DE4 @ 0x1800E5DE4 (sub_1800E5DE4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001F7AC @ 0x18001F7AC (sub_18001F7AC.c)
 *     sub_180021780 @ 0x180021780 (sub_180021780.c)
 *     sub_18002190C @ 0x18002190C (sub_18002190C.c)
 *     sub_180021A6C @ 0x180021A6C (sub_180021A6C.c)
 *     sub_18002205C @ 0x18002205C (sub_18002205C.c)
 *     sub_1800E3618 @ 0x1800E3618 (sub_1800E3618.c)
 *     sub_1800E63A4 @ 0x1800E63A4 (sub_1800E63A4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_1800E62C8(__int64 *a1, unsigned int *a2, __int64 a3)
{
  __int64 *v6; // rax
  __int64 *v7; // rax
  __int64 *v8; // rbx
  _QWORD *v9; // rax
  _BYTE v11[16]; // [rsp+30h] [rbp-148h] BYREF
  __int64 v12[30]; // [rsp+40h] [rbp-138h] BYREF
  char *v13; // [rsp+130h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+148h] [rbp-30h]

  sub_18002190C((__int64)v11);
  v6 = sub_180021780(v12, (__int64)"desc=");
  v7 = sub_1800E3618(v6, a2);
  v8 = sub_180021780(v7, (__int64)", subresourceData=");
  v9 = (_QWORD *)sub_1800E63A4(&v13, a3);
  sub_18001F7AC((__int64)v8, v9);
  if ( v14 >= 0x10 )
    sub_180010884(v13, v14 + 1);
  sub_18002205C((__int64)v11, a1);
  sub_180021A6C((__int64)v11);
  return a1;
}
