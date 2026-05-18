/*
 * XREFs of sub_1800A2BB0 @ 0x1800A2BB0
 * Callers:
 *     sub_1800A101C @ 0x1800A101C (sub_1800A101C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18001F288 @ 0x18001F288 (sub_18001F288.c)
 *     sub_1800A0E14 @ 0x1800A0E14 (sub_1800A0E14.c)
 *     sub_1800A23F4 @ 0x1800A23F4 (sub_1800A23F4.c)
 *     sub_1800A2788 @ 0x1800A2788 (sub_1800A2788.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800A2BB0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // r9
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  _QWORD v13[3]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v16[51]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v17[32]; // [rsp+200h] [rbp+100h] BYREF

  v16[50] = a2;
  v13[2] = a3;
  sub_18001F288((__int64)v17, a2);
  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a3 + 64LL))(*a3, v17);
  sub_18001246C(&v14, (_QWORD *)(a1 + 896));
  v6 = sub_18001246C(&v15, a3);
  v9 = sub_1800A2788((__int64)v16, 1, v6, v8, v7);
  sub_1800A23F4((_QWORD *)(a1 + 880), (__int64)v13, (__int64)a2, v9);
  sub_1800A0E14(v16);
  v10 = v13[0];
  sub_180013348((__int64)v17);
  sub_180011B24((__int64)a2);
  v11 = a3[1];
  if ( v11 )
    sub_180010530(v11);
  return v10 + 64;
}
