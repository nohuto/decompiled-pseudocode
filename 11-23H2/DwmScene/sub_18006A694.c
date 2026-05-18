/*
 * XREFs of sub_18006A694 @ 0x18006A694
 * Callers:
 *     sub_1800678D0 @ 0x1800678D0 (sub_1800678D0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18002EB5C @ 0x18002EB5C (sub_18002EB5C.c)
 *     sub_180033EB4 @ 0x180033EB4 (sub_180033EB4.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_1800410C0 @ 0x1800410C0 (sub_1800410C0.c)
 *     sub_180042124 @ 0x180042124 (sub_180042124.c)
 *     sub_18004C9E0 @ 0x18004C9E0 (sub_18004C9E0.c)
 *     sub_18005D118 @ 0x18005D118 (sub_18005D118.c)
 *     sub_18005D1D0 @ 0x18005D1D0 (sub_18005D1D0.c)
 *     sub_18005D318 @ 0x18005D318 (sub_18005D318.c)
 *     sub_18005D38C @ 0x18005D38C (sub_18005D38C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_18006A694(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r13
  __int64 v8; // r8
  char v9; // r14
  void **v10; // rdi
  void **v11; // rbx
  void **v12; // rax
  __int64 v13; // r8
  __int64 v14; // r8
  char v15; // al
  __int64 v16; // r8
  char v17; // al
  __int64 v18; // r8
  char v19; // al
  __int64 v20; // r8
  char v21; // al
  __int64 v22; // r8
  char v23; // al
  char v24; // al
  __int64 v25; // r8
  __int64 v26; // rbx
  __int64 v27; // r8
  __int64 *v28; // rdi
  __int64 v29; // rdi
  char v30; // al
  __int64 v31; // rdi
  char v32; // al
  __int64 v33; // rdi
  char v34; // al
  __int64 v35; // rdi
  char v36; // al
  __int64 v37; // rdi
  char v38; // al
  __int64 v39; // rdi
  char v40; // al
  __int64 v41; // rdi
  char v42; // al
  __int64 v43; // rdi
  char v44; // al
  __int64 v45; // rdi
  char v46; // al
  __int64 v47; // rbx
  char v48; // al
  char v49; // di
  __int64 v50; // r8
  char v51; // si
  __int64 v52; // rbx
  _QWORD *v53; // rax
  __int64 *v54; // rax
  __int64 v55; // rbx
  _QWORD *v56; // rax
  __int64 *v57; // rax
  __int64 v58; // [rsp+30h] [rbp-69h] BYREF
  volatile signed __int32 *v59; // [rsp+38h] [rbp-61h]
  __int64 v60; // [rsp+50h] [rbp-49h] BYREF
  __int64 v61; // [rsp+58h] [rbp-41h]
  __int64 v62; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v63[4]; // [rsp+70h] [rbp-29h] BYREF
  _QWORD v64[12]; // [rsp+90h] [rbp-9h] BYREF

  v3 = a1;
  v4 = sub_180034094(a1, *(_DWORD *)(*a2 + 112));
  v5 = sub_18001246C(&v62, a2);
  sub_180033EB4(v3, &v60, v6, v5);
  LOBYTE(v3) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801D4348, 0LL);
  v7 = v60;
  sub_18005D38C(v60, 0, v3);
  if ( (_BYTE)v3 )
    sub_18005D1D0(v7);
  LOBYTE(v8) = 1;
  v9 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801D4368, v8);
  v10 = (void **)sub_180017648(&v58, (__int64)&unk_1801D7948);
  v11 = (void **)sub_180017648(v63, (__int64)&unk_1801D79C8);
  v12 = (void **)sub_180017648(v64, (__int64)&unk_1801D79A8);
  sub_18005D118(v7, v9 != 0, v13, v12, v11, v10);
  sub_18005D318(v7, 1, v9);
  LOBYTE(v14) = 1;
  v15 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801D4388, v14);
  sub_18005D38C(v7, 1, v15);
  LOBYTE(v16) = 1;
  v17 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801D43A8, v16);
  sub_18005D38C(v7, 2, v17);
  LOBYTE(v18) = 1;
  v19 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801D43C8, v18);
  sub_18005D38C(v7, 3, v19);
  LOBYTE(v20) = 1;
  v21 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801D4308, v20);
  sub_18004C9E0(0LL, v21);
  LOBYTE(v22) = 1;
  v23 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801D4328, v22);
  sub_18004C9E0(1uLL, v23);
  v24 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801D4768, 0LL);
  sub_18005D318(v7, 0x4000000, v24);
  sub_180015604(&v58, a2);
  v26 = sub_18002EB5C(v25 + 728, (__int64)&v58);
  if ( v59 )
    sub_180010574(v59);
  v28 = *(__int64 **)(v26 + 48);
  if ( v28 != *(__int64 **)(v26 + 56) )
  {
    v29 = *v28;
    v30 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801D4448, 0LL);
    sub_18005D318(v29, 0x10000, v30);
    v31 = **(_QWORD **)(v26 + 48);
    v32 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801D4468, 0LL);
    sub_18005D318(v31, 0x20000, v32);
    v33 = **(_QWORD **)(v26 + 48);
    v34 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801D4488, 0LL);
    sub_18005D318(v33, 0x40000, v34);
    v35 = **(_QWORD **)(v26 + 48);
    v36 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801D44A8, 0LL);
    sub_18005D318(v35, 0x80000, v36);
    v37 = **(_QWORD **)(v26 + 48);
    v38 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801D44C8, 0LL);
    sub_18005D318(v37, 0x100000, v38);
    v39 = **(_QWORD **)(v26 + 48);
    v40 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801D44E8, 0LL);
    sub_18005D318(v39, 0x200000, v40);
    v41 = **(_QWORD **)(v26 + 48);
    v42 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801D4508, 0LL);
    sub_18005D318(v41, 0x400000, v42);
    v43 = **(_QWORD **)(v26 + 48);
    v44 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801D4528, 0LL);
    sub_18005D318(v43, 0x800000, v44);
    v45 = **(_QWORD **)(v26 + 48);
    v46 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801D4548, 0LL);
    sub_18005D318(v45, 0x10000000, v46);
    v47 = **(_QWORD **)(v26 + 48);
    v48 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801D4568, 0LL);
    sub_18005D318(v47, 0x20000000, v48);
  }
  LOBYTE(v27) = 1;
  v49 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801D4888, v27);
  LOBYTE(v50) = 1;
  v51 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801D48A8, v50);
  v52 = *a2;
  v53 = sub_180012440(v64, (__int64)&unk_1801D3F88);
  v54 = sub_1800410C0(v52, &v58, (__int64)v53);
  sub_180042124(*v54, v49);
  if ( v59 )
    sub_180010530((__int64)v59);
  v55 = *a2;
  v56 = sub_180012440(v64, (__int64)&unk_1801D3F68);
  v57 = sub_1800410C0(v55, &v58, (__int64)v56);
  sub_180042124(*v57, v51);
  if ( v59 )
    sub_180010530((__int64)v59);
  if ( v61 )
    sub_180010530(v61);
}
