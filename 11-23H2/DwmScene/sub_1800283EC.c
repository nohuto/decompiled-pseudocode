/*
 * XREFs of sub_1800283EC @ 0x1800283EC
 * Callers:
 *     sub_180028284 @ 0x180028284 (sub_180028284.c)
 *     sub_180072C68 @ 0x180072C68 (sub_180072C68.c)
 *     sub_1800734B8 @ 0x1800734B8 (sub_1800734B8.c)
 *     sub_18008E7A8 @ 0x18008E7A8 (sub_18008E7A8.c)
 *     sub_180093F40 @ 0x180093F40 (sub_180093F40.c)
 *     sub_1800964B0 @ 0x1800964B0 (sub_1800964B0.c)
 *     sub_18009D490 @ 0x18009D490 (sub_18009D490.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_180016268 @ 0x180016268 (sub_180016268.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001C680 @ 0x18001C680 (sub_18001C680.c)
 *     sub_18001F84C @ 0x18001F84C (sub_18001F84C.c)
 *     sub_180028710 @ 0x180028710 (sub_180028710.c)
 *     sub_180028B9C @ 0x180028B9C (sub_180028B9C.c)
 *     sub_18002963C @ 0x18002963C (sub_18002963C.c)
 *     sub_180029664 @ 0x180029664 (sub_180029664.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_180029870 @ 0x180029870 (sub_180029870.c)
 *     sub_18003655C @ 0x18003655C (sub_18003655C.c)
 *     sub_180055EA0 @ 0x180055EA0 (sub_180055EA0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800283EC(__int64 a1, int a2, int a3, char a4, int a5, __int64 a6)
{
  int v7; // r12d
  int v8; // r13d
  __int64 v9; // r15
  __int64 *v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rbx
  _QWORD *v13; // rax
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  _QWORD *v17; // rsi
  __int64 *v18; // rax
  __int64 v19; // rbx
  char *v20; // rax
  int v21; // r8d
  int v22; // r8d
  int v23; // r8d
  __int64 v24; // r8
  __m128 v25; // xmm2
  __m128 v26; // xmm0
  __int64 v27; // rcx
  int v28; // r8d
  __int64 v29; // rcx
  _QWORD *v30; // rbx
  _QWORD *v31; // rsi
  __int64 v33; // [rsp+38h] [rbp-71h]
  int v34; // [rsp+40h] [rbp-69h]
  __int64 v35; // [rsp+48h] [rbp-61h]
  __int64 v37; // [rsp+58h] [rbp-51h] BYREF
  __int64 v38; // [rsp+60h] [rbp-49h]
  unsigned int v39; // [rsp+68h] [rbp-41h]
  _QWORD v40[4]; // [rsp+70h] [rbp-39h] BYREF
  void *v41[4]; // [rsp+90h] [rbp-19h] BYREF

  v7 = 1;
  if ( a2 )
    v7 = a2;
  v8 = 1;
  if ( a3 )
    v8 = a3;
  *(_DWORD *)(a1 + 112) = a5;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v10 = sub_180016268(v9, &v37);
  v11 = (_QWORD *)(a1 + 136);
  sub_180011020((_QWORD *)(a1 + 136), v10);
  if ( v38 )
    sub_180010530(v38);
  sub_18002963C(a1, v41);
  if ( sub_18001F84C((__int64)v41) )
    sub_180011BA0(v41, "RenderTargetD3D11", 0x11uLL);
  v12 = *v11;
  v13 = sub_180017648(v40, (__int64)v41);
  sub_180029824(v12, v13);
  sub_180029870(*v11, 1LL);
  sub_180029870(*v11, (unsigned int)(v14 + 2));
  sub_180029870(*v11, (unsigned int)(v15 + 4));
  sub_180029870(*v11, (unsigned int)(v16 + 8));
  v39 = a5 & 0xFFFFFF7C | 3;
  sub_180055EA0(*v11, v7, v8, 0, a4, 0, a5 & 0x7C | 3, 0LL, 0, 0LL);
  if ( (a5 & 0x80u) != 0 )
  {
    v17 = (_QWORD *)(a1 + 152);
    if ( !*(_QWORD *)(a1 + 152) )
    {
      v18 = sub_180016268(v9, &v37);
      sub_180011020((_QWORD *)(a1 + 152), v18);
      if ( v38 )
        sub_180010530(v38);
    }
    v19 = *v17;
    v20 = sub_18001C680((char *)v40, v41, " (staging)");
    sub_180029824(v19, v20);
    sub_180029870(*v17, 1LL);
    sub_180029870(*v17, (unsigned int)(v21 + 2));
    sub_180029870(*v17, (unsigned int)(v22 + 4));
    sub_180029870(*v17, (unsigned int)(v23 + 8));
    sub_180055EA0(*v17, v7, v8, 0, a4, 3, v39 & 0x7C | 0x80, v24 & v33, v24 & v34, v24 & v35);
  }
  v25 = 0LL;
  v25.m128_f32[0] = (float)v8;
  v26 = 0LL;
  v26.m128_f32[0] = (float)v7;
  sub_180028B9C(a1, _mm_unpacklo_ps(v26, v25).m128_u64[0]);
  if ( a6 )
    sub_180029870(a1, 1LL);
  if ( (unsigned __int8)sub_180029664(a1, 1LL) )
  {
    if ( a6 )
    {
      sub_180028710(v27, a6);
      sub_180029870(a1, 2LL);
      sub_180029870(v29, (unsigned int)(v28 + 4));
    }
    else
    {
      sub_18003655C(v9, v40);
      v30 = (_QWORD *)v40[0];
      v31 = (_QWORD *)v40[1];
      while ( v30 != v31 )
      {
        sub_18001246C(&v37, v30);
        sub_180028710(a1, v37);
        if ( v38 )
          sub_180010530(v38);
        v30 += 2;
      }
      sub_180013300((__int64)v40);
    }
  }
  return sub_180011B24((__int64)v41);
}
