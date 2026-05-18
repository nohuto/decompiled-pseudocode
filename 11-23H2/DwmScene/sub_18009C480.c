/*
 * XREFs of sub_18009C480 @ 0x18009C480
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180026B04 @ 0x180026B04 (sub_180026B04.c)
 *     sub_180044770 @ 0x180044770 (sub_180044770.c)
 *     sub_18004CA0C @ 0x18004CA0C (sub_18004CA0C.c)
 *     sub_18005BA84 @ 0x18005BA84 (sub_18005BA84.c)
 *     sub_18005D0B8 @ 0x18005D0B8 (sub_18005D0B8.c)
 *     sub_180085680 @ 0x180085680 (sub_180085680.c)
 *     sub_180085870 @ 0x180085870 (sub_180085870.c)
 *     sub_180097C50 @ 0x180097C50 (sub_180097C50.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_18009C480(__int64 *a1, _QWORD *a2, __int64 *a3, __int64 a4, _QWORD *a5, _QWORD *a6)
{
  __int64 v9; // rbx
  __int64 *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // r9
  __int64 v13; // r10
  _QWORD *v14; // r9
  _QWORD *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // r9
  __int64 v20; // rdi
  void (__fastcall *v21)(__int64, __int64, __int64, __int64 *, _QWORD *); // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int128 v26; // [rsp+30h] [rbp-89h] BYREF
  __int64 v27; // [rsp+40h] [rbp-79h] BYREF
  __int64 v28; // [rsp+48h] [rbp-71h]
  __int64 v29; // [rsp+58h] [rbp-61h]
  _QWORD *v30; // [rsp+60h] [rbp-59h]
  _QWORD *v31; // [rsp+68h] [rbp-51h]
  __int64 v32; // [rsp+70h] [rbp-49h] BYREF
  __int64 v33; // [rsp+78h] [rbp-41h]
  __int64 v34; // [rsp+80h] [rbp-39h] BYREF
  __int64 v35; // [rsp+88h] [rbp-31h]
  _QWORD v36[4]; // [rsp+90h] [rbp-29h] BYREF

  v29 = a4;
  v30 = a5;
  v31 = a6;
  v9 = a1[3];
  v10 = (__int64 *)sub_180011D4C(*a3 + 8, &v32);
  sub_18005BA84(v9, &v34, v10);
  if ( v33 )
    sub_180010530(v33);
  sub_18001246C(v36, a5);
  v11 = sub_18001246C(&v27, a6);
  sub_180097C50(v13, a3, v11, v12, 0xFFFFFFFF);
  v26 = 0LL;
  sub_18005D0B8(a1[3], (__int64 *)&v26);
  *(_BYTE *)(a1[3] + 465) &= 0xF8u;
  sub_180044770(a1[34], -1LL, 0);
  *(_BYTE *)(a1[9] + 72) = 1;
  v15 = sub_18001246C(&v27, v14);
  sub_18004CA0C(v16, v15);
  v17 = a1[36];
  v26 = *(_OWORD *)a5;
  *a5 = 0LL;
  a5[1] = 0LL;
  sub_180085680(v17, qword_1801D7EE8, &v26);
  v18 = sub_18001246C(&v27, a1 + 40);
  sub_180085870(v19, qword_1801D7EE8, v18);
  v20 = a1[3];
  v21 = *(void (__fastcall **)(__int64, __int64, __int64, __int64 *, _QWORD *))(*(_QWORD *)v20 + 208LL);
  sub_180010DD0(v36, (__int64)"Downsampling");
  v22 = sub_180011D4C(*a3 + 8, &v27);
  v21(v20, v22, v29, a1 + 9, v36);
  if ( v28 )
    sub_180010530(v28);
  sub_180011B24((__int64)v36);
  *(_BYTE *)(a1[9] + 72) = 0;
  v26 = 0LL;
  sub_180085680(a1[36], qword_1801D7EE8, &v26);
  v26 = 0LL;
  sub_180085870(a1[36], qword_1801D7EE8, &v26);
  sub_180026B04(*a6, a2);
  if ( v35 )
    sub_180010530(v35);
  v23 = a5[1];
  if ( v23 )
    sub_180010530(v23);
  v24 = a6[1];
  if ( v24 )
    sub_180010530(v24);
  return a2;
}
