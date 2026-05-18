/*
 * XREFs of sub_180072240 @ 0x180072240
 * Callers:
 *     sub_18005BFC0 @ 0x18005BFC0 (sub_18005BFC0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_180026580 @ 0x180026580 (sub_180026580.c)
 *     sub_18002A37C @ 0x18002A37C (sub_18002A37C.c)
 *     sub_18002B418 @ 0x18002B418 (sub_18002B418.c)
 *     sub_1800396C8 @ 0x1800396C8 (sub_1800396C8.c)
 *     sub_180039720 @ 0x180039720 (sub_180039720.c)
 *     sub_18005BA84 @ 0x18005BA84 (sub_18005BA84.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180072240(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // rdi
  void (__fastcall *v11)(__int64, __int64); // rbx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // rbx
  __int64 *v17; // rax
  _QWORD *v18; // rbx
  __int64 *v19; // rax
  __int64 v20; // rsi
  __int64 *v21; // rax
  __int64 *v22; // rax
  __int64 v23; // r8
  __int64 *v24; // rax
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v29; // [rsp+40h] [rbp-51h] BYREF
  __int64 v30; // [rsp+48h] [rbp-49h]
  __int128 v31; // [rsp+50h] [rbp-41h] BYREF
  __int64 v32; // [rsp+60h] [rbp-31h] BYREF
  __int64 v33; // [rsp+68h] [rbp-29h]
  __int64 v34; // [rsp+70h] [rbp-21h] BYREF
  volatile signed __int32 *v35; // [rsp+78h] [rbp-19h]
  __int64 v36; // [rsp+80h] [rbp-11h] BYREF
  __int64 v37; // [rsp+88h] [rbp-9h]
  _QWORD v38[9]; // [rsp+90h] [rbp-1h] BYREF

  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a3 + 376LL))(*a3, &v34);
  sub_180011C50(v9, &v32);
  if ( v35 )
    sub_180010574(v35);
  v10 = *(_QWORD *)(a1 + 272);
  v11 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 88LL);
  v12 = v32;
  v13 = sub_180011D4C(v32 + 8, &v31);
  v11(v10, v13);
  sub_18002A37C(*(_QWORD *)(a1 + 288) + 16LL);
  v14 = v12;
  v15 = (_QWORD *)sub_180026580(v12);
  sub_18001246C(&v34, v15);
  v16 = *(_QWORD *)(a1 + 272);
  v17 = (__int64 *)sub_180011D4C(v12 + 8, &v36);
  sub_18005BA84(v16, &v29, v17);
  if ( v37 )
    sub_180010530(v37);
  v18 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 184LL))(*a3);
  (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a3 + 200LL))(*a3, &v31);
  v19 = sub_180015604(v38, v18);
  v20 = v34;
  sub_180039720(v34, v19);
  v21 = sub_18002B418(v38, &v31);
  sub_1800396C8(v20, v21);
  v22 = sub_180015604(v38, v18);
  sub_180039720(v23, v22);
  v24 = sub_18002B418(v38, &v31);
  sub_1800396C8(v25, v24);
  if ( *((_QWORD *)&v31 + 1) )
    sub_180010574(*((volatile signed __int32 **)&v31 + 1));
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 104LL))(v14, &v29);
  (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD *, __int64))(*(_QWORD *)*a4 + 16LL))(*a4, a2, v14, a3, a5);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 112LL))(v14, &v29);
  v31 = 0LL;
  sub_180039720(v20, (__int64 *)&v31);
  v31 = 0LL;
  sub_1800396C8(v20, (__int64 *)&v31);
  v31 = 0LL;
  sub_180039720(v29, (__int64 *)&v31);
  v31 = 0LL;
  sub_1800396C8(v29, (__int64 *)&v31);
  if ( v30 )
    sub_180010530(v30);
  if ( v35 )
    sub_180010530((__int64)v35);
  if ( v33 )
    sub_180010530(v33);
  v26 = a4[1];
  if ( v26 )
    sub_180010530(v26);
  v27 = *(_QWORD *)(a5 + 8);
  if ( v27 )
    sub_180010530(v27);
  return a2;
}
