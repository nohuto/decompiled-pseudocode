/*
 * XREFs of ?PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1801D7D5C
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800672D0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z @ 0x180010890 (-Pop@-$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z.c)
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x1800B3208 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBackfaceVisibility@@@Z @ 0x1801B0FAC (-Pop@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBackfaceVis.c)
 *     ?Pop@?$CWatermarkStack@_N$0EA@$01$09@@QEAA_NPEA_N@Z @ 0x1801D5B58 (-Pop@-$CWatermarkStack@_N$0EA@$01$09@@QEAA_NPEA_N@Z.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapBorderMode@@@Z @ 0x1801D7D14 (-Pop@-$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapBorderM.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1801D7D2C (-Pop@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmap.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilCompositingMode@@@Z @ 0x1801D7D44 (-Pop@-$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilCompositingMod.c)
 */

void __fastcall CBspPreComputeHelper::PopStacksForBspChildVisual(CBspPreComputeHelper *this, const struct CVisual *a2)
{
  CVisual *v2; // r11
  int *v3; // r10
  __int64 v4; // r11
  int v5; // eax

  v2 = a2;
  if ( (*((_BYTE *)a2 + 101) & 0x20) != 0 )
    CWatermarkStack<bool,64,2,10>::Pop((int *)this + 72);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(CVisual::GetOpacityInternal(v2) - 1.0) & _xmm) >= 0.0000011920929 )
    CWatermarkStack<float,64,2,10>::Pop(v3 + 64);
  if ( (*(_BYTE *)(v4 + 104) & 0x10) != 0 )
    CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Pop(v3 + 56);
  if ( (*(_BYTE *)(v4 + 104) & 8) != 0 )
    CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop(v3 + 48);
  if ( (*(_BYTE *)(v4 + 104) & 2) != 0 )
    CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Pop(v3 + 40);
  if ( (*(_BYTE *)(v4 + 104) & 0x40) != 0 )
    CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Pop(v3 + 32);
  v5 = v3[24];
  if ( v5 )
    v3[24] = v5 - 1;
  CWatermarkStack<unsigned int,64,2,10>::Pop(v3 + 80);
}
