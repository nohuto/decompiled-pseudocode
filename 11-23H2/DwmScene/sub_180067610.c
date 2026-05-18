/*
 * XREFs of sub_180067610 @ 0x180067610
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
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001FD9C @ 0x18001FD9C (sub_18001FD9C.c)
 *     sub_18001FEA4 @ 0x18001FEA4 (sub_18001FEA4.c)
 *     sub_180030FD4 @ 0x180030FD4 (sub_180030FD4.c)
 *     sub_180031CF0 @ 0x180031CF0 (sub_180031CF0.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_1800340DC @ 0x1800340DC (sub_1800340DC.c)
 *     sub_180034328 @ 0x180034328 (sub_180034328.c)
 *     sub_180034870 @ 0x180034870 (sub_180034870.c)
 *     sub_1800502A4 @ 0x1800502A4 (sub_1800502A4.c)
 *     sub_180061204 @ 0x180061204 (sub_180061204.c)
 *     sub_180067EB0 @ 0x180067EB0 (sub_180067EB0.c)
 *     sub_180069D30 @ 0x180069D30 (sub_180069D30.c)
 *     sub_18006A64C @ 0x18006A64C (sub_18006A64C.c)
 *     sub_18006BEB0 @ 0x18006BEB0 (sub_18006BEB0.c)
 *     sub_18006D0BC @ 0x18006D0BC (sub_18006D0BC.c)
 *     sub_18006DC54 @ 0x18006DC54 (sub_18006DC54.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180067610(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  char v13; // al
  char v14; // bl
  __int64 v15; // r8
  __int64 v16; // rbx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  unsigned int v19; // eax
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v22; // [rsp+48h] [rbp-B8h]
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h]
  __int64 v25; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-98h]
  __int64 v27[3]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v28[5]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v29[8]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v30[4]; // [rsp+F0h] [rbp-10h] BYREF

  v8 = sub_18001246C(&v23, (_QWORD *)(a1 + 464));
  sub_18001FD9C(
    v29,
    v8,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\viewerengine.cpp",
    1570,
    (__int64)"PreRenderScene",
    (__int64)"PreRenderScene");
  sub_180010DD0(v30, (__int64)"PreRenderScene");
  v9 = sub_1800340DC(a1, &v25);
  sub_180015604(&v21, v9);
  sub_180030FD4(v27, (__int64)&v21);
  if ( v22 )
    sub_180010574(v22);
  if ( v26 )
    sub_180010530(v26);
  sub_180011B24((__int64)v30);
  v10 = sub_180034094(a1, *(_DWORD *)(*(_QWORD *)a2 + 112LL));
  sub_18006DC54(v11, *a3, *a4, v10);
  LOBYTE(v12) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801D6988, v12);
  v14 = v13;
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D69A8);
  LOBYTE(v15) = v14;
  sub_180067EB0(a1, a2, v15);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 120LL))(*a3);
  *(_BYTE *)(a1 + 1457) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(
                            v10,
                            &unk_1801D6948,
                            0LL);
  sub_18006A64C(a1);
  sub_180069D30(a1, *a4, *(unsigned int *)(*(_QWORD *)a2 + 112LL));
  sub_18006BEB0(a1, a3, a4, a2);
  v16 = sub_180034870(a1);
  v17 = sub_180017648(v28, (__int64)&unk_1801D7E88);
  sub_1800502A4(v16, &v23, v17);
  sub_180061204(v23, qword_1801D7D88, *(_BYTE *)(a1 + 1457));
  v18 = sub_180017648(v30, (__int64)&unk_1801D8408);
  sub_1800502A4(v16, &v21, v18);
  sub_180061204(v21, qword_1801D7D88, *(_BYTE *)(a1 + 1457));
  v19 = sub_180034328(a1, a3);
  sub_18006D0BC(a1, a2, v19, a4);
  if ( v22 )
    sub_180010530((__int64)v22);
  if ( v24 )
    sub_180010530(v24);
  sub_180031CF0((__int64)v27);
  return sub_18001FEA4((__int64)v29);
}
