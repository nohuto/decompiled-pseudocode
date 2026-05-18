/*
 * XREFs of sub_18001A2B0 @ 0x18001A2B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180011C6C @ 0x180011C6C (sub_180011C6C.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_180017578 @ 0x180017578 (sub_180017578.c)
 *     sub_18001895C @ 0x18001895C (sub_18001895C.c)
 *     sub_180018B4C @ 0x180018B4C (sub_180018B4C.c)
 *     sub_180018EB0 @ 0x180018EB0 (sub_180018EB0.c)
 *     sub_180019728 @ 0x180019728 (sub_180019728.c)
 *     sub_18001C880 @ 0x18001C880 (sub_18001C880.c)
 *     sub_18001D8E4 @ 0x18001D8E4 (sub_18001D8E4.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180036540 @ 0x180036540 (sub_180036540.c)
 *     sub_180042C3C @ 0x180042C3C (sub_180042C3C.c)
 *     sub_1800596B4 @ 0x1800596B4 (sub_1800596B4.c)
 *     sub_18005EC68 @ 0x18005EC68 (sub_18005EC68.c)
 *     sub_18005F4C0 @ 0x18005F4C0 (sub_18005F4C0.c)
 *     sub_18005F5D4 @ 0x18005F5D4 (sub_18005F5D4.c)
 *     sub_180063D14 @ 0x180063D14 (sub_180063D14.c)
 *     sub_180063F5C @ 0x180063F5C (sub_180063F5C.c)
 *     sub_18006560C @ 0x18006560C (sub_18006560C.c)
 *     sub_180065734 @ 0x180065734 (sub_180065734.c)
 *     sub_180065944 @ 0x180065944 (sub_180065944.c)
 *     sub_180065994 @ 0x180065994 (sub_180065994.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_18001A2B0(__int64 a1, __int64 a2, __m128 *a3, unsigned __int8 a4)
{
  int v4; // r12d
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 *v13; // rax
  __m128 v14; // xmm7
  int v15; // eax
  __m128 v16; // xmm6
  __int64 v17; // rax
  float v18; // xmm8_4
  float v19; // xmm9_4
  double v20; // xmm6_8
  int v21; // ecx
  int v22; // eax
  __int64 *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rsi
  float v26; // xmm1_4
  __int64 v27; // rax
  __m128 v28; // xmm2
  __int64 v29; // rax
  char v30; // cl
  __int64 v31; // rax
  float v32; // xmm4_4
  int v33; // xmm3_4
  float v34; // xmm2_4
  __int64 v35; // r8
  __int64 v36; // rdx
  signed __int32 v37; // eax
  signed __int32 v38; // ett
  __int128 v39; // xmm0
  __m128 v40; // xmm1
  __m128 v41; // xmm2
  __m128 v42; // xmm3
  __m128 *v43; // rax
  __int64 v44; // rsi
  __m128 *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rcx
  __int64 result; // rax
  _QWORD v51[2]; // [rsp+30h] [rbp-3D8h] BYREF
  double v52; // [rsp+40h] [rbp-3C8h]
  float v53[4]; // [rsp+48h] [rbp-3C0h]
  unsigned __int64 v54; // [rsp+58h] [rbp-3B0h]
  unsigned __int64 v55; // [rsp+60h] [rbp-3A8h]
  __int128 v56; // [rsp+68h] [rbp-3A0h] BYREF
  __int64 v57; // [rsp+80h] [rbp-388h] BYREF
  int v58; // [rsp+88h] [rbp-380h]
  int v59; // [rsp+8Ch] [rbp-37Ch]
  __int128 v60; // [rsp+90h] [rbp-378h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-368h] BYREF
  _QWORD v62[2]; // [rsp+A8h] [rbp-360h] BYREF
  _QWORD v63[2]; // [rsp+B8h] [rbp-350h] BYREF
  _QWORD v64[2]; // [rsp+C8h] [rbp-340h] BYREF
  _QWORD v65[2]; // [rsp+D8h] [rbp-330h] BYREF
  _QWORD v66[2]; // [rsp+E8h] [rbp-320h] BYREF
  __int64 v67; // [rsp+F8h] [rbp-310h] BYREF
  char v68; // [rsp+100h] [rbp-308h]
  int v69; // [rsp+108h] [rbp-300h] BYREF
  __int128 v70; // [rsp+10Ch] [rbp-2FCh]
  int v71; // [rsp+11Ch] [rbp-2ECh]
  __int128 v72; // [rsp+120h] [rbp-2E8h]
  int v73; // [rsp+130h] [rbp-2D8h]
  int v74; // [rsp+134h] [rbp-2D4h]
  float v75; // [rsp+138h] [rbp-2D0h]
  int v76; // [rsp+13Ch] [rbp-2CCh]
  float v77; // [rsp+140h] [rbp-2C8h]
  int v78; // [rsp+144h] [rbp-2C4h]
  float v79; // [rsp+148h] [rbp-2C0h] BYREF
  __int128 v80; // [rsp+14Ch] [rbp-2BCh]
  float v81; // [rsp+15Ch] [rbp-2ACh]
  __int128 v82; // [rsp+160h] [rbp-2A8h]
  int v83; // [rsp+170h] [rbp-298h]
  int v84; // [rsp+174h] [rbp-294h]
  float v85; // [rsp+178h] [rbp-290h]
  float v86; // [rsp+17Ch] [rbp-28Ch]
  int v87; // [rsp+180h] [rbp-288h]
  int v88; // [rsp+184h] [rbp-284h]
  __int128 v89; // [rsp+190h] [rbp-278h] BYREF
  __int128 v90; // [rsp+1A0h] [rbp-268h] BYREF
  _BYTE v91[64]; // [rsp+1B0h] [rbp-258h] BYREF
  __m128 v92; // [rsp+1F0h] [rbp-218h] BYREF
  __m128 v93; // [rsp+200h] [rbp-208h]
  __m128 v94; // [rsp+210h] [rbp-1F8h]
  __m128 v95; // [rsp+220h] [rbp-1E8h]
  __m128 v96[4]; // [rsp+230h] [rbp-1D8h] BYREF
  __m128 v97[4]; // [rsp+270h] [rbp-198h] BYREF
  _BYTE v98[16]; // [rsp+2B0h] [rbp-158h] BYREF
  __int64 v99[4]; // [rsp+2C0h] [rbp-148h] BYREF
  _BYTE v100[64]; // [rsp+2E0h] [rbp-128h] BYREF
  _OWORD v101[4]; // [rsp+320h] [rbp-E8h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+360h] [rbp-A8h] BYREF

  v4 = a4;
  try
  {
    sub_18001895C(&v61);
    v9 = *(_QWORD *)(a2 + 24);
    if ( v9 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v9 + 8), 1u);
      v9 = *(_QWORD *)(a2 + 24);
    }
    v10 = *(_QWORD *)(a2 + 16);
    v11 = v10;
    v62[0] = v10;
    v62[1] = v9;
    v12 = *(_QWORD *)(a1 + 40);
    v56 = 0LL;
    if ( v9 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v9 + 8), 1u);
      v11 = v62[0];
    }
    *(_QWORD *)&v56 = v11;
    *((_QWORD *)&v56 + 1) = v9;
    sub_180036540(v12, v51, v8, &v56);
    sub_180011C6C(
      *(_QWORD *)(a1 + 64),
      *(_QWORD *)(a1 + 120),
      *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128),
      *(_DWORD *)(a1 + 140) - *(_DWORD *)(a1 + 132));
    sub_18002C460(v10 + 16, &v67);
    v13 = sub_1800129F4(v99, (__int64)&qword_1801F8058);
    sub_180017578(v11, v63, (__int64)v13);
    sub_1800596B4(v63[0], a2 + 48);
    sub_180010910((__int64)v63);
    v14 = (__m128)COERCE_UNSIGNED_INT((float)(*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 88LL))(*(_QWORD *)(a1 + 64)));
    v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64));
    v16 = (__m128)COERCE_UNSIGNED_INT((float)v15);
    *(float *)&v52 = (float)v15;
    HIDWORD(v52) = v14.m128_i32[0];
    *(_QWORD *)v53 = *(_QWORD *)(a1 + 144);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 280LL))(*(_QWORD *)(a1 + 64)) )
    {
      *(_BYTE *)(v51[0] + 465LL) |= 1u;
      v17 = v51[0];
      *(_QWORD *)(v51[0] + 296LL) = 0LL;
      *(_QWORD *)(v17 + 304) = 0LL;
      v18 = v53[0] - (float)*(int *)(a1 + 128);
      v19 = v53[1] - (float)*(int *)(a1 + 132);
      *(_QWORD *)&v20 = _mm_unpacklo_ps(v16, v14).m128_u64[0];
      v52 = v20;
      sub_180065994(v51[0], 0LL, *(_QWORD *)&v20, 1LL);
      v21 = *(_DWORD *)(a1 + 140) - *(_DWORD *)(a1 + 132);
      v22 = *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128);
      v57 = 0LL;
      v58 = v22;
      v59 = v21;
      sub_180065734(v51[0], &v57);
      v23 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 152LL))(*(_QWORD *)(a1 + 64));
      v24 = v23[1];
      if ( v24 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v24 + 8), 1u);
        v24 = v23[1];
        v20 = v52;
      }
      v25 = *v23;
      v66[0] = v25;
      v66[1] = v24;
      *(_DWORD *)(v25 + 448) = 8 * (v4 ^ 1);
      v26 = (float)*(int *)(a1 + 132);
      *(float *)&v54 = (float)*(int *)(a1 + 128);
      *((float *)&v54 + 1) = v26;
      v27 = *(_QWORD *)(v25 + 280);
      if ( v27 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v27 + 8), 1u);
        v27 = *(_QWORD *)(v25 + 280);
        v20 = v52;
      }
      v64[0] = *(_QWORD *)(v25 + 272);
      v64[1] = v27;
      v28 = 0LL;
      *(double *)v28.m128_u64 = v20;
      v55 = _mm_add_ps(v28, (__m128)v54).m128_u64[0];
      sub_180065994(v64[0], v54, v55, 1LL);
      sub_180010910((__int64)v64);
      v29 = *(_QWORD *)(v25 + 280);
      if ( v29 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v29 + 8), 1u);
        v29 = *(_QWORD *)(v25 + 280);
      }
      v65[0] = *(_QWORD *)(v25 + 272);
      v65[1] = v29;
      v89 = *(_OWORD *)(a1 + 128);
      sub_180065734(v65[0], &v89);
      sub_180010910((__int64)v65);
      sub_180010910((__int64)v66);
    }
    else
    {
      v30 = *(_BYTE *)(v51[0] + 465LL) | 1;
      if ( !(_BYTE)v4 )
        v30 = *(_BYTE *)(v51[0] + 465LL) & 0xFE;
      *(_BYTE *)(v51[0] + 465LL) = v30;
      v31 = v51[0];
      *(_QWORD *)(v51[0] + 296LL) = 0LL;
      *(_QWORD *)(v31 + 304) = 0LL;
      v90 = *(_OWORD *)(a1 + 128);
      sub_180065734(v51[0], &v90);
      v19 = v53[1];
      v18 = v53[0];
    }
    v32 = -*(float *)(a1 + 152);
    v33 = *(_DWORD *)(a1 + 148);
    v34 = -*(float *)(a1 + 144);
    v69 = 1065353216;
    v70 = 0LL;
    v71 = -1082130432;
    v72 = 0LL;
    v73 = 1065353216;
    v74 = 0;
    v75 = v34;
    v76 = v33;
    v77 = v32;
    v78 = 1065353216;
    v96[0] = *a3;
    v96[1] = a3[1];
    v96[2] = a3[2];
    v96[3] = a3[3];
    sub_180018EB0(v97, v96, (__m128 *)&v69);
    v35 = v51[0];
    v60 = 0LL;
    v36 = *(_QWORD *)(v51[0] + 64LL);
    if ( v36 )
    {
      v37 = *(_DWORD *)(v36 + 8);
      while ( v37 )
      {
        v38 = v37;
        v37 = _InterlockedCompareExchange((volatile signed __int32 *)(v36 + 8), v37 + 1, v37);
        if ( v38 == v37 )
        {
          v60 = *(_OWORD *)(v35 + 56);
          break;
        }
      }
    }
    *((_QWORD *)&v39 + 1) = v97[0].m128_u64[1];
    v40 = v97[1];
    v41 = v97[2];
    v42 = v97[3];
    *(_OWORD *)&v91[4] = 0LL;
    *(_OWORD *)&v91[24] = 0LL;
    *(_OWORD *)&v91[44] = 0LL;
    *(double *)&v39 = sub_18001C880(v98);
    *(_OWORD *)v91 = v39;
    *(__m128 *)&v91[16] = v40;
    *(__m128 *)&v91[32] = v41;
    *(__m128 *)&v91[48] = v42;
    sub_180042C3C(v60, v91);
    sub_180010910((__int64)&v60);
    sub_180063F5C(v51[0]);
    v79 = 2.0 / *(float *)&v52;
    v80 = 0LL;
    v81 = 2.0 / *((float *)&v52 + 1);
    v82 = 0LL;
    v83 = 1065353216;
    v84 = 0;
    v85 = (float)((float)(2.0 / *(float *)&v52) * v18) - 1.0;
    v86 = 1.0 - (float)((float)(2.0 / *((float *)&v52 + 1)) * v19);
    v87 = 0;
    v88 = 1065353216;
    v43 = (__m128 *)sub_180019728((__int64)v100, 2.0, 2.0, *(float *)(a1 + 156), *(float *)(a1 + 160));
    sub_180018EB0(&v92, v43, (__m128 *)&v79);
    v44 = v51[0];
    if ( *(_DWORD *)(v51[0] + 316LL) != 5 )
    {
      *(_DWORD *)(v51[0] + 316LL) = 5;
      sub_18006560C(v44, 2LL);
      v44 = v51[0];
      if ( *(_DWORD *)(v51[0] + 316LL) != 5 )
      {
        sub_1800113D0(v101, "Camera::SetProjectionMatrix() -- ProjectionType must be Custom for this to take effect");
        sub_18001D8E4(pExceptionObject, v101, 0LL);
        throw (Spectre::Utils::SpectreException *)pExceptionObject;
      }
    }
    v45 = (__m128 *)sub_180063D14(v44, 1LL, 2LL);
    if ( _mm_movemask_ps(_mm_cmpneq_ps(v92, *v45))
      || _mm_movemask_ps(_mm_cmpneq_ps(v93, v45[1]))
      || _mm_movemask_ps(_mm_cmpneq_ps(v94, v45[2]))
      || _mm_movemask_ps(_mm_cmpneq_ps(v95, v45[3])) )
    {
      v101[0] = v92;
      v101[1] = v93;
      v101[2] = v94;
      v101[3] = v95;
      sub_180065944(v44, 1LL, 2LL, v101);
      sub_18006560C(v49, 2LL);
    }
    if ( v68 )
      j_LanguageEnumProc(v67, v46, v47, v48);
    sub_18005EC68(*(_QWORD *)(a1 + 48), v51);
    sub_18005F5D4(*(_QWORD *)(a1 + 48));
    sub_18005F4C0(*(_QWORD *)(a1 + 48), v51);
    sub_180010910((__int64)v51);
    sub_180010910((__int64)v62);
    sub_180018B4C(&v61);
    result = 0LL;
  }
  catch ( ... )
  {
    return 2147500037LL;
  }
  return result;
}
