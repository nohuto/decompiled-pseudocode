/*
 * XREFs of ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801D6064
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800591B8 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x1800AEA10 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ??_ECColorSpaceLayer@@UEAAPEAXI@Z @ 0x1801D2C30 (--_ECColorSpaceLayer@@UEAAPEAXI@Z.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEBAJPEAUMilPointAndSizeL@@@Z @ 0x1801D302C (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEBAJPEAUMilPointAndSizeL@@@Z.c)
 *     ?Create@CColorSpaceLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x1801F2FFC (-Create@CColorSpaceLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@P.c)
 */

__int64 __fastcall CDrawingContext::PushColorSpaceLayer(
        struct IDeviceTarget **this,
        const struct CVisual *a2,
        enum DXGI_COLOR_SPACE_TYPE a3)
{
  CColorSpaceLayer *v4; // rdi
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  _BYTE v15[40]; // [rsp+30h] [rbp-28h] BYREF
  struct CLayer *v16; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0LL;
  v16 = 0LL;
  v7 = CDrawingContext::ComputeExternalLayerOffsetAndBounds((CDrawingContext *)this, (struct MilPointAndSizeL *)v15);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xE40u, 0LL);
  }
  else
  {
    v10 = CColorSpaceLayer::Create(this[4], (const struct MilPointAndSizeL *)v15, a3, &v16);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xE45u, 0LL);
      v4 = v16;
    }
    else
    {
      v4 = v16;
      v12 = CDrawingContext::PushLayer((CDrawingContext *)this, a2, v16, 1, 1);
      v9 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xE4Bu, 0LL);
      else
        v4 = 0LL;
    }
  }
  if ( v4 )
    CColorSpaceLayer::`vector deleting destructor'(v4, 1);
  return v9;
}
