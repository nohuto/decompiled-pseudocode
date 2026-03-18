/*
 * XREFs of ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@V?$span@_N$0?0@3@@Z @ 0x180087CA0
 * Callers:
 *     ?CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x180087F90 (-CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@.c)
 * Callees:
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18003F1D8 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ??4?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResource@@@Z @ 0x180087ED0 (--4-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResourc.c)
 *     ??4?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapRealization@@@Z @ 0x180087F2C (--4-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapReal.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x1800D5AB0 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x1800FAE80 (--0SamplerMode@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CBrushRenderingEffect::CBrushRenderingEffect(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 v7; // rdi
  __int64 v8; // r14
  CDrawListBitmap *v9; // rbp
  __int64 v10; // r15
  SamplerMode *v11; // rbp
  _QWORD *v12; // rcx
  unsigned __int64 v13; // rdi
  __int64 v14; // rbp
  _BYTE *v15; // r12
  __int64 v16; // rsi
  _QWORD *v17; // r14
  gsl::details *v18; // rcx
  __int128 v19; // xmm0
  __m128 v20; // xmm2
  __m128 v21; // xmm3
  float v22; // xmm1_4
  float v24[18]; // [rsp+20h] [rbp-48h]
  __int64 v25; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 *v26; // [rsp+88h] [rbp+20h]

  v26 = a4;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CBrushRenderingEffect::`vftable';
  *(_QWORD *)(a1 + 16) = 0LL;
  v7 = 4LL;
  v8 = 4LL;
  v9 = (CDrawListBitmap *)(a1 + 24);
  do
  {
    CDrawListBitmap::CDrawListBitmap(v9);
    v9 = (CDrawListBitmap *)((char *)v9 + 24);
    --v8;
  }
  while ( v8 );
  v10 = a1 + 120;
  v11 = (SamplerMode *)(a1 + 120);
  do
  {
    SamplerMode::SamplerMode(v11);
    v11 = (SamplerMode *)((char *)v11 + 3);
    --v7;
  }
  while ( v7 );
  v12 = *(_QWORD **)(a1 + 16);
  if ( v12 != a2 )
  {
    if ( a2 )
    {
      (**(void (__fastcall ***)(_QWORD))*a2)(*a2);
      v12 = *(_QWORD **)(a1 + 16);
    }
    *(_QWORD *)(a1 + 16) = a2;
    if ( v12 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 8LL))(*v12);
  }
  v13 = 0LL;
  if ( *a3 )
  {
    v14 = a1 + 132;
    v15 = (_BYTE *)(a1 + 40);
    do
    {
      v16 = *(_QWORD *)(a3[1] + 8 * v13);
      v17 = (_QWORD *)(v16 + 56);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 8LL))(v16, 2LL) )
      {
        wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::operator=(v15 - 16, *v17);
        wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::operator=(v15 - 8, *(_QWORD *)(v16 + 64));
        *v15 = *(_BYTE *)(v16 + 72);
        *(_WORD *)v10 = *(_WORD *)(v16 + 80);
        *(_BYTE *)(v10 + 2) = *(_BYTE *)(v16 + 82);
        *(_BYTE *)(a1 + v13 + 264) = *(_BYTE *)(v16 + 146);
        if ( v13 >= *v26 )
        {
          gsl::details::terminate(v18);
          JUMPOUT(0x180087EC8LL);
        }
        *(_BYTE *)(a1 + v13 + 260) = *(_BYTE *)(v13 + v26[1]);
        if ( !*(_BYTE *)(v16 + 146) && (*(_BYTE *)(v16 + 52) || *(_BYTE *)(v16 + 145)) )
          v19 = 0LL;
        else
          v19 = *(_OWORD *)(v16 + 120);
        *(_OWORD *)v14 = v19;
        CDrawListBitmap::GetSize((CDrawListBitmap *)(v16 + 56), &v25);
        v20 = 0LL;
        v21 = 0LL;
        v20.m128_f32[0] = (float)(int)v25;
        v21.m128_f32[0] = (float)SHIDWORD(v25);
        v22 = 1.0 / (float)(int)v25;
        *(_QWORD *)(v14 + 16) = _mm_unpacklo_ps(v20, v21).m128_u64[0];
        *(float *)(v14 + 24) = v22;
        *(float *)(v14 + 28) = 1.0 / v21.m128_f32[0];
      }
      else
      {
        v24[3] = *(float *)(v16 + 68);
        v24[0] = v24[3] * *(float *)v17;
        v24[1] = v24[3] * *(float *)(v16 + 60);
        v24[2] = v24[3] * *(float *)(v16 + 64);
        *(_OWORD *)v14 = *(_OWORD *)v24;
      }
      ++v13;
      v10 += 3LL;
      v15 += 24;
      v14 += 32LL;
    }
    while ( v13 < *a3 );
  }
  return a1;
}
