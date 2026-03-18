/*
 * XREFs of ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800119B8
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18011BAB0 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBU.c)
 *     ?AddOcclusionInformation@CYCbCrSurface@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18021F19C (-AddOcclusionInformation@CYCbCrSurface@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180011B6C (-GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180011C54 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo.c)
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x180011D78 (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800201C4 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002731C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N1PEAV2@@Z @ 0x18003B064 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180080628 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1800CABD0 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800CAFD0 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::AddOcclusionInformation(
        CCompositionSurfaceBitmap *this,
        struct COcclusionContext *a2,
        struct D2D_SIZE_F *a3)
{
  int Bounds; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  bool v9; // di
  int v10; // r8d
  int v11; // r9d
  int CurrentRenderingRealization; // eax
  unsigned int v13; // ecx
  char *v14; // rcx
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx
  _QWORD v20[2]; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v21[64]; // [rsp+40h] [rbp-59h] BYREF
  int v22; // [rsp+80h] [rbp-19h]
  struct IBitmapRealization *v23[2]; // [rsp+90h] [rbp-9h] BYREF
  __int128 v24; // [rsp+A0h] [rbp+7h]

  *(_OWORD *)v23 = 0LL;
  Bounds = CCompositionSurfaceBitmap::GetBounds(this, a3, v23);
  v8 = Bounds;
  if ( Bounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, Bounds, 0x9Fu, 0LL);
  }
  else if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v23) )
  {
    v9 = *((_BYTE *)a2 + 1205)
      && CCompositionSurfaceBitmap::IsSwapChain((CCompositionSurfaceBitmap *)((char *)this - 224));
    if ( CCompositionSurfaceBitmap::IsOpaque((CCompositionSurfaceBitmap *)((char *)this - 152)) )
    {
      LOBYTE(v10) = v9;
      COcclusionContext::CollectRectangleForOcclusion((_DWORD)a2, (unsigned int)v23, v10, v11, 0LL);
    }
    if ( v9 )
    {
      v20[0] = 0LL;
      v22 = 0;
      v23[0] = 0LL;
      v24 = 0LL;
      CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                                      (CCompositionSurfaceBitmap *)((char *)this - 152),
                                      v23);
      v8 = CurrentRenderingRealization;
      if ( CurrentRenderingRealization < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, CurrentRenderingRealization, 0xB2u, 0LL);
      }
      else
      {
        v14 = (char *)v23[0] + *(int *)(*((_QWORD *)v23[0] + 1) + 4LL) + 8;
        v15 = (**(__int64 (__fastcall ***)(char *, GUID *, _QWORD *))v14)(
                v14,
                &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c,
                v20);
        v8 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xB4u, 0LL);
        }
        else
        {
          CCompositionSurfaceBitmap::CalcImageTransform(
            (CCompositionSurfaceBitmap *)((char *)this - 224),
            a3,
            (CMILMatrix *)v21);
          v17 = COcclusionContext::CheckAndRecordOverlayCandidate(
                  a2,
                  *((_QWORD *)a2 + 149),
                  *((_QWORD *)this - 15),
                  v21,
                  0LL,
                  0);
          v8 = v17;
          if ( v17 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xBAu, 0LL);
        }
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v20);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v23);
    }
  }
  return v8;
}
