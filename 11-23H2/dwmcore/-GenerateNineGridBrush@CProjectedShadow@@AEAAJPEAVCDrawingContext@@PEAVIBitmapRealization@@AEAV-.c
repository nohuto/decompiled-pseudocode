/*
 * XREFs of ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCNineGridBrush@@@Z @ 0x18024A390
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180249354 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800047F0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetSource@CNineGridBrush@@QEAAJPEAVCBrush@@@Z @ 0x180098B28 (-SetSource@CNineGridBrush@@QEAAJPEAVCBrush@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CNineGridBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800A49A0 (--0CNineGridBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800B3520 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetInsetProperty@CNineGridBrush@@QEAAXKM@Z @ 0x1800E0978 (-SetInsetProperty@CNineGridBrush@@QEAAXKM@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F78A0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SetCanUseSurfaceTransform@CNineGridBrush@@QEAAX_N@Z @ 0x18023F684 (-SetCanUseSurfaceTransform@CNineGridBrush@@QEAAX_N@Z.c)
 *     ??4?$com_ptr_t@VCNineGridBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCNineGridBrush@@@Z @ 0x18024882C (--4-$com_ptr_t@VCNineGridBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCNineGridBrush@.c)
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z @ 0x18024A510 (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV-$.c)
 */

__int64 __fastcall CProjectedShadow::GenerateNineGridBrush(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct CResource ***a5)
{
  struct CResource ***v5; // rsi
  CNineGridBrush *v9; // rax
  __int64 v10; // rcx
  struct CResource **v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-38h]
  CNineGridBrush *v18[5]; // [rsp+30h] [rbp-28h] BYREF
  struct CBrush *v19; // [rsp+68h] [rbp+10h] BYREF

  v5 = a5;
  v18[0] = 0LL;
  v19 = 0LL;
  *a5 = 0LL;
  v9 = (CNineGridBrush *)DefaultHeap::AllocClear(0xC8uLL);
  if ( v9 )
    v9 = CNineGridBrush::CNineGridBrush(v9, *(struct CComposition **)(a1 + 16));
  wil::com_ptr_t<CNineGridBrush,wil::err_returncode_policy>::operator=((__int64 *)v18, (__int64)v9);
  v11 = (struct CResource **)v18[0];
  if ( v18[0] )
  {
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v19);
    v14 = CProjectedShadow::GenerateSurfaceBrush(a1, v13, a3, a4, &v19);
    v12 = v14;
    if ( v14 < 0 )
    {
      v17 = 1206;
    }
    else
    {
      v14 = CNineGridBrush::SetSource(v11, v19);
      v12 = v14;
      if ( v14 >= 0 )
      {
        CNineGridBrush::SetInsetProperty((CNineGridBrush *)v11, 0, 80.0);
        CNineGridBrush::SetInsetProperty((CNineGridBrush *)v11, 8u, 80.0);
        CNineGridBrush::SetInsetProperty((CNineGridBrush *)v11, 5u, 80.0);
        CNineGridBrush::SetInsetProperty((CNineGridBrush *)v11, 3u, 80.0);
        CNineGridBrush::SetCanUseSurfaceTransform((CNineGridBrush *)v11);
        v18[0] = 0LL;
        *v5 = v11;
        goto LABEL_11;
      }
      v17 = 1208;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, v17, 0LL);
    goto LABEL_11;
  }
  v12 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x4B1u, 0LL);
LABEL_11:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v18);
  return v12;
}
