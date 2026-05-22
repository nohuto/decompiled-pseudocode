/*
 * XREFs of ?EnsureComponentTransform@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJXZ @ 0x18006E764
 * Callers:
 *     ?put_TransformMatrix@Api@?$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJUMatrix3x2@Numerics@Foundation@5@@Z @ 0x18004AE50 (-put_TransformMatrix@Api@-$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Wind.c)
 *     ?SetOffset@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z @ 0x18006E614 (-SetOffset@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@.c)
 *     ?put_Scale@Api@?$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z @ 0x18008B860 (-put_Scale@Api@-$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VComp.c)
 *     ?GetAnimatablePropertyInfo@CompositionSurfaceBrush@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180159600 (-GetAnimatablePropertyInfo@CompositionSurfaceBrush@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@.c)
 *     ?SetAnchorPoint@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z @ 0x18015989C (-SetAnchorPoint@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Founda.c)
 *     ?SetCenterPoint@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z @ 0x180159948 (-SetCenterPoint@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Founda.c)
 *     ?SetFinalValueParameter@CompositionSurfaceBrush@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180159A00 (-SetFinalValueParameter@CompositionSurfaceBrush@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEA.c)
 *     ?SetRotationAngle@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJM@Z @ 0x180159B00 (-SetRotationAngle@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJM@Z.c)
 *     ?SetRotationAngleInDegrees@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJM@Z @ 0x180159BBC (-SetRotationAngleInDegrees@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJM@Z.c)
 * Callees:
 *     ??4?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800062F0 (--4-$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@AE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ??$MakeAndInitialize2@VComponentTransform2D@Composition@UI@Windows@@V1234@PEAVCompositionSurfaceBrush@234@@Details@WRL2@Microsoft@@YAJPEAPEAVComponentTransform2D@Composition@UI@Windows@@$$QEAPEAVCompositionSurfaceBrush@456@@Z @ 0x18006E6AC (--$MakeAndInitialize2@VComponentTransform2D@Composition@UI@Windows@@V1234@PEAVCompositionSurface.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSurfaceBrush::EnsureComponentTransform(
        Windows::UI::Composition::CompositionSurfaceBrush *this)
{
  Microsoft::WRL2::NestableRuntimeClass **v1; // rsi
  int v3; // eax
  unsigned int v4; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v7; // [rsp+30h] [rbp+8h] BYREF
  struct Windows::UI::Composition::CompositionObject *v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = (Microsoft::WRL2::NestableRuntimeClass **)((char *)this + 288);
  if ( *((_QWORD *)this + 36) )
    return 0LL;
  v7 = 0LL;
  v8 = this;
  v3 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ComponentTransform2D,Windows::UI::Composition::ComponentTransform2D,Windows::UI::Composition::CompositionSurfaceBrush *>(
         &v7,
         &v8);
  v4 = v3;
  if ( v3 >= 0 )
  {
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      6,
      *((_DWORD *)v7 + 32));
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertyAnimator>::operator=(v1, &v7);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v7);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x100,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsurfacebrush.cpp",
    (const char *)(unsigned int)v3);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v7);
  return v4;
}
