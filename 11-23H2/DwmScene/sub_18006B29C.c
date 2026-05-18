/*
 * XREFs of sub_18006B29C @ 0x18006B29C
 * Callers:
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 *     sub_1800678D0 @ 0x1800678D0 (sub_1800678D0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180024B5C @ 0x180024B5C (sub_180024B5C.c)
 *     sub_180033EB4 @ 0x180033EB4 (sub_180033EB4.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_18003B5D8 @ 0x18003B5D8 (sub_18003B5D8.c)
 *     sub_18004340C @ 0x18004340C (sub_18004340C.c)
 *     sub_180043428 @ 0x180043428 (sub_180043428.c)
 *     sub_180043434 @ 0x180043434 (sub_180043434.c)
 *     sub_18005BEA8 @ 0x18005BEA8 (sub_18005BEA8.c)
 *     sub_1800628C8 @ 0x1800628C8 (sub_1800628C8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
unsigned __int8 __fastcall sub_18006B29C(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // r15
  _UNKNOWN **v6; // r12
  __int64 *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned __int8 result; // al
  __int64 v11; // r8
  char v12; // al
  double v13; // xmm0_8
  int v14; // xmm11_4
  double v15; // xmm0_8
  int v16; // xmm12_4
  double v17; // xmm0_8
  int v18; // xmm13_4
  double v19; // xmm0_8
  int v20; // xmm14_4
  double v21; // xmm0_8
  int v22; // xmm15_4
  double v23; // xmm0_8
  double v24; // xmm0_8
  int v25; // xmm7_4
  double v26; // xmm0_8
  int v27; // xmm8_4
  double v28; // xmm0_8
  int v29; // xmm9_4
  int v30; // eax
  double v31; // xmm0_8
  _QWORD *v32; // rax
  __int64 v33; // r8
  unsigned __int64 v34; // rbx
  int v35; // xmm0_4
  float *v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // [rsp+20h] [rbp-E0h]
  int v41; // [rsp+28h] [rbp-D8h]
  __int64 v42; // [rsp+30h] [rbp-D0h]
  int v43; // [rsp+38h] [rbp-C8h]
  float v44; // [rsp+3Ch] [rbp-C4h]
  int v45; // [rsp+40h] [rbp-C0h]
  int v46; // [rsp+44h] [rbp-BCh]
  int v47; // [rsp+48h] [rbp-B8h]
  float v48; // [rsp+4Ch] [rbp-B4h]
  __m128i v49; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v51; // [rsp+68h] [rbp-98h]
  _QWORD v52[2]; // [rsp+70h] [rbp-90h] BYREF
  __m128i v53; // [rsp+80h] [rbp-80h] BYREF
  __int64 v54; // [rsp+90h] [rbp-70h] BYREF
  __int64 v55; // [rsp+98h] [rbp-68h]
  __int64 v56; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v57; // [rsp+A8h] [rbp-58h]
  __int64 v58; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v59; // [rsp+B8h] [rbp-48h]
  _QWORD v60[23]; // [rsp+C0h] [rbp-40h] BYREF
  char v62; // [rsp+1C8h] [rbp+C8h]
  char v63; // [rsp+1D0h] [rbp+D0h]
  char v64; // [rsp+1D8h] [rbp+D8h]

  v3 = a1;
  v40 = sub_180034094(a1, *(_DWORD *)(*a2 + 112));
  v4 = sub_1800628C8(*a2);
  v5 = (_QWORD *)(v4 + 8);
  v6 = &off_1801C89D0;
  v7 = (__int64 *)(v4 + 64);
  v42 = 3LL;
  do
  {
    sub_18001246C(&v50, v5);
    if ( *v7 )
      _InterlockedIncrement((volatile signed __int32 *)(*v7 + 8));
    v8 = *(v7 - 1);
    v52[0] = v8;
    v9 = *v7;
    v52[1] = *v7;
    result = sub_180011DD0(&v50);
    if ( !result )
    {
      result = sub_180011DD0(v52);
      if ( !result )
      {
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v40 + 64LL))(v40, *(v6 - 2), 0LL);
        v63 = v12;
        v13 = (*(double (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v40 + 88LL))(v40, *(v6 - 1));
        v14 = LODWORD(v13);
        v15 = (*(double (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v40 + 88LL))(v40, *v6);
        v16 = LODWORD(v15);
        v17 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v40 + 88LL))(v40, v6[1]);
        v18 = LODWORD(v17);
        v19 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v40 + 88LL))(v40, v6[2]);
        v20 = LODWORD(v19);
        v21 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v40 + 88LL))(v40, v6[3]);
        v22 = LODWORD(v21);
        v23 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v40 + 88LL))(v40, v6[4]);
        v43 = LODWORD(v23);
        v24 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v40 + 88LL))(v40, v6[5]);
        v25 = LODWORD(v24);
        v26 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v40 + 88LL))(v40, v6[6]);
        v27 = LODWORD(v26);
        v28 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v40 + 88LL))(v40, v6[7]);
        v29 = LODWORD(v28);
        v44 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v40 + 88LL))(v40, v6[8]);
        v45 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v40 + 72LL))(v40, v6[9], 0LL);
        (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v40 + 72LL))(v40, v6[10], 0LL);
        v46 = v30;
        v31 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v40 + 88LL))(v40, v6[11]);
        v47 = LODWORD(v31);
        v48 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v40 + 88LL))(v40, v6[12]);
        v62 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v40 + 64LL))(v40, v6[13], 0LL);
        v64 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v40 + 64LL))(v40, v6[14], 0LL);
        v41 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v40 + 72LL))(v40, v6[15], 0LL);
        v32 = sub_18001246C(v60, a2);
        sub_180033EB4(v3, &v58, v33, v32);
        sub_180011C50(v58 + 56, &v53);
        v49 = _mm_load_si128(&v53);
        v34 = _mm_srli_si128(v49, 8).m128i_u64[0];
        v53 = 0LL;
        sub_18003B5D8((_QWORD *)(v8 + 96), &v49);
        if ( v34 )
          sub_180010530(v49.m128i_i64[1]);
        if ( v62 )
        {
          v35 = -1077342245;
          v41 = 1;
        }
        else
        {
          v35 = 0;
        }
        *(_DWORD *)(v8 + 88) = v41;
        *(_DWORD *)(v8 + 136) = v35;
        *(_DWORD *)(v8 + 112) = v14;
        *(_DWORD *)(v8 + 116) = v16;
        *(_DWORD *)(v8 + 120) = v18;
        *(_DWORD *)(v8 + 124) = v20;
        *(_DWORD *)(v8 + 128) = v22;
        *(_DWORD *)(v8 + 132) = v43;
        *(_BYTE *)(v8 + 72) = v63;
        *(_DWORD *)(v8 + 152) = v25;
        *(_DWORD *)(v8 + 156) = v27;
        *(_DWORD *)(v8 + 160) = v29;
        *(_DWORD *)(v8 + 164) = 1065353216;
        v36 = (float *)v50;
        *(_BYTE *)(v50 + 72) = v63;
        *((_DWORD *)v36 + 22) = v25;
        *((_DWORD *)v36 + 23) = v27;
        *((_DWORD *)v36 + 24) = v29;
        v36[25] = 1.0;
        v36[26] = v44;
        sub_18004340C((__int64)v36, v45);
        sub_180043434(v37, v46);
        *(_DWORD *)(v38 + 116) = v47;
        *(float *)(v38 + 112) = v48;
        sub_180043428(v38, v64);
        sub_180011C50(v39 + 56, &v54);
        result = (unsigned __int8)sub_180024B5C(v54, &v56);
        if ( v55 )
          result = sub_180010530(v55);
        if ( v56 )
          result = sub_18005BEA8(v56);
        if ( v57 )
          result = sub_180010530(v57);
        if ( v59 )
          result = sub_180010530(v59);
        if ( v9 )
          result = sub_180010530(v9);
        if ( v51 )
          result = sub_180010530(v51);
        v3 = a1;
        goto LABEL_24;
      }
    }
    if ( v9 )
    {
      result = sub_180010530(v9);
      v11 = v42;
    }
    if ( v51 )
    {
      result = sub_180010530(v51);
LABEL_24:
      v11 = v42;
    }
    v5 += 2;
    v7 += 2;
    v6 += 18;
    v42 = v11 - 1;
  }
  while ( v11 != 1 );
  return result;
}
