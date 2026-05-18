/*
 * XREFs of sub_1800671B0 @ 0x1800671B0
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
 *     sub_180030FD4 @ 0x180030FD4 (sub_180030FD4.c)
 *     sub_180031CF0 @ 0x180031CF0 (sub_180031CF0.c)
 *     sub_1800340DC @ 0x1800340DC (sub_1800340DC.c)
 *     sub_1800354F0 @ 0x1800354F0 (sub_1800354F0.c)
 *     sub_180064BB0 @ 0x180064BB0 (sub_180064BB0.c)
 *     sub_18006BEB0 @ 0x18006BEB0 (sub_18006BEB0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800671B0(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v11; // [rsp+40h] [rbp-89h] BYREF
  volatile signed __int32 *v12; // [rsp+48h] [rbp-81h]
  __int64 v13; // [rsp+50h] [rbp-79h] BYREF
  __int64 v14; // [rsp+58h] [rbp-71h]
  __int64 v15[4]; // [rsp+60h] [rbp-69h] BYREF
  _QWORD v16[8]; // [rsp+80h] [rbp-49h] BYREF
  _QWORD v17[4]; // [rsp+C0h] [rbp-9h] BYREF

  v8 = sub_18001246C(&v11, (_QWORD *)(a1 + 464));
  sub_18001FD9C(
    v16,
    v8,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\viewerengine.cpp",
    1484,
    (__int64)"PostRenderScene",
    (__int64)"PostRenderScene");
  sub_180010DD0(v17, (__int64)"PostRenderScene");
  v9 = sub_1800340DC(a1, &v13);
  sub_180015604(&v11, v9);
  sub_180030FD4(v15, (__int64)&v11);
  if ( v12 )
    sub_180010574(v12);
  if ( v14 )
    sub_180010530(v14);
  sub_180011B24((__int64)v17);
  sub_1800354F0(a1, a2, a3, a4);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 280LL))(*a4) )
  {
    sub_18006BEB0(a1, a3, a4, a2);
    sub_180064BB0(a1, a2, a3, a4);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)*a3 + 128LL))(*a3);
  sub_180031CF0((__int64)v15);
  return sub_18001FEA4((__int64)v16);
}
