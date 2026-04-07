/*
 * XREFs of ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCRectResourceProxy@@AEBUtagRECT@@@Z @ 0x1800B2368
 * Callers:
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x1800B2F78 (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800EB88C (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18000DF0C (--$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@.c)
 *     ??$CreateProxy@VCRectResourceProxy@@@CCompositor@@IEAAJPEAPEAVCRectResourceProxy@@@Z @ 0x18000E6F0 (--$CreateProxy@VCRectResourceProxy@@@CCompositor@@IEAAJPEAPEAVCRectResourceProxy@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x18001B0D4 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrus.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x1800B37D0 (-_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopThumbnailCVI::CreateBrush(
        CDesktopThumbnailCVI *this,
        struct CImageLegacyMilBrushProxy **a2,
        struct CCachedVisualImageProxy **a3,
        struct CRectResourceProxy **a4,
        const struct tagRECT *a5)
{
  __int64 v9; // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rbx
  int v14; // r10d
  int v15; // r8d
  float v16; // xmm2_4
  int v17; // r9d
  float v18; // xmm3_4
  int v19; // eax
  int v20; // eax
  CBaseObject *v21; // rax
  CBaseObject *v22; // rax
  __int64 v23; // rax
  __int64 v25; // [rsp+50h] [rbp-41h]
  CBaseObject *v26; // [rsp+70h] [rbp-21h] BYREF
  CBaseObject *v27; // [rsp+78h] [rbp-19h] BYREF
  __int128 v28; // [rsp+80h] [rbp-11h] BYREF
  __int128 v29; // [rsp+90h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+57h]

  v27 = 0LL;
  v26 = 0LL;
  if ( a4 )
  {
    v9 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5);
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v26);
    v10 = CCompositor::CreateProxy<CRectResourceProxy>(v9, &v26);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 661LL;
LABEL_28:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_38;
    }
  }
  v10 = CDesktopThumbnailCVI::_EnsureResources(this);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 664LL;
    goto LABEL_28;
  }
  v13 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v27);
  v10 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(v13, &v27);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 667LL;
    goto LABEL_28;
  }
  v29 = _xmm;
  if ( a4 )
  {
    v14 = 0;
    v28 = 0LL;
  }
  else
  {
    v14 = 1;
    v15 = *((_DWORD *)this + 10) - *((_DWORD *)this + 8);
    if ( (float)v15 == 0.0 )
      v16 = 0.0;
    else
      v16 = (float)((a5->left - *((_DWORD *)this + 8)) / v15);
    *(float *)&v28 = v16;
    v17 = *((_DWORD *)this + 11) - *((_DWORD *)this + 9);
    if ( (float)v17 == 0.0 )
      v18 = 0.0;
    else
      v18 = (float)((a5->top - *((_DWORD *)this + 9)) / v17);
    *((float *)&v28 + 1) = v18;
    if ( (float)v15 == 0.0 )
    {
      DWORD2(v28) = 0;
    }
    else
    {
      v19 = 0;
      if ( a5->right - a5->left >= 0 )
        v19 = a5->right - a5->left;
      *((float *)&v28 + 2) = (float)(v19 / v15) + v16;
    }
    if ( (float)v17 == 0.0 )
    {
      HIDWORD(v28) = 0;
    }
    else
    {
      v20 = 0;
      if ( a5->bottom - a5->top >= 0 )
        v20 = a5->bottom - a5->top;
      *((float *)&v28 + 3) = (float)(v20 / v17) + v18;
    }
  }
  v10 = CImageLegacyMilBrushProxy::Update(
          (__int64)v27,
          (unsigned __int64)v26 & ((unsigned __int128)-(__int128)(unsigned __int64)a4 >> 64),
          (__int64)&v29,
          (__int64)&v28,
          0LL,
          1u,
          v14,
          0LL,
          (unsigned __int64)v26 & ((unsigned __int128)-(__int128)(unsigned __int64)a4 >> 64),
          1,
          v25,
          0,
          0,
          *((_QWORD *)this + 3));
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 708LL;
    goto LABEL_28;
  }
  if ( a4 )
  {
    v21 = v26;
    *a4 = v26;
    if ( v21 )
      _InterlockedIncrement((volatile signed __int32 *)v21 + 2);
  }
  v22 = v27;
  *a2 = v27;
  if ( v22 )
    _InterlockedIncrement((volatile signed __int32 *)v22 + 2);
  if ( a3 )
  {
    *a3 = (struct CCachedVisualImageProxy *)*((_QWORD *)this + 3);
    v23 = *((_QWORD *)this + 3);
    if ( v23 )
      _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
  }
  v11 = 0;
LABEL_38:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v27);
  return v11;
}
