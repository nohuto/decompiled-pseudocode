/*
 * XREFs of sub_180035D2C @ 0x180035D2C
 * Callers:
 *     sub_180033CA0 @ 0x180033CA0 (sub_180033CA0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_18001FD9C @ 0x18001FD9C (sub_18001FD9C.c)
 *     sub_18001FEA4 @ 0x18001FEA4 (sub_18001FEA4.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_180030F98 @ 0x180030F98 (sub_180030F98.c)
 *     sub_180030FD4 @ 0x180030FD4 (sub_180030FD4.c)
 *     sub_180031CF0 @ 0x180031CF0 (sub_180031CF0.c)
 *     sub_180033400 @ 0x180033400 (sub_180033400.c)
 *     sub_1800340DC @ 0x1800340DC (sub_1800340DC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_180035D2C(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 v7; // [rsp+48h] [rbp-C0h] BYREF
  volatile signed __int32 *v8; // [rsp+50h] [rbp-B8h]
  __int64 v9; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v10; // [rsp+60h] [rbp-A8h]
  __int64 v11[3]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v12[16]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v13[3]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v14[8]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v15[4]; // [rsp+E8h] [rbp-20h] BYREF

  v2 = sub_18001246C(&v7, a1 + 58);
  sub_18001FD9C(
    v14,
    v2,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1719,
    (__int64)"RemoveInvalidDevices",
    (__int64)"RemoveInvalidDevices");
  sub_180010DD0(v15, (__int64)"RemoveInvalidDevices");
  v3 = sub_1800340DC((__int64)a1, &v9);
  sub_180015604(&v7, v3);
  sub_180030FD4(v13, (__int64)&v7);
  if ( v8 )
    sub_180010574(v8);
  if ( v10 )
    sub_180010530(v10);
  sub_180011B24((__int64)v15);
  sub_18002A0C4((__int64)(a1 + 14), (__int64)v12);
  sub_180030F98(v11, (__int64)(a1 + 11));
  v4 = (_QWORD *)v11[0];
  v5 = v11[1];
  while ( v4 != (_QWORD *)v5 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 16LL))(*v4) )
    {
      sub_18001DB68(&stru_1801C8288, 3, "==============================");
      sub_18001DB68(&stru_1801C8288, 3, "INVALID RENDER DEVICE DETECTED");
      sub_18002A0C4(*v4 + 24LL, (__int64)&v9);
      sub_180033400(a1, v4);
      sub_18001DB68(&stru_1801C8288, 3, "==============================");
      sub_180010F54((__int64)&v9);
    }
    v4 += 2;
  }
  sub_180013300((__int64)v11);
  sub_180010F54((__int64)v12);
  sub_180031CF0((__int64)v13);
  return sub_18001FEA4((__int64)v14);
}
