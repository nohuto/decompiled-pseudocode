/*
 * XREFs of ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1805EB238
 * Callers:
 *     ?_LoadImmersiveIcon@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAPEAUHBITMAP__@@PEAUIconData2@1@@Z @ 0x1805EF4F4 (-_LoadImmersiveIcon@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAPEAUHBITMAP__@@PEAUIconData2@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800406B0 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@@Details@12@XZ @ 0x18008F050 (--I-$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UIApplicationRes.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_CreatePropertyBagBindCtx@PEBG@@YAJPEAUIBindCtx@@PEBG1PEAPEAU0@@Z @ 0x1805EA254 (--$_CreatePropertyBagBindCtx@PEBG@@YAJPEAUIBindCtx@@PEBG1PEAPEAU0@@Z.c)
 *     _lambda_0a485157c2c67738ecfb2b6d756fa5a5_::operator() @ 0x1805EA56C (_lambda_0a485157c2c67738ecfb2b6d756fa5a5_--operator().c)
 *     ?AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z @ 0x1805EA8C8 (-AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z.c)
 *     ?CalculateColorLuminosity@@YANK@Z @ 0x1805EACCC (-CalculateColorLuminosity@@YANK@Z.c)
 *     ?GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1805ED704 (-GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z @ 0x1805EE438 (-PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805EE8F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles@@@details@wil@@Q.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarSuggestions@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805EE9FC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarSuggestions@@@details@wil@@QEAAX_N.c)
 *     ?TryGetDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@_N1PEAKPEA_N@Z @ 0x18061B670 (-TryGetDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@_N1PEAKPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ImmersiveIcons::CreateIconBitmap(
        ImmersiveIcons *this,
        struct tagSIZE a2,
        struct tagSIZE a3,
        struct tagSIZE a4,
        char a5,
        const WCHAR *a6,
        const struct ImmersiveIcons::IconData2 *a7,
        struct tagSIZE *a8)
{
  LONG cx; // r12d
  LONG v9; // ebx
  struct tagSIZE *v10; // r14
  const WCHAR *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  void *v14; // r8
  int v15; // eax
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int64 *v18; // rdi
  const struct _GUID *v19; // rcx
  int ThreadThumbnailCache; // eax
  struct tagSIZE *v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // edi
  HBITMAP v26; // rdx
  bool v27; // r8
  double v28; // xmm6_8
  double v29; // xmm0_8
  HGDIOBJ v30; // rcx
  HBITMAP v31; // rbx
  HGDIOBJ v32; // rcx
  __int64 v33; // r9
  HBITMAP v34; // rbx
  HGDIOBJ v35; // rcx
  DWORD SysColor; // eax
  HGDIOBJ v37; // rcx
  bool *v39; // [rsp+20h] [rbp-50h]
  HGDIOBJ ho; // [rsp+30h] [rbp-40h] BYREF
  void *v41; // [rsp+38h] [rbp-38h] BYREF
  IBindCtx *pbc; // [rsp+40h] [rbp-30h] BYREF
  __int64 v43; // [rsp+48h] [rbp-28h] BYREF
  __int64 *v44[2]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  ImmersiveIcons *v46; // [rsp+B0h] [rbp+40h] BYREF
  struct tagSIZE v47; // [rsp+B8h] [rbp+48h] BYREF
  struct tagSIZE v48; // [rsp+C0h] [rbp+50h] BYREF

  v48 = a3;
  v47 = a2;
  v46 = this;
  cx = a4.cx;
  v9 = a3.cx;
  v10 = a8;
  *a8 = 0LL;
  v43 = 0LL;
  pbc = 0LL;
  LOBYTE(a2.cx) = 1;
  ((void (__fastcall *)(_QWORD, _QWORD))wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarSuggestions>::ReportUsage)(
    &`wil::Feature<__WilFeatureTraits_Feature_TaskbarSuggestions>::GetImpl'::`2'::impl,
    a2);
  v11 = a6;
  if ( *PathFindExtensionW(a6 + 8)
    || (Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&pbc),
        v15 = _CreatePropertyBagBindCtx<unsigned short const *>(v13, v12, v14, &pbc),
        v16 = v15,
        v15 >= 0) )
  {
    v18 = (__int64 *)*Microsoft::WRL::ComPtr<IApplicationResolver>::operator&((__int64)&v43, &a8);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v18);
    v15 = SHCreateItemFromParsingName(v11 + 8, pbc, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, (void **)v18);
    v16 = v15;
    if ( v15 < 0 )
    {
      v17 = 508LL;
      goto LABEL_6;
    }
    v41 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v41);
    ThreadThumbnailCache = GetThreadThumbnailCache(v19, &v41);
    v16 = ThreadThumbnailCache;
    if ( ThreadThumbnailCache < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FF,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)ThreadThumbnailCache);
LABEL_43:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v41);
      goto LABEL_44;
    }
    v21 = &v48;
    if ( *(_DWORD *)v11 != 1 )
      v21 = &v47;
    a8 = (struct tagSIZE *)*v21;
    v44[0] = (__int64 *)&v41;
    v44[1] = &v43;
    ho = 0LL;
    v22 = lambda_0a485157c2c67738ecfb2b6d756fa5a5_::operator()(v44, (unsigned int)a8, (__int64)&a7, (__int64)&ho);
    v16 = v22;
    if ( v22 < 0 )
    {
      v24 = 527LL;
LABEL_39:
      v33 = (unsigned int)v22;
      goto LABEL_40;
    }
    v25 = *(_DWORD *)v11;
    LOBYTE(v23) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles>::GetImpl'::`2'::impl,
      v23);
    if ( *(_DWORD *)v11 == 3 )
    {
      if ( !TryGetDominantColorFromHBITMAP((HBITMAP)ho, (bool)v26, v27, (unsigned int *)&a8, v39)
        || (v28 = CalculateColorLuminosity(cx),
            v29 = CalculateColorLuminosity((int)a8),
            (fmax(v28, v29) + 0.05) / (fmin(v28, v29) + 0.05) < 2.5) )
      {
        v30 = ho;
        ho = 0LL;
        if ( v30 )
          DeleteObject(v30);
        v22 = lambda_0a485157c2c67738ecfb2b6d756fa5a5_::operator()(v44, v9, (__int64)&a7, (__int64)&ho);
        v16 = v22;
        if ( v22 < 0 )
        {
          v24 = 538LL;
          goto LABEL_39;
        }
        goto LABEL_29;
      }
    }
    else if ( v25 != 2 )
    {
LABEL_29:
      if ( (_DWORD)a7 != 2 )
        goto LABEL_47;
      v34 = GDIHelpers::PremultiplyAlphaChannel((GDIHelpers *)ho, v26, v27);
      v35 = ho;
      ho = 0LL;
      if ( v35 )
        DeleteObject(v35);
      ho = v34;
      if ( v34 )
      {
LABEL_47:
        if ( *((_BYTE *)v11 + 8) )
          SysColor = GetSysColor(5);
        else
          SysColor = *((_DWORD *)v11 + 3);
        LODWORD(a8) = SysColor;
        v22 = GDIHelpers::AddBackgroundForIcon(ho, (int *)&a8, (LONG *)&v46, &v47, &v48, v10);
        v16 = v22;
        if ( v22 >= 0 )
          goto LABEL_41;
        v24 = 575LL;
        goto LABEL_39;
      }
      v16 = -2147024882;
      v33 = 2147942414LL;
      v24 = 561LL;
LABEL_40:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)v33);
LABEL_41:
      v37 = ho;
      ho = 0LL;
      if ( v37 )
        DeleteObject(v37);
      goto LABEL_43;
    }
    if ( a5 && (_DWORD)a7 == 2 )
    {
      v31 = GDIHelpers::PremultiplyAlphaChannel((GDIHelpers *)ho, v26, v27);
      v32 = ho;
      ho = 0LL;
      if ( v32 )
        DeleteObject(v32);
      ho = v31;
      if ( !v31 )
      {
        v16 = -2147024882;
        v33 = 2147942414LL;
        v24 = 549LL;
        goto LABEL_40;
      }
    }
    else
    {
      v31 = (HBITMAP)ho;
    }
    ho = 0LL;
    *v10 = (struct tagSIZE)v31;
    v16 = 0;
    goto LABEL_41;
  }
  v17 = 505LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
    (const char *)(unsigned int)v15);
LABEL_44:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&pbc);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v43);
  return v16;
}
