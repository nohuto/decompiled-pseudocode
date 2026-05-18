/*
 * XREFs of sub_180073624 @ 0x180073624
 * Callers:
 *     sub_180064BB0 @ 0x180064BB0 (sub_180064BB0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_180026580 @ 0x180026580 (sub_180026580.c)
 *     sub_180026B04 @ 0x180026B04 (sub_180026B04.c)
 *     sub_18002A37C @ 0x18002A37C (sub_18002A37C.c)
 *     sub_18002B418 @ 0x18002B418 (sub_18002B418.c)
 *     sub_1800396C8 @ 0x1800396C8 (sub_1800396C8.c)
 *     sub_180039720 @ 0x180039720 (sub_180039720.c)
 *     sub_1800397B8 @ 0x1800397B8 (sub_1800397B8.c)
 *     sub_18005BA84 @ 0x18005BA84 (sub_18005BA84.c)
 *     sub_180072530 @ 0x180072530 (sub_180072530.c)
 *     sub_18007264C @ 0x18007264C (sub_18007264C.c)
 *     sub_180073A4C @ 0x180073A4C (sub_180073A4C.c)
 *     sub_1800A2214 @ 0x1800A2214 (sub_1800A2214.c)
 *     sub_1800A22CC @ 0x1800A22CC (sub_1800A22CC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180073624(_QWORD *a1, _QWORD *a2, char a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  void (__fastcall *v10)(__int64, _QWORD *); // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 *v13; // rax
  __int64 *v14; // rax
  _QWORD *v15; // rbx
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int64 *v18; // rax
  __int64 v19; // r8
  __int64 *v20; // rax
  __int64 v21; // r8
  _QWORD *v22; // rax
  __int64 *v23; // rax
  _QWORD *v24; // rax
  __int64 result; // rax
  __int128 v26; // [rsp+30h] [rbp-69h] BYREF
  __int64 v27; // [rsp+40h] [rbp-59h] BYREF
  __int64 v28; // [rsp+48h] [rbp-51h]
  __int64 v29; // [rsp+50h] [rbp-49h] BYREF
  __int64 v30; // [rsp+58h] [rbp-41h]
  __int64 v31; // [rsp+60h] [rbp-39h] BYREF
  __int64 v32; // [rsp+68h] [rbp-31h]
  __int128 v33; // [rsp+70h] [rbp-29h] BYREF
  __int64 v34; // [rsp+80h] [rbp-19h] BYREF
  __int64 v35; // [rsp+88h] [rbp-11h]
  __int128 v36; // [rsp+90h] [rbp-9h] BYREF
  _QWORD v37[4]; // [rsp+A0h] [rbp+7h] BYREF

  v6 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a2 + 376LL))(*a2, &v26);
  sub_180011C50(v6, &v29);
  if ( *((_QWORD *)&v26 + 1) )
    sub_180010574(*((volatile signed __int32 **)&v26 + 1));
  sub_18002A37C(a1[36] + 16LL);
  v7 = v29;
  v8 = (_QWORD *)sub_180026580(v29);
  sub_18001246C(&v34, v8);
  v9 = sub_18001246C(&v26, &v29);
  v10(v11, v9);
  v33 = 0LL;
  if ( a1[8] )
  {
    v13 = (__int64 *)sub_180073A4C(a1, &v26, v12, &v29);
    sub_180011020(&v33, v13);
    if ( *((_QWORD *)&v26 + 1) )
      sub_180010530(*((__int64 *)&v26 + 1));
    v7 = v29;
  }
  else
  {
    v14 = (__int64 *)sub_180026B04(a1[57], &v26);
    sub_180011020(&v33, v14);
    if ( *((_QWORD *)&v26 + 1) )
      sub_180010530(*((__int64 *)&v26 + 1));
  }
  sub_18005BA84(a1[34], &v31, &v29);
  v15 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 184LL))(*a2);
  (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a2 + 200LL))(*a2, &v26);
  v16 = sub_180015604(&v27, v15);
  sub_180039720(v34, v16);
  v17 = sub_18002B418(&v27, &v26);
  sub_1800396C8(v34, v17);
  v18 = sub_180015604(&v27, v15);
  sub_180039720(v19, v18);
  v20 = sub_18002B418(&v27, &v26);
  sub_1800396C8(v21, v20);
  if ( *((_QWORD *)&v26 + 1) )
    sub_180010574(*((volatile signed __int32 **)&v26 + 1));
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 104LL))(v7, &v31);
  sub_180010DD0(v37, (__int64)"IPM_ProcessScene");
  sub_1800A2214(&v36, &v31, v37);
  sub_180011B24((__int64)v37);
  if ( a3 )
  {
    v22 = sub_18001246C(&v26, &v33);
    v23 = sub_18007264C((__int64)a1, &v27, &v29, (__int64)a2, v22);
    sub_180011020(&v33, v23);
    if ( v28 )
      sub_180010530(v28);
    v7 = v29;
  }
  v24 = sub_18001246C(&v26, &v33);
  sub_180072530((__int64)a1, (__int64)a2, (__int64)v24);
  sub_1800A22CC(&v36);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 112LL))(v7, &v31);
  v36 = 0LL;
  v26 = 0LL;
  sub_1800397B8(v34, (__int64)&v26, (__int64)&v36);
  v26 = 0LL;
  sub_180039720(v34, (__int64 *)&v26);
  v26 = 0LL;
  sub_1800396C8(v34, (__int64 *)&v26);
  v26 = 0LL;
  sub_180039720(v31, (__int64 *)&v26);
  v26 = 0LL;
  result = (__int64)sub_1800396C8(v31, (__int64 *)&v26);
  if ( v32 )
    result = sub_180010530(v32);
  if ( *((_QWORD *)&v33 + 1) )
    result = sub_180010530(*((__int64 *)&v33 + 1));
  if ( v35 )
    result = sub_180010530(v35);
  if ( v30 )
    return sub_180010530(v30);
  return result;
}
