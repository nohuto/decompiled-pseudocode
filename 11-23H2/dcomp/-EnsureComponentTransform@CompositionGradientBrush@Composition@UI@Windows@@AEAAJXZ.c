/*
 * XREFs of ?EnsureComponentTransform@CompositionGradientBrush@Composition@UI@Windows@@AEAAJXZ @ 0x180071DA0
 * Callers:
 *     ?SetTransformMatrix@CompositionGradientBrush@Composition@UI@Windows@@QEAAJAEBUMatrix3x2@Numerics@Foundation@4@@Z @ 0x180071F68 (-SetTransformMatrix@CompositionGradientBrush@Composition@UI@Windows@@QEAAJAEBUMatrix3x2@Numerics.c)
 *     ?GetAnimatablePropertyInfo@CompositionGradientBrush@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180092964 (-GetAnimatablePropertyInfo@CompositionGradientBrush@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@.c)
 *     ?SetAnchorPoint@CompositionGradientBrush@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z @ 0x1801740CC (-SetAnchorPoint@CompositionGradientBrush@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Found.c)
 *     ?SetCenterPoint@CompositionGradientBrush@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z @ 0x18017424C (-SetCenterPoint@CompositionGradientBrush@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Found.c)
 *     ?SetOffset@CompositionGradientBrush@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z @ 0x1801743A4 (-SetOffset@CompositionGradientBrush@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation.c)
 *     ?SetRotationAngle@CompositionGradientBrush@Composition@UI@Windows@@QEAAJM@Z @ 0x180174450 (-SetRotationAngle@CompositionGradientBrush@Composition@UI@Windows@@QEAAJM@Z.c)
 *     ?SetRotationAngleInDegrees@CompositionGradientBrush@Composition@UI@Windows@@QEAAJM@Z @ 0x18017450C (-SetRotationAngleInDegrees@CompositionGradientBrush@Composition@UI@Windows@@QEAAJM@Z.c)
 *     ?SetScale@CompositionGradientBrush@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z @ 0x1801745D8 (-SetScale@CompositionGradientBrush@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@.c)
 * Callees:
 *     ??4?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800062F0 (--4-$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@AE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ??$MakeAndInitialize2@VComponentTransform2D@Composition@UI@Windows@@V1234@PEAVCompositionGradientBrush@234@@Details@WRL2@Microsoft@@YAJPEAPEAVComponentTransform2D@Composition@UI@Windows@@$$QEAPEAVCompositionGradientBrush@456@@Z @ 0x180071E38 (--$MakeAndInitialize2@VComponentTransform2D@Composition@UI@Windows@@V1234@PEAVCompositionGradien.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionGradientBrush::EnsureComponentTransform(
        Windows::UI::Composition::CompositionGradientBrush *this)
{
  Microsoft::WRL2::NestableRuntimeClass **v1; // rsi
  int v3; // eax
  unsigned int v4; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v7; // [rsp+30h] [rbp+8h] BYREF
  Windows::UI::Composition::CompositionGradientBrush *v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = (Microsoft::WRL2::NestableRuntimeClass **)((char *)this + 232);
  if ( *((_QWORD *)this + 29) )
    return 0LL;
  v7 = 0LL;
  v8 = this;
  v3 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ComponentTransform2D,Windows::UI::Composition::ComponentTransform2D,Windows::UI::Composition::CompositionGradientBrush *>(
         &v7,
         &v8);
  v4 = v3;
  if ( v3 >= 0 )
  {
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      3,
      *((_DWORD *)v7 + 32));
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertyAnimator>::operator=(v1, &v7);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v7);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x85,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiongradientbrush.cpp",
    (const char *)(unsigned int)v3);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v7);
  return v4;
}
