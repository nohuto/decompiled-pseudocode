/*
 * XREFs of ?EnsureComponentTransform@CompositionClip@Composition@UI@Windows@@AEAAJXZ @ 0x180072A0C
 * Callers:
 *     ?GetAnimatablePropertyInfo@CompositionClip@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180010360 (-GetAnimatablePropertyInfo@CompositionClip@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4Ani.c)
 *     ?SetTransformMatrix@CompositionClip@Composition@UI@Windows@@QEAAJAEBUMatrix3x2@Numerics@Foundation@4@@Z @ 0x180080CC8 (-SetTransformMatrix@CompositionClip@Composition@UI@Windows@@QEAAJAEBUMatrix3x2@Numerics@Foundati.c)
 *     ?put_Offset@Api@CompositionClip@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z @ 0x180093E00 (-put_Offset@Api@CompositionClip@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z.c)
 *     ?SetPropertyChangedListener@CompositionClip@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUICompositionPropertyChangedListenerPartner@234@@Z @ 0x180094590 (-SetPropertyChangedListener@CompositionClip@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSI.c)
 *     ?SetAnchorPoint@CompositionClip@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z @ 0x18015572C (-SetAnchorPoint@CompositionClip@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@.c)
 *     ?SetCenterPoint@CompositionClip@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z @ 0x1801557D8 (-SetCenterPoint@CompositionClip@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@.c)
 *     ?SetRotationAngle@CompositionClip@Composition@UI@Windows@@QEAAJM@Z @ 0x180155A68 (-SetRotationAngle@CompositionClip@Composition@UI@Windows@@QEAAJM@Z.c)
 *     ?SetRotationAngleInDegrees@CompositionClip@Composition@UI@Windows@@QEAAJM@Z @ 0x180155B24 (-SetRotationAngleInDegrees@CompositionClip@Composition@UI@Windows@@QEAAJM@Z.c)
 *     ?SetScale@CompositionClip@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z @ 0x180155BF0 (-SetScale@CompositionClip@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z.c)
 * Callees:
 *     ??4?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800062F0 (--4-$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@AE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ??$MakeAndInitialize2@VComponentTransform2D@Composition@UI@Windows@@V1234@PEAVCompositionClip@234@@Details@WRL2@Microsoft@@YAJPEAPEAVComponentTransform2D@Composition@UI@Windows@@$$QEAPEAVCompositionClip@456@@Z @ 0x180072AA4 (--$MakeAndInitialize2@VComponentTransform2D@Composition@UI@Windows@@V1234@PEAVCompositionClip@23.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionClip::EnsureComponentTransform(
        Windows::UI::Composition::CompositionClip *this)
{
  Microsoft::WRL2::NestableRuntimeClass **v1; // rsi
  int v3; // eax
  unsigned int v4; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v7; // [rsp+30h] [rbp+8h] BYREF
  Windows::UI::Composition::CompositionClip *v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = (Microsoft::WRL2::NestableRuntimeClass **)((char *)this + 160);
  if ( *((_QWORD *)this + 20) )
    return 0LL;
  v7 = 0LL;
  v8 = this;
  v3 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ComponentTransform2D,Windows::UI::Composition::ComponentTransform2D,Windows::UI::Composition::CompositionClip *>(
         &v7,
         &v8);
  v4 = v3;
  if ( v3 >= 0 )
  {
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      0,
      *((_DWORD *)v7 + 32));
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertyAnimator>::operator=(v1, &v7);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v7);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA7,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionclip.cpp",
    (const char *)(unsigned int)v3);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v7);
  return v4;
}
