/*
 * XREFs of ?GetItemDataWritePointer@CDataStreamWriter@@QEAAJIPEAPEAX@Z @ 0x18004459C
 * Callers:
 *     ?GdiSpriteBitmapDirtyRectangles@CChannel@@UEAAJIPEBUtagRECT@@I@Z @ 0x18001F8D0 (-GdiSpriteBitmapDirtyRectangles@CChannel@@UEAAJIPEBUtagRECT@@I@Z.c)
 *     ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z @ 0x180040430 (-RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180043D44 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NHPEBUMilRectF@@1I@Z @ 0x1800EC8D0 (-AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NHPEBUMilRectF@@1I@Z.c)
 *     ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x1800EF450 (-AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z.c)
 *     ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@IHH@Z @ 0x1800F00D0 (-RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@IHH@Z.c)
 *     ?InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x1800F7A10 (-InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42I.c)
 *     ?AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z @ 0x1801CE7D0 (-AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x1801CF4B0 (-Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0W4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x1801CF810 (-LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0W4Enum@MilColorInterpolati.c)
 *     ?MeshGeometry2DUpdate@CChannel@@UEAAJIHPEBUMilPoint3F@@PEBUMilPoint2D@@IPEBII@Z @ 0x1801D0060 (-MeshGeometry2DUpdate@CChannel@@UEAAJIHPEBUMilPoint3F@@PEBUMilPoint2D@@IPEBII@Z.c)
 *     ?Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x1801D0CB0 (-Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x1801D0DF0 (-TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?VisualGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x1801D10E0 (-VisualGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 * Callees:
 *     ?IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z @ 0x180044720 (-IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDataStreamWriter::GetItemDataWritePointer(CDataStreamWriter *this, unsigned int a2, void **a3)
{
  CDataStreamWriter *v4; // rbx
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // edi

  v4 = this;
  if ( (*((_QWORD *)this + 6) || *((_DWORD *)this + 14))
    && a2
    && (this = (CDataStreamWriter *)*((_QWORD *)this + 4), *((_DWORD *)this + 4) - *((_DWORD *)this + 5) >= a2) )
  {
    *a3 = (char *)this + *((unsigned int *)this + 5) + 24;
    v5 = CDataStreamWriter::IncreaseWrittenByteCount(v4, a2);
    v7 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xD8u, 0LL);
    else
      *((_DWORD *)v4 + 14) += a2;
  }
  else
  {
    v7 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147418113, 0xD1u, 0LL);
  }
  return v7;
}
