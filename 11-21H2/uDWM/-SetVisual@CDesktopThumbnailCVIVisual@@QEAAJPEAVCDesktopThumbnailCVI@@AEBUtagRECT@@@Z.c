/*
 * XREFs of ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x1800B2F78
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x1800191B0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x180102EE0 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x1801035A0 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18000DBA0 (--$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18001D034 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180027DF8 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180045570 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCRectResourceProxy@@AEBUtagRECT@@@Z @ 0x1800B2368 (-CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualIm.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopThumbnailCVIVisual::SetVisual(
        CDesktopThumbnailCVIVisual *this,
        struct CDesktopThumbnailCVI *a2,
        const struct tagRECT *a3)
{
  volatile signed __int32 *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  int v10; // eax
  CBaseObject *v11; // rcx
  struct CBaseLegacyMilBrushProxy *v12; // rax
  struct CRectResourceProxy *v13; // rax
  CBaseObject *v14; // rcx
  struct CBaseLegacyMilBrushProxy *v16; // [rsp+30h] [rbp-10h] BYREF
  struct CRectResourceProxy *v17; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  CBaseObject *v19; // [rsp+60h] [rbp+20h] BYREF
  CBaseObject *v20; // [rsp+78h] [rbp+38h] BYREF

  v20 = 0LL;
  v16 = 0LL;
  v6 = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  CopyRect((LPRECT)((char *)this + 328), a3);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v16);
  v7 = CDesktopThumbnailCVI::CreateBrush(a2, &v16, 0LL, &v17, a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 500LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_21;
  }
  v19 = 0LL;
  v10 = CCompositor::CreateProxy<CRectangleGeometryProxy>(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
          &v19);
  v8 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F5,
      (int)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
      (const char *)(unsigned int)v10);
    v6 = (volatile signed __int32 *)v19;
    goto LABEL_21;
  }
  v11 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    CBaseObject::Release(v11);
  }
  v6 = (volatile signed __int32 *)v19;
  v7 = CDrawGeometryInstruction::Create(v16, v19, &v20);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 502LL;
    goto LABEL_11;
  }
  v7 = CRenderDataVisual::AddInstruction(this, v20);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 503LL;
    goto LABEL_11;
  }
  CVisual::SetInterpolationMode((unsigned int *)this, 1u);
  v12 = v16;
  *((_QWORD *)this + 38) = v16;
  if ( v12 )
  {
    _InterlockedAdd((volatile signed __int32 *)v12 + 2, 1u);
    v6 = (volatile signed __int32 *)v19;
  }
  *((_QWORD *)this + 36) = v6;
  if ( v6 )
  {
    _InterlockedAdd(v6 + 2, 1u);
    v6 = (volatile signed __int32 *)v19;
  }
  *((_QWORD *)this + 39) = a2;
  if ( a2 )
  {
    _InterlockedAdd((volatile signed __int32 *)a2 + 2, 1u);
    v6 = (volatile signed __int32 *)v19;
  }
  v13 = v17;
  *((_QWORD *)this + 37) = v17;
  if ( v13 )
  {
    _InterlockedAdd((volatile signed __int32 *)v13 + 2, 1u);
    v6 = (volatile signed __int32 *)v19;
  }
  v8 = 0;
LABEL_21:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v17);
  if ( v6 )
    CBaseObject::Release((CBaseObject *)v6);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v16);
  v14 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    CBaseObject::Release(v14);
  }
  return v8;
}
