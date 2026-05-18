/*
 * XREFs of sub_180033CA0 @ 0x180033CA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_18001FD9C @ 0x18001FD9C (sub_18001FD9C.c)
 *     sub_18001FEA4 @ 0x18001FEA4 (sub_18001FEA4.c)
 *     sub_18002A370 @ 0x18002A370 (sub_18002A370.c)
 *     sub_180030FD4 @ 0x180030FD4 (sub_180030FD4.c)
 *     sub_180031CF0 @ 0x180031CF0 (sub_180031CF0.c)
 *     sub_180032A34 @ 0x180032A34 (sub_180032A34.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_1800340DC @ 0x1800340DC (sub_1800340DC.c)
 *     sub_1800341C8 @ 0x1800341C8 (sub_1800341C8.c)
 *     sub_180034264 @ 0x180034264 (sub_180034264.c)
 *     sub_180035B28 @ 0x180035B28 (sub_180035B28.c)
 *     sub_180035D2C @ 0x180035D2C (sub_180035D2C.c)
 *     sub_1800363BC @ 0x1800363BC (sub_1800363BC.c)
 *     sub_1800364F8 @ 0x1800364F8 (sub_1800364F8.c)
 *     sub_180037050 @ 0x180037050 (sub_180037050.c)
 *     sub_180037578 @ 0x180037578 (sub_180037578.c)
 *     sub_180037DC0 @ 0x180037DC0 (sub_180037DC0.c)
 *     sub_180037F0C @ 0x180037F0C (sub_180037F0C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180033CA0(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned int v7; // eax
  __int64 v8; // [rsp+40h] [rbp-59h] BYREF
  volatile signed __int32 *v9; // [rsp+48h] [rbp-51h]
  _BYTE v10[8]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v11; // [rsp+58h] [rbp-41h]
  __int64 v12[4]; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v13[8]; // [rsp+80h] [rbp-19h] BYREF
  _QWORD v14[4]; // [rsp+C0h] [rbp+27h] BYREF

  sub_18002A370((__int64)(a1 + 1));
  sub_180037F0C(a1);
  sub_180032A34((__int64)a1);
  v2 = sub_18001246C(&v8, a1 + 58);
  sub_18001FD9C(
    v13,
    v2,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    819,
    (__int64)"FrameTick",
    (__int64)"FrameTick");
  sub_180010DD0(v14, (__int64)"FrameTick");
  v3 = (_QWORD *)sub_1800340DC(a1, v10);
  sub_180015604(&v8, v3);
  sub_180030FD4(v12, (__int64)&v8);
  if ( v9 )
    sub_180010574(v9);
  if ( v11 )
    sub_180010530(v11);
  sub_180011B24((__int64)v14);
  sub_180035B28(a1);
  if ( (unsigned int)sub_180034264(a1) > 1 )
  {
    sub_1800341C8(a1, &v8, 1LL);
    v5 = v8;
    if ( v8 )
    {
      v6 = sub_180034094(a1, 1LL);
      v7 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v6 + 72LL))(v6, &unk_1801D45A8, 1LL);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 224LL))(v5, v7);
    }
    if ( v9 )
      sub_180010530((__int64)v9);
    sub_180037DC0(a1);
    sub_180037050(a1);
    (*(void (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1);
    sub_1800364F8(a1);
    sub_1800363BC(a1);
    sub_180035D2C(a1);
    sub_180031CF0((__int64)v12);
    sub_18001FEA4((__int64)v13);
    return sub_180037578(a1);
  }
  else
  {
    sub_180031CF0((__int64)v12);
    return sub_18001FEA4((__int64)v13);
  }
}
