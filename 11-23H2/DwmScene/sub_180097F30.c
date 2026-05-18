/*
 * XREFs of sub_180097F30 @ 0x180097F30
 * Callers:
 *     sub_180073B4C @ 0x180073B4C (sub_180073B4C.c)
 *     sub_180097F30 @ 0x180097F30 (sub_180097F30.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013D44 @ 0x180013D44 (sub_180013D44.c)
 *     sub_180014620 @ 0x180014620 (sub_180014620.c)
 *     sub_18004CA0C @ 0x18004CA0C (sub_18004CA0C.c)
 *     sub_180071F84 @ 0x180071F84 (sub_180071F84.c)
 *     sub_180097E40 @ 0x180097E40 (sub_180097E40.c)
 *     sub_180097F30 @ 0x180097F30 (sub_180097F30.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_180097F30(_QWORD *a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 a5, __int64 *a6)
{
  _QWORD *v9; // r15
  __int64 *v10; // rbx
  __int64 *v11; // r15
  __int64 (__fastcall ***v12)(_QWORD, _BYTE *); // rcx
  unsigned int v13; // eax
  int v14; // r8d
  int v15; // r9d
  _QWORD *v16; // rax
  __int64 v17; // rbx
  _QWORD *v18; // rax
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  _QWORD *v26; // [rsp+38h] [rbp-D0h]
  _BYTE *v27; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+48h] [rbp-C0h]
  __int64 v29; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+68h] [rbp-A0h]
  _QWORD *v32; // [rsp+70h] [rbp-98h] BYREF
  __int64 v33; // [rsp+78h] [rbp-90h]
  _QWORD v34[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v35; // [rsp+90h] [rbp-78h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v37[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v38; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v39[56]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v40; // [rsp+108h] [rbp+0h]

  v9 = a1;
  v10 = (__int64 *)a1[19];
  if ( v10 != (__int64 *)a1[20] )
  {
    v11 = (__int64 *)a1[20];
    do
    {
      v30 = *v10;
      v32 = v34;
      v26 = sub_18001246C(v34, a6);
      v27 = v39;
      v40 = 0LL;
      v12 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a5 + 56);
      if ( v12 )
        v40 = (**v12)(v12, v39);
      sub_18001246C(&v35, a4);
      sub_18001246C(&v36, a3);
      v13 = (unsigned int)sub_18001246C(&v29, a2);
      sub_180097F30(v30, v13, v14, v15, (__int64)v39, (__int64)v26);
      v10 += 2;
    }
    while ( v10 != v11 );
    v9 = a1;
  }
  sub_180097E40(a5, (__int64)v37);
  sub_18001246C(&v32, v37);
  sub_18001246C(&v30, &v38);
  sub_180013D44((__int64)v32, &v27);
  v16 = sub_18001246C(&v29, &v30);
  v17 = (__int64)v27;
  sub_180014620((__int64)v27, v16);
  v18 = sub_18001246C(&v29, a6);
  sub_18004CA0C(v17, v18);
  *(_BYTE *)(v17 + 72) = 0;
  sub_180011020(v9 + 3, a2);
  sub_180011020(v9 + 5, a3);
  sub_180011020(v9 + 1, a4);
  sub_180011020(v9 + 7, (__int64 *)&v32);
  sub_180011020(v9 + 9, (__int64 *)&v27);
  sub_180011020(v9 + 11, a6);
  if ( v28 )
    sub_180010530(v28);
  if ( v31 )
    sub_180010530(v31);
  if ( v33 )
    sub_180010530(v33);
  result = sub_180071F84((__int64)v37);
  v21 = a2[1];
  if ( v21 )
    result = sub_180010530(v21);
  v22 = a3[1];
  if ( v22 )
    result = sub_180010530(v22);
  v23 = a4[1];
  if ( v23 )
    result = sub_180010530(v23);
  v24 = *(_QWORD *)(a5 + 56);
  if ( v24 )
  {
    LOBYTE(v20) = v24 != a5;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 32LL))(v24, v20);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  v25 = a6[1];
  if ( v25 )
    return sub_180010530(v25);
  return result;
}
