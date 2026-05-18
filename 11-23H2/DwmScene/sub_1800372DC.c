/*
 * XREFs of sub_1800372DC @ 0x1800372DC
 * Callers:
 *     sub_180057C24 @ 0x180057C24 (sub_180057C24.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180011A3C @ 0x180011A3C (sub_180011A3C.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18001F84C @ 0x18001F84C (sub_18001F84C.c)
 *     sub_1800265C8 @ 0x1800265C8 (sub_1800265C8.c)
 *     sub_1800265F0 @ 0x1800265F0 (sub_1800265F0.c)
 *     sub_180026628 @ 0x180026628 (sub_180026628.c)
 *     sub_18002DADC @ 0x18002DADC (sub_18002DADC.c)
 *     sub_18002DB00 @ 0x18002DB00 (sub_18002DB00.c)
 *     sub_18002FAEC @ 0x18002FAEC (sub_18002FAEC.c)
 *     sub_18002FC2C @ 0x18002FC2C (sub_18002FC2C.c)
 *     sub_18003212C @ 0x18003212C (sub_18003212C.c)
 *     sub_1800328A0 @ 0x1800328A0 (sub_1800328A0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall sub_1800372DC(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rax
  _QWORD *v10; // rdi
  _QWORD *v11; // rbx
  void **v12; // rax
  _QWORD *v13; // rax
  void **v14; // rax
  _QWORD *v15; // rax
  char *v16; // rax
  volatile signed __int32 *v17; // rcx
  unsigned __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  double v19; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v20; // [rsp+40h] [rbp-C0h]
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h]
  _QWORD v23[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v24[16]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v25; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int32 *v26; // [rsp+88h] [rbp-78h]
  _BYTE v27[32]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v28[4]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v29[32]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v30[4]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v31[4]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v32[4]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v33[4]; // [rsp+160h] [rbp+60h] BYREF

  v23[1] = a2;
  v20 = 0LL;
  v4 = a2[1];
  if ( v4 && sub_180011A3C(v4) )
  {
    v5 = *a2;
    *(_QWORD *)&v20 = *a2;
    v6 = a2[1];
    *((_QWORD *)&v20 + 1) = v6;
  }
  else
  {
    v6 = *((_QWORD *)&v20 + 1);
    v5 = v20;
  }
  if ( v5 )
  {
    v18 = v5;
    v19 = 0.0;
    (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD *, double *))(*(_QWORD *)v5 + 224LL))(v5, 0LL, v23, &v19);
    v7 = v23[0];
    *(_QWORD *)(*(_QWORD *)sub_18002FC2C((__int64 *)(a1 + 1440), (__int64)&v25, &v18) + 40LL) = v7;
    v8 = *(_QWORD *)sub_18002FAEC((_QWORD *)(a1 + 1424), (__int64)v24, &v18);
    sub_180012440(&v25, v8 + 64);
    LOBYTE(v7) = sub_18001F84C((__int64)&v25);
    sub_180013348((__int64)&v25);
    if ( (_BYTE)v7 )
    {
      v9 = (*(__int64 (__fastcall **)(unsigned __int64, __int64 *))(*(_QWORD *)v5 + 376LL))(v5, &v25);
      sub_180011C50(v9, &v21);
      if ( v26 )
        sub_180010574(v26);
      if ( v21 )
      {
        v10 = sub_180026628(v21, v33);
        v11 = sub_1800265F0(v21, v32);
        v12 = (void **)sub_1800265C8(v21, v31);
        v13 = sub_18002DB00(v30, v12, L" ");
        v14 = (void **)sub_18002DADC((__int64)v29, (__int64)v13, (__int64)v11);
        v15 = sub_18002DB00(v28, v14, L" ");
        v16 = (char *)sub_18002DADC((__int64)v27, (__int64)v15, (__int64)v10);
        sub_18003212C((char *)(v8 + 64), v16);
        sub_180013348((__int64)v27);
        sub_180013348((__int64)v28);
        sub_180013348((__int64)v29);
        sub_180013348((__int64)v30);
        sub_180013348((__int64)v31);
        sub_180013348((__int64)v32);
        sub_180013348((__int64)v33);
      }
      if ( v22 )
        sub_180010530(v22);
    }
    sub_1800328A0(v8 + 40, v19);
  }
  if ( v6 )
    sub_180010530(v6);
  v17 = (volatile signed __int32 *)a2[1];
  if ( v17 )
    sub_180010574(v17);
}
