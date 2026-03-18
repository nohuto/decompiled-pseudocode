/*
 * XREFs of ?CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180203780
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE2E0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C9E90 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffect::CalcEntireInputBoundsFromInputResources(__int64 a1, __int128 *a2, __int64 a3)
{
  int v3; // eax
  int v5; // xmm6_4
  int v6; // xmm7_4
  int v7; // xmm8_4
  unsigned int v8; // r13d
  int v9; // xmm9_4
  unsigned int v10; // esi
  __int64 v11; // rcx
  int v12; // ebx
  int v13; // eax
  __int128 v14; // xmm0
  int v15; // eax
  __int64 v16; // rcx
  float *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r11
  __int64 v21; // r12
  __int64 v22; // r15
  __int64 v23; // rbx
  __int64 v24; // rcx
  char v25; // al
  _OWORD *v26; // r14
  bool v27; // zf
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r9
  unsigned int v32; // eax
  __m128i v33; // xmm0
  int v34; // eax
  unsigned int v35; // r8d
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rcx
  int v41; // esi
  __int64 v42; // rcx
  __int64 v43; // rcx
  unsigned int v44; // [rsp+28h] [rbp-E0h]
  _QWORD v45[3]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+50h] [rbp-B8h]
  __int64 v47; // [rsp+58h] [rbp-B0h]
  __int64 v48; // [rsp+60h] [rbp-A8h]
  __m256i v49; // [rsp+68h] [rbp-A0h] BYREF
  int v50; // [rsp+88h] [rbp-80h]
  __int64 v51; // [rsp+90h] [rbp-78h] BYREF
  int v52; // [rsp+98h] [rbp-70h]
  int v53; // [rsp+9Ch] [rbp-6Ch]
  _BYTE v54[20]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v55; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v56[4]; // [rsp+C8h] [rbp-40h] BYREF

  v3 = *(_DWORD *)(a1 + 32);
  v5 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v6 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
  v7 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 2);
  v8 = 0;
  v9 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 3);
  v51 = *(_QWORD *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v11 = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6u;
  v52 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 2);
  *(_DWORD *)(a1 + 32) = v11;
  v10 = 0;
  LOBYTE(v11) = (v3 ^ (v3 ^ (v3 + 2)) & 6) & 6;
  v53 = v9;
  v48 = a3;
  v49.m256i_i64[0] = (__int64)a2;
  v46 = 0LL;
  LODWORD(v47) = 0;
  *(_OWORD *)&v45[1] = 0LL;
  if ( (_BYTE)v11 != 2 )
  {
    v12 = -2147467259;
    v44 = 521;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v12, v44);
    goto LABEL_14;
  }
  v13 = *(_DWORD *)(a1 + 136);
  if ( !v13 )
  {
    v14 = *a2;
    *(_DWORD *)v54 = 0;
    *(_OWORD *)&v54[4] = v14;
    v15 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)&v45[1], 0x14u, 1, v54);
    v12 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0xC0u);
      v44 = 528;
      goto LABEL_3;
    }
    v10 = v47;
LABEL_9:
    if ( v10 )
    {
      v17 = (float *)(v45[1] + 4LL);
      do
      {
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v51, v17);
        v17 = (float *)(v18 + 20);
      }
      while ( v19 != 1 );
      v9 = v53;
      v7 = v52;
      v6 = HIDWORD(v51);
      v5 = v51;
    }
    goto LABEL_13;
  }
  v21 = *(int *)(a1 + 136);
  v12 = 0;
  if ( v13 <= 0 )
  {
LABEL_13:
    *(_DWORD *)(a1 + 144) = v5;
    *(_DWORD *)(a1 + 148) = v6;
    *(_DWORD *)(a1 + 152) = v7;
    *(_DWORD *)(a1 + 156) = v9;
    goto LABEL_14;
  }
  v22 = 0LL;
  while ( 1 )
  {
    v23 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8 * v22);
    LODWORD(v45[0]) = *(_DWORD *)(*(_QWORD *)(a1 + 120) + 4 * v22);
    v55 = *(_OWORD *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v24 = *(_QWORD *)(v23 + 24);
    if ( v24 )
    {
      v25 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 56LL))(v24, 59LL);
      v26 = *(_OWORD **)(v23 + 24);
      v27 = v25 == 0;
      v28 = *(_QWORD *)v26;
      if ( v27 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(v28 + 56))(*(_QWORD *)(v23 + 24), 40LL) )
        {
          v12 = -2147467263;
          v44 = 573;
          goto LABEL_3;
        }
        v32 = *(_DWORD *)(v23 + 12) - *(_DWORD *)(v23 + 4);
        v56[0] = 0;
        v56[1] = 0;
        v33 = _mm_cvtsi32_si128(v32);
        v34 = *(_DWORD *)(v23 + 16) - *(_DWORD *)(v23 + 8);
        v56[2] = _mm_cvtepi32_ps(v33).m128_u32[0];
        *(float *)&v56[3] = (float)v34;
        CMILMatrix::Transform2DBoundsHelper<1>(v48, (__int64)v56, (float *)&v55, v31);
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v28 + 248))(
                *(_QWORD *)(v23 + 24),
                v49.m256i_i64[0],
                v48);
        if ( v12 < 0 )
        {
          v44 = 546;
          goto LABEL_3;
        }
        v50 = 0;
        *(_DWORD *)v54 = v45[0];
        memset(&v49.m256i_u64[1], 0, 24);
        *(_OWORD *)&v54[4] = v26[9];
        v29 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)&v49.m256i_u64[1], 0x14u, 1, v54);
        v12 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0LL, v29, 0xC0u);
          MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0LL, v12, 0x226u);
          DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v49.m256i_i64[1]);
          goto LABEL_14;
        }
        (*(void (__fastcall **)(_OWORD *, unsigned __int64 *, __int128 *))(*(_QWORD *)v26 + 216LL))(
          v26,
          &v49.m256i_u64[1],
          &v55);
        DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v49.m256i_i64[1]);
      }
    }
    else
    {
      v55 = *a2;
    }
    v35 = v10 + 1;
    *(_DWORD *)v54 = v45[0];
    *(_OWORD *)&v54[4] = v55;
    if ( v10 + 1 < v10 )
      break;
    if ( v35 > v8 )
    {
      v39 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)&v45[1], 0x14u, 1, v54);
      v41 = v39;
      v12 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0LL, v39, 0xC0u);
        goto LABEL_37;
      }
      v10 = v47;
      v8 = HIDWORD(v46);
    }
    else
    {
      v36 = v45[1];
      v12 = 0;
      v37 = v10++;
      LODWORD(v47) = v35;
      v38 = 5 * v37;
      *(_OWORD *)(v45[1] + 4 * v38) = *(_OWORD *)v54;
      *(_DWORD *)(v36 + 4 * v38 + 16) = *(_DWORD *)&v54[16];
    }
    if ( ++v22 >= v21 )
      goto LABEL_9;
    a2 = (__int128 *)v49.m256i_i64[0];
  }
  v12 = -2147024362;
  v41 = -2147024362;
  MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_37:
  MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0LL, v41, 0x245u);
LABEL_14:
  *(_DWORD *)(a1 + 32) ^= (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v45[1]);
  return (unsigned int)v12;
}
