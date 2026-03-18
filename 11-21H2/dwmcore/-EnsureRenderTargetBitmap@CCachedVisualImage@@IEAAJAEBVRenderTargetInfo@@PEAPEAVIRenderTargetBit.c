/*
 * XREFs of ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18005C500
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x18003D270 (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 *     ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18005C440 (-GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetD2DBitmap@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1801FE860 (-GetD2DBitmap@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801FE998 (-GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap.c)
 * Callees:
 *     ?erase@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18001A384 (-erase@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 *     ?FindExistingCachedTarget@CCachedVisualImage@@IEBAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z @ 0x180059058 (-FindExistingCachedTarget@CCachedVisualImage@@IEBAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18005C920 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ??4?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTargetBitmap@@@Z @ 0x18005D034 (--4-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTar.c)
 *     ?CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x18005D0B4 (-CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTa.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x18005D2B8 (--$_Emplace_reallocate@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCach.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z @ 0x18005D3E4 (-RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?clear@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x1800E8E3C (-clear@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 *     ??1CCachedTarget@CCachedVisualImage@@QEAA@XZ @ 0x1800EA088 (--1CCachedTarget@CCachedVisualImage@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::EnsureRenderTargetBitmap(
        struct D2D_SIZE_U *this,
        const struct RenderTargetInfo *a2,
        struct IRenderTargetBitmap **a3)
{
  struct IRenderTargetBitmap **v3; // r13
  unsigned int v6; // edi
  float v7; // xmm0_4
  UINT32 width; // edi
  struct CCachedVisualImage::CCachedTarget **v9; // rcx
  float *v10; // rax
  float v11; // xmm1_4
  float v12; // xmm2_4
  float height; // xmm3_4
  struct D2D_SIZE_U *v14; // r15
  CCachedVisualImage::CCachedTarget **v15; // rbx
  UINT32 v16; // r12d
  CCachedVisualImage::CCachedTarget **v17; // rbx
  struct D2D_SIZE_U v18; // rdi
  void (__fastcall ***v19)(_QWORD, _DWORD *); // rax
  int v20; // eax
  CCachedVisualImage::CCachedTarget *v21; // rbx
  int v22; // eax
  unsigned int v23; // ecx
  struct IRenderTargetBitmap *v24; // r8
  __int64 v25; // rcx
  CCachedVisualImage::CCachedTarget *v27; // r13
  int (__fastcall ***v28)(_QWORD); // rcx
  void (__fastcall ***v29)(_QWORD, CCachedVisualImage::CCachedTarget **); // rcx
  int v30; // eax
  unsigned int v31; // ecx
  CCachedVisualImage::CCachedTarget *v32; // rbx
  int v33; // eax
  unsigned int v34; // ecx
  CCachedVisualImage::CCachedTarget **v35; // rdx
  CCachedVisualImage::CCachedTarget *v36; // rbx
  struct CCachedVisualImage::CCachedTarget *ExistingCachedTarget; // rax
  unsigned int v38; // [rsp+28h] [rbp-59h]
  CCachedVisualImage::CCachedTarget *v39; // [rsp+38h] [rbp-49h] BYREF
  struct IRenderTargetBitmap **v40; // [rsp+40h] [rbp-41h]
  struct IRenderTargetBitmap *v41; // [rsp+48h] [rbp-39h] BYREF
  struct D2D_SIZE_U v42; // [rsp+50h] [rbp-31h] BYREF
  _DWORD v43[2]; // [rsp+58h] [rbp-29h] BYREF
  int v44; // [rsp+60h] [rbp-21h]
  float v45; // [rsp+68h] [rbp-19h]
  char v46; // [rsp+6Ch] [rbp-15h]
  CCachedVisualImage::CCachedTarget **v47; // [rsp+70h] [rbp-11h] BYREF
  __int128 v48; // [rsp+78h] [rbp-9h]

  v40 = a3;
  *a3 = 0LL;
  v3 = a3;
  v6 = 0;
  v41 = 0LL;
  if ( this[19].width )
  {
    v6 = -2147467263;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147467263, 0x391u, 0LL);
    return v6;
  }
  ++CCachedVisualImage::s_CVIEnsureBitmapCount;
  if ( BYTE1(this[222].width) )
  {
    CCachedVisualImage::RemoveInvalidTargets((CCachedVisualImage *)this, this[221]);
    ExistingCachedTarget = CCachedVisualImage::FindExistingCachedTarget((CCachedVisualImage *)this, a2);
    if ( ExistingCachedTarget
      || (v9 = (struct CCachedVisualImage::CCachedTarget **)this[24], (__int64)(*(_QWORD *)&this[25] - (_QWORD)v9) >> 3)
      && (ExistingCachedTarget = *v9) != 0LL )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(
        &v41,
        *((_QWORD *)ExistingCachedTarget + 1));
      goto LABEL_24;
    }
    v38 = 937;
LABEL_55:
    v6 = -2003304309;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v9, 0LL, 0, -2003304309, v38, 0LL);
    return v6;
  }
  (**(void (__fastcall ***)(char *, struct D2D_SIZE_U *))&this[9])((char *)&this[9], &v42);
  v7 = 0.0;
  v48 = 0LL;
  if ( !*(_QWORD *)&this[18] || (width = v42.width) == 0 || (LODWORD(v9) = v42.height) == 0 )
  {
    std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::clear(&this[24]);
    v38 = 950;
    goto LABEL_55;
  }
  if ( BYTE2(this[222].width) )
  {
    v11 = 0.0;
    height = (float)(int)v42.height;
    v12 = (float)(int)v42.width;
  }
  else
  {
    v10 = (float *)this[14];
    if ( v10 )
    {
      v7 = v10[17];
      v12 = v10[18];
      height = v10[19];
      v11 = v10[16];
    }
    else
    {
      v11 = *(float *)&this[12].width;
      v7 = *(float *)&this[12].height;
      v12 = *(float *)&this[13].width;
      height = *(float *)&this[13].height;
    }
  }
  *(_QWORD *)&v48 = __PAIR64__(LODWORD(v7), LODWORD(v11));
  *((_QWORD *)&v48 + 1) = __PAIR64__(LODWORD(height), LODWORD(v12));
  if ( v12 <= v11 || height <= v7 )
  {
    v38 = 974;
    goto LABEL_55;
  }
  v14 = this + 24;
  v15 = (CCachedVisualImage::CCachedTarget **)this[24];
  v39 = (CCachedVisualImage::CCachedTarget *)v42;
  v16 = v42.height;
  while ( v15 != (CCachedVisualImage::CCachedTarget **)this[25] )
  {
    v27 = *v15;
    v28 = (int (__fastcall ***)(_QWORD))(*((_QWORD *)*v15 + 1)
                                       + 8LL
                                       + *(int *)(*(_QWORD *)(*((_QWORD *)*v15 + 1) + 8LL) + 8LL));
    if ( (**v28)(v28) >= 0
      && (v29 = (void (__fastcall ***)(_QWORD, CCachedVisualImage::CCachedTarget **))(*((_QWORD *)v27 + 1)
                                                                                    + 8LL
                                                                                    + *(int *)(*(_QWORD *)(*((_QWORD *)v27 + 1) + 8LL)
                                                                                             + 16LL)),
          (**v29)(v29, &v39),
          v39 == (CCachedVisualImage::CCachedTarget *)__PAIR64__(v16, width)) )
    {
      ++v15;
    }
    else
    {
      v15 = *std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::erase((__int64)&this[24], &v47, v15);
    }
  }
  v17 = (CCachedVisualImage::CCachedTarget **)*v14;
  v18 = this[25];
  if ( *v14 == v18 )
  {
LABEL_29:
    v39 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      v19 = (void (__fastcall ***)(_QWORD, _DWORD *))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*v17 + 1) + 64LL))(*((_QWORD *)*v17 + 1));
      (**v19)(v19, v43);
      if ( v43[0] == *(_DWORD *)a2 && v43[1] == *((_DWORD *)a2 + 1) )
      {
        v20 = *((_DWORD *)a2 + 2);
        if ( (v44 == DisplayId::None || v44 == v20 || v20 == DisplayId::All)
          && (v45 != 0.0) == (*((float *)a2 + 4) != 0.0)
          && v46 == *((_BYTE *)a2 + 20) )
        {
          break;
        }
      }
      if ( ++v17 == *(CCachedVisualImage::CCachedTarget ***)&v18 )
        goto LABEL_29;
    }
    v21 = *v17;
    v39 = v21;
    if ( v21 )
    {
      v22 = CCachedVisualImage::CCachedTarget::Update(v21);
      v6 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x3D8u, 0LL);
        return v6;
      }
      v24 = (struct IRenderTargetBitmap *)*((_QWORD *)v21 + 1);
      v41 = v24;
      if ( v24 )
      {
        v25 = (__int64)v24 + *(int *)(*((_QWORD *)v24 + 1) + 4LL) + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
      }
      goto LABEL_23;
    }
  }
  v30 = CCachedVisualImage::CreateCachedTarget((CCachedVisualImage *)this, v42, a2, &v39);
  v6 = v30;
  if ( v30 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x3E2u, 0LL);
    return v6;
  }
  v32 = v39;
  v33 = CCachedVisualImage::CCachedTarget::Update(v39);
  v6 = v33;
  if ( v33 >= 0 )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v41, *((_QWORD *)v32 + 1));
    v35 = (CCachedVisualImage::CCachedTarget **)this[25];
    if ( v35 == (CCachedVisualImage::CCachedTarget **)this[26] )
    {
      std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::_Emplace_reallocate<std::unique_ptr<CCachedVisualImage::CCachedTarget>>(
        &this[24],
        v35,
        &v39);
      v36 = v39;
      if ( v39 )
      {
        CCachedVisualImage::CCachedTarget::~CCachedTarget(v39);
        operator delete(v36, 0x40uLL);
      }
    }
    else
    {
      *v35 = v32;
      *(_QWORD *)&this[25] += 8LL;
    }
LABEL_23:
    v3 = v40;
LABEL_24:
    *v3 = v41;
    return v6;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x3E8u, 0LL);
  if ( v32 )
  {
    CCachedVisualImage::CCachedTarget::~CCachedTarget(v32);
    operator delete(v32, 0x40uLL);
  }
  return v6;
}
