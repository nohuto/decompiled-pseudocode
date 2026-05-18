/*
 * XREFs of sub_1800A3948 @ 0x1800A3948
 * Callers:
 *     sub_1800A1580 @ 0x1800A1580 (sub_1800A1580.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800A0E14 @ 0x1800A0E14 (sub_1800A0E14.c)
 *     sub_1800A23F4 @ 0x1800A23F4 (sub_1800A23F4.c)
 *     sub_1800A2788 @ 0x1800A2788 (sub_1800A2788.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800A3948(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // r9
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rcx
  _BYTE v12[16]; // [rsp+30h] [rbp-1F8h] BYREF
  _QWORD *v13; // [rsp+40h] [rbp-1E8h]
  __int64 v14; // [rsp+48h] [rbp-1E0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-1D0h] BYREF
  _QWORD v16[51]; // [rsp+68h] [rbp-1C0h] BYREF

  v16[50] = a2;
  v13 = a3;
  v5 = (_QWORD *)(a1 + 880);
  sub_18001246C(&v14, (_QWORD *)(a1 + 896));
  v6 = sub_18001246C(&v15, a3);
  v9 = sub_1800A2788((__int64)v16, 0, v6, v8, v7);
  sub_1800A23F4(v5, (__int64)v12, a2, v9);
  sub_1800A0E14(v16);
  result = sub_180011B24(a2);
  v11 = a3[1];
  if ( v11 )
    return sub_180010530(v11);
  return result;
}
