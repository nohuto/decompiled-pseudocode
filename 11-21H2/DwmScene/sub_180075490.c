/*
 * XREFs of sub_180075490 @ 0x180075490
 * Callers:
 *     sub_18006D170 @ 0x18006D170 (sub_18006D170.c)
 *     sub_1800713F0 @ 0x1800713F0 (sub_1800713F0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_180026948 @ 0x180026948 (sub_180026948.c)
 *     sub_180036540 @ 0x180036540 (sub_180036540.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_18004883C @ 0x18004883C (sub_18004883C.c)
 *     sub_180048858 @ 0x180048858 (sub_180048858.c)
 *     sub_180048864 @ 0x180048864 (sub_180048864.c)
 *     sub_180063F5C @ 0x180063F5C (sub_180063F5C.c)
 *     sub_18006B2C0 @ 0x18006B2C0 (sub_18006B2C0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
char *__fastcall sub_180075490(__int64 a1, __int64 *a2)
{
  __int64 **v4; // r12
  __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rdi
  char v11; // al
  double v12; // xmm0_8
  int v13; // xmm9_4
  double v14; // xmm0_8
  int v15; // xmm10_4
  double v16; // xmm0_8
  int v17; // xmm11_4
  double v18; // xmm0_8
  int v19; // xmm12_4
  double v20; // xmm0_8
  int v21; // xmm13_4
  double v22; // xmm0_8
  int v23; // xmm14_4
  double v24; // xmm0_8
  int v25; // xmm6_4
  double v26; // xmm0_8
  int v27; // xmm7_4
  double v28; // xmm0_8
  int v29; // xmm8_4
  double v30; // xmm0_8
  int v31; // xmm15_4
  int v32; // eax
  double v33; // xmm0_8
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  signed __int32 v38; // eax
  signed __int32 v39; // ett
  __int64 v40; // rcx
  unsigned __int64 v41; // xmm1_8
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rdx
  signed __int32 v45; // eax
  signed __int32 v46; // ett
  char *result; // rax
  __int64 v48; // [rsp+20h] [rbp-E0h]
  _QWORD v49[2]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v50[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v51; // [rsp+48h] [rbp-B8h]
  int v52; // [rsp+4Ch] [rbp-B4h]
  int v53; // [rsp+50h] [rbp-B0h]
  int v54; // [rsp+54h] [rbp-ACh]
  float v55; // [rsp+58h] [rbp-A8h]
  __m128i v56; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v57; // [rsp+70h] [rbp-90h] BYREF
  __int128 v58; // [rsp+80h] [rbp-80h] BYREF
  __m128i v59; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v60[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v61[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v62[22]; // [rsp+D0h] [rbp-30h] BYREF
  char v63; // [rsp+1C8h] [rbp+C8h]
  char v64; // [rsp+1D0h] [rbp+D0h]
  char v65; // [rsp+1D8h] [rbp+D8h]

  v48 = sub_180036808(a1, *(_DWORD *)(*a2 + 112));
  v4 = off_1801EA9D0;
  v5 = (__int64 *)(sub_18006B2C0(*a2) + 64);
  do
  {
    v6 = *(v5 - 6);
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      v6 = *(v5 - 6);
    }
    v7 = *(v5 - 7);
    v50[0] = v7;
    v50[1] = v6;
    v8 = *v5;
    if ( *v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      v8 = *v5;
      v7 = v50[0];
    }
    v9 = *(v5 - 1);
    v10 = v9;
    v49[0] = v9;
    v49[1] = v8;
    if ( !sub_1800122B0(v50) && !sub_1800122B0(v49) )
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v48 + 64LL))(v48, *(v4 - 2), 0LL);
      v64 = v11;
      v12 = (*(double (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v48 + 88LL))(v48, *(v4 - 1));
      v13 = LODWORD(v12);
      v14 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v48 + 88LL))(v48, *v4);
      v15 = LODWORD(v14);
      v16 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v48 + 88LL))(v48, v4[1]);
      v17 = LODWORD(v16);
      v18 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v48 + 88LL))(v48, v4[2]);
      v19 = LODWORD(v18);
      v20 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v48 + 88LL))(v48, v4[3]);
      v21 = LODWORD(v20);
      v22 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v48 + 88LL))(v48, v4[4]);
      v23 = LODWORD(v22);
      v24 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v48 + 88LL))(v48, v4[5]);
      v25 = LODWORD(v24);
      v26 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v48 + 88LL))(v48, v4[6]);
      v27 = LODWORD(v26);
      v28 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v48 + 88LL))(v48, v4[7]);
      v29 = LODWORD(v28);
      v30 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v48 + 88LL))(v48, v4[8]);
      v31 = LODWORD(v30);
      v52 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v48 + 72LL))(v48, v4[9], 0LL);
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v48 + 72LL))(v48, v4[10], 0LL);
      v53 = v32;
      v33 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v48 + 88LL))(v48, v4[11]);
      v54 = LODWORD(v33);
      v55 = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v48 + 88LL))(v48, v4[12]);
      v63 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v48 + 64LL))(v48, v4[13], 0LL);
      v65 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v48 + 64LL))(v48, v4[14], 0LL);
      v51 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v48 + 72LL))(v48, v4[15], 0LL);
      v57 = 0LL;
      v35 = a2[1];
      if ( v35 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v35 + 8));
        v35 = a2[1];
        v7 = v50[0];
        v10 = v49[0];
      }
      *(_QWORD *)&v57 = *a2;
      *((_QWORD *)&v57 + 1) = v35;
      sub_180036540(a1, v62, v34, &v57);
      v36 = v62[0];
      v56 = 0LL;
      v37 = *(_QWORD *)(v62[0] + 64LL);
      if ( v37 )
      {
        v38 = *(_DWORD *)(v37 + 8);
        while ( v38 )
        {
          v39 = v38;
          v38 = _InterlockedCompareExchange((volatile signed __int32 *)(v37 + 8), v38 + 1, v38);
          if ( v39 == v38 )
          {
            v56 = *(__m128i *)(v36 + 56);
            break;
          }
        }
        v7 = v50[0];
        v10 = v49[0];
      }
      v59 = v56;
      v40 = v56.m128i_i64[1];
      v56 = 0LL;
      v41 = _mm_srli_si128(v59, 8).m128i_u64[0];
      if ( v41 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v41 + 8));
        v7 = v50[0];
        v10 = v49[0];
      }
      v60[0] = *(_QWORD *)(v9 + 96);
      *(_QWORD *)(v9 + 96) = v59.m128i_i64[0];
      v60[1] = *(_QWORD *)(v9 + 104);
      *(_QWORD *)(v9 + 104) = v40;
      sub_180010910((__int64)v60);
      sub_180010910((__int64)&v59);
      sub_180010910((__int64)&v56);
      if ( v63 )
      {
        *(_DWORD *)(v10 + 88) = 1;
        *(_DWORD *)(v10 + 136) = -1077342245;
      }
      else
      {
        *(_DWORD *)(v10 + 88) = v51;
        *(_DWORD *)(v10 + 136) = 0;
      }
      *(_DWORD *)(v10 + 112) = v13;
      *(_DWORD *)(v10 + 116) = v15;
      *(_DWORD *)(v10 + 120) = v17;
      *(_DWORD *)(v10 + 124) = v19;
      *(_DWORD *)(v10 + 128) = v21;
      *(_DWORD *)(v10 + 132) = v23;
      *(_BYTE *)(v10 + 72) = v64;
      *(_DWORD *)(v10 + 152) = v25;
      *(_DWORD *)(v10 + 156) = v27;
      *(_DWORD *)(v10 + 160) = v29;
      *(_DWORD *)(v10 + 164) = 1065353216;
      *(_BYTE *)(v7 + 72) = v64;
      *(_DWORD *)(v7 + 88) = v25;
      *(_DWORD *)(v7 + 92) = v27;
      *(_DWORD *)(v7 + 96) = v29;
      *(_DWORD *)(v7 + 100) = 1065353216;
      *(_DWORD *)(v7 + 104) = v31;
      sub_18004883C(v7, v52);
      sub_180048864(v42, v53);
      *(_DWORD *)(v7 + 116) = v54;
      *(float *)(v7 + 112) = v55;
      sub_180048858(v43, v65);
      v58 = 0LL;
      v44 = *(_QWORD *)(v7 + 64);
      if ( v44 )
      {
        v45 = *(_DWORD *)(v44 + 8);
        while ( v45 )
        {
          v46 = v45;
          v45 = _InterlockedCompareExchange((volatile signed __int32 *)(v44 + 8), v45 + 1, v45);
          if ( v46 == v45 )
          {
            v58 = *(_OWORD *)(v7 + 56);
            break;
          }
        }
      }
      sub_180026948(v58, v61);
      sub_180010910((__int64)&v58);
      if ( v61[0] )
        sub_180063F5C(v61[0]);
      sub_180010910((__int64)v61);
      sub_180010910((__int64)v62);
    }
    sub_180010910((__int64)v49);
    sub_180010910((__int64)v50);
    v5 += 2;
    v4 += 18;
    result = aAvexceptionStd;
  }
  while ( (__int64)v4 < (__int64)aAvexceptionStd );
  return result;
}
