/*
 * XREFs of ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1807421B4
 * Callers:
 *     ?_LoadImmersiveIcon@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAPEAUHBITMAP__@@PEAUIconData2@1@@Z @ 0x180745D94 (-_LoadImmersiveIcon@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAPEAUHBITMAP__@@PEAUIconData2@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800C29A0 (--I-$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UIApplicationRes.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_CreatePropertyBagBindCtx@PEBG@@YAJPEAUIBindCtx@@PEBG1PEAPEAU0@@Z @ 0x18074148C (--$_CreatePropertyBagBindCtx@PEBG@@YAJPEAUIBindCtx@@PEBG1PEAPEAU0@@Z.c)
 *     _lambda_0a485157c2c67738ecfb2b6d756fa5a5_::operator() @ 0x1807417A0 (_lambda_0a485157c2c67738ecfb2b6d756fa5a5_--operator().c)
 *     ?AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z @ 0x1807418C4 (-AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z.c)
 *     ?CalculateColorLuminosity@@YANK@Z @ 0x180741CC8 (-CalculateColorLuminosity@@YANK@Z.c)
 *     ?GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1807441A8 (-GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z @ 0x180744D78 (-PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18074512C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles@@@details@wil@@Q.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarSuggestions@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180745234 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarSuggestions@@@details@wil@@QEAAX_N.c)
 *     ?TryGetDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@_N1PEAKPEA_N@Z @ 0x180799F20 (-TryGetDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@_N1PEAKPEA_N@Z.c)
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
  LONG cx; // r13d
  LONG v9; // ebx
  LONG v10; // edi
  struct tagSIZE *v11; // r15
  const WCHAR *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  void *v15; // r8
  int v16; // eax
  unsigned int v17; // esi
  __int64 v18; // rdx
  __int64 *v19; // rsi
  const struct _GUID *v20; // rcx
  int ThreadThumbnailCache; // eax
  LONG v22; // eax
  bool v23; // zf
  LONG cy; // eax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rdx
  int v28; // edi
  HBITMAP v29; // rdx
  bool v30; // r8
  double v31; // xmm6_8
  double v32; // xmm0_8
  HGDIOBJ v33; // rcx
  HBITMAP v34; // rbx
  HGDIOBJ v35; // rcx
  __int64 v36; // r9
  HBITMAP v37; // rbx
  HGDIOBJ v38; // rcx
  DWORD SysColor; // eax
  HGDIOBJ v40; // rcx
  bool *v42; // [rsp+20h] [rbp-50h]
  HGDIOBJ ho; // [rsp+30h] [rbp-40h] BYREF
  void *v44; // [rsp+38h] [rbp-38h] BYREF
  IBindCtx *pbc; // [rsp+40h] [rbp-30h] BYREF
  __int64 v46; // [rsp+48h] [rbp-28h] BYREF
  __int64 *v47[2]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  ImmersiveIcons *v49; // [rsp+B0h] [rbp+40h] BYREF
  struct tagSIZE v50; // [rsp+B8h] [rbp+48h] BYREF
  struct tagSIZE v51; // [rsp+C0h] [rbp+50h] BYREF

  v51 = a3;
  v50 = a2;
  v49 = this;
  cx = a4.cx;
  v9 = a3.cx;
  v10 = a2.cx;
  v11 = a8;
  *a8 = 0LL;
  v46 = 0LL;
  pbc = 0LL;
  LOBYTE(a2.cx) = 1;
  ((void (__fastcall *)(_QWORD, _QWORD))wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarSuggestions>::ReportUsage)(
    &`wil::Feature<__WilFeatureTraits_Feature_TaskbarSuggestions>::GetImpl'::`2'::impl,
    a2);
  v12 = a6;
  if ( *PathFindExtensionW(a6 + 8)
    || (Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&pbc),
        v16 = _CreatePropertyBagBindCtx<unsigned short const *>(v14, v13, v15, &pbc),
        v17 = v16,
        v16 >= 0) )
  {
    v19 = (__int64 *)*Microsoft::WRL::ComPtr<IApplicationResolver>::operator&((__int64)&v46, &a8);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v19);
    v16 = SHCreateItemFromParsingName(v12 + 8, pbc, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, (void **)v19);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = 508LL;
      goto LABEL_6;
    }
    v44 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v44);
    ThreadThumbnailCache = GetThreadThumbnailCache(v20, &v44);
    v17 = ThreadThumbnailCache;
    if ( ThreadThumbnailCache < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FF,
        (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)ThreadThumbnailCache);
LABEL_45:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v44);
      goto LABEL_46;
    }
    v22 = v9;
    v23 = *(_DWORD *)v12 == 1;
    if ( *(_DWORD *)v12 != 1 )
      v22 = v10;
    LODWORD(a8) = v22;
    cy = v50.cy;
    if ( v23 )
      cy = v51.cy;
    HIDWORD(a8) = cy;
    v47[0] = (__int64 *)&v44;
    v47[1] = &v46;
    ho = 0LL;
    v25 = lambda_0a485157c2c67738ecfb2b6d756fa5a5_::operator()(v47, (unsigned int)a8, (__int64)&a7, (__int64)&ho);
    v17 = v25;
    if ( v25 < 0 )
    {
      v27 = 527LL;
LABEL_41:
      v36 = (unsigned int)v25;
      goto LABEL_42;
    }
    v28 = *(_DWORD *)v12;
    LOBYTE(v26) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles>::GetImpl'::`2'::impl,
      v26);
    if ( *(_DWORD *)v12 == 3 )
    {
      if ( !TryGetDominantColorFromHBITMAP((HBITMAP)ho, (bool)v29, v30, (unsigned int *)&a8, v42)
        || (v31 = CalculateColorLuminosity(cx),
            v32 = CalculateColorLuminosity((int)a8),
            (fmax(v31, v32) + 0.05) / (fmin(v31, v32) + 0.05) < 2.5) )
      {
        v33 = ho;
        ho = 0LL;
        if ( v33 )
          DeleteObject(v33);
        v25 = lambda_0a485157c2c67738ecfb2b6d756fa5a5_::operator()(v47, v9, (__int64)&a7, (__int64)&ho);
        v17 = v25;
        if ( v25 < 0 )
        {
          v27 = 538LL;
          goto LABEL_41;
        }
        goto LABEL_31;
      }
    }
    else if ( v28 != 2 )
    {
LABEL_31:
      if ( (_DWORD)a7 != 2 )
        goto LABEL_49;
      v37 = GDIHelpers::PremultiplyAlphaChannel((GDIHelpers *)ho, v29, v30);
      v38 = ho;
      ho = 0LL;
      if ( v38 )
        DeleteObject(v38);
      ho = v37;
      if ( v37 )
      {
LABEL_49:
        if ( *((_BYTE *)v12 + 8) )
          SysColor = GetSysColor(5);
        else
          SysColor = *((_DWORD *)v12 + 3);
        LODWORD(a8) = SysColor;
        v25 = GDIHelpers::AddBackgroundForIcon(ho, (int *)&a8, (LONG *)&v49, &v50, &v51, v11);
        v17 = v25;
        if ( v25 >= 0 )
          goto LABEL_43;
        v27 = 575LL;
        goto LABEL_41;
      }
      v17 = -2147024882;
      v36 = 2147942414LL;
      v27 = 561LL;
LABEL_42:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v27,
        (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)v36);
LABEL_43:
      v40 = ho;
      ho = 0LL;
      if ( v40 )
        DeleteObject(v40);
      goto LABEL_45;
    }
    if ( a5 && (_DWORD)a7 == 2 )
    {
      v34 = GDIHelpers::PremultiplyAlphaChannel((GDIHelpers *)ho, v29, v30);
      v35 = ho;
      ho = 0LL;
      if ( v35 )
        DeleteObject(v35);
      ho = v34;
      if ( !v34 )
      {
        v17 = -2147024882;
        v36 = 2147942414LL;
        v27 = 549LL;
        goto LABEL_42;
      }
    }
    else
    {
      v34 = (HBITMAP)ho;
    }
    ho = 0LL;
    *v11 = (struct tagSIZE)v34;
    v17 = 0;
    goto LABEL_43;
  }
  v18 = 505LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
    (const char *)(unsigned int)v16);
LABEL_46:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&pbc);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v46);
  return v17;
}
