/*
 * XREFs of sub_18009C1D0 @ 0x18009C1D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180044754 @ 0x180044754 (sub_180044754.c)
 *     sub_180044770 @ 0x180044770 (sub_180044770.c)
 *     sub_18004CA0C @ 0x18004CA0C (sub_18004CA0C.c)
 *     sub_18004FA08 @ 0x18004FA08 (sub_18004FA08.c)
 *     sub_18005BA84 @ 0x18005BA84 (sub_18005BA84.c)
 *     sub_18005D0B8 @ 0x18005D0B8 (sub_18005D0B8.c)
 *     sub_180060D9C @ 0x180060D9C (sub_180060D9C.c)
 *     sub_180085680 @ 0x180085680 (sub_180085680.c)
 *     sub_180085870 @ 0x180085870 (sub_180085870.c)
 *     sub_180097C50 @ 0x180097C50 (sub_180097C50.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18009C1D0(__int64 *a1, __int64 *a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 v8; // rbx
  __int64 *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // r10
  __int64 *v12; // rax
  char v13; // bl
  __int64 *v14; // r9
  __int64 *v15; // r13
  char v16; // r8
  _QWORD *v17; // r9
  _QWORD *v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // r9
  __int64 v23; // rdi
  void (__fastcall *v24)(__int64, __int64, __int64, __int64 *, __int64 *); // rbx
  __int64 v25; // rax
  __int64 result; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // [rsp+38h] [rbp-69h] BYREF
  __int64 v30; // [rsp+40h] [rbp-61h]
  __int64 v31; // [rsp+48h] [rbp-59h]
  _QWORD *v32; // [rsp+50h] [rbp-51h]
  __int64 v33; // [rsp+58h] [rbp-49h]
  __int64 v34; // [rsp+60h] [rbp-41h] BYREF
  __int64 v35; // [rsp+68h] [rbp-39h]
  __int64 v36; // [rsp+70h] [rbp-31h] BYREF
  __int64 v37; // [rsp+78h] [rbp-29h]
  __int64 v38[4]; // [rsp+80h] [rbp-21h] BYREF

  v31 = a3;
  v32 = a4;
  v33 = a5;
  v8 = a1[3];
  v9 = (__int64 *)sub_180011D4C(*a2 + 8, &v34);
  sub_18005BA84(v8, &v36, v9);
  if ( v35 )
    sub_180010530(v35);
  v10 = sub_18001246C(&v29, a4);
  *(_OWORD *)v38 = *(_OWORD *)a5;
  *(_QWORD *)a5 = 0LL;
  *(_QWORD *)(a5 + 8) = 0LL;
  sub_180097C50(v11, a2, v38, (__int64)v10, 0);
  *(_OWORD *)v38 = 0LL;
  sub_18005D0B8(a1[3], v38);
  *(_BYTE *)(a1[3] + 465) &= 0xF8u;
  v12 = (__int64 *)sub_180060D9C(a1[38], &v29);
  v13 = sub_18004FA08(*v12, a1 + 42);
  if ( v30 )
    sub_180010530(v30);
  sub_180044770(a1[34], -1LL, 0);
  sub_180044754(*v14, v13);
  v15 = a1 + 9;
  *(_BYTE *)(a1[9] + 72) = v16;
  v18 = sub_18001246C(&v29, v17);
  sub_18004CA0C(v19, v18);
  v20 = a1[36];
  *(_OWORD *)v38 = *(_OWORD *)a4;
  *a4 = 0LL;
  a4[1] = 0LL;
  sub_180085680(v20, qword_1801D7EE8, v38);
  v21 = sub_18001246C(&v29, a1 + 40);
  sub_180085870(v22, qword_1801D7EE8, v21);
  v23 = a1[3];
  v24 = *(void (__fastcall **)(__int64, __int64, __int64, __int64 *, __int64 *))(*(_QWORD *)v23 + 208LL);
  sub_180010DD0(v38, (__int64)"Blurring");
  v25 = sub_180011D4C(*a2 + 8, &v29);
  v24(v23, v25, v31, a1 + 9, v38);
  if ( v30 )
    sub_180010530(v30);
  sub_180011B24((__int64)v38);
  *(_OWORD *)v38 = 0LL;
  sub_180085680(a1[36], qword_1801D7EE8, v38);
  *(_OWORD *)v38 = 0LL;
  sub_180085870(a1[36], qword_1801D7EE8, v38);
  result = *v15;
  *(_BYTE *)(*v15 + 72) = 0;
  if ( v37 )
    result = sub_180010530(v37);
  v27 = a4[1];
  if ( v27 )
    result = sub_180010530(v27);
  v28 = *(_QWORD *)(a5 + 8);
  if ( v28 )
    return sub_180010530(v28);
  return result;
}
