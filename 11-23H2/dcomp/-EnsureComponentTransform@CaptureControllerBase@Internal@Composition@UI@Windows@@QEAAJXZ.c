/*
 * XREFs of ?EnsureComponentTransform@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJXZ @ 0x18018A02C
 * Callers:
 *     ?SetAnchorPoint@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@5@@Z @ 0x18018A270 (-SetAnchorPoint@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics.c)
 *     ?SetCenterPoint@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@5@@Z @ 0x18018A31C (-SetCenterPoint@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics.c)
 *     ?SetOffset@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@5@@Z @ 0x18018A564 (-SetOffset@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foun.c)
 *     ?SetRotationAngle@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJM@Z @ 0x18018A690 (-SetRotationAngle@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJM@Z.c)
 *     ?SetRotationAngleInDegrees@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJM@Z @ 0x18018A74C (-SetRotationAngleInDegrees@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJM@Z.c)
 *     ?SetScale@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@5@@Z @ 0x18018A818 (-SetScale@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Found.c)
 *     ?SetTransformMatrix@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJAEBUMatrix3x2@Numerics@Foundation@5@@Z @ 0x18018A8C4 (-SetTransformMatrix@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJAEBUMatrix3x2@Nu.c)
 * Callees:
 *     ??4?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800062F0 (--4-$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@AE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ??$MakeAndInitialize2@VComponentTransform2D@Composition@UI@Windows@@V1234@PEAVCaptureControllerBase@Internal@234@@Details@WRL2@Microsoft@@YAJPEAPEAVComponentTransform2D@Composition@UI@Windows@@$$QEAPEAVCaptureControllerBase@Internal@456@@Z @ 0x180189F5C (--$MakeAndInitialize2@VComponentTransform2D@Composition@UI@Windows@@V1234@PEAVCaptureControllerB.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CaptureControllerBase::EnsureComponentTransform(
        Windows::UI::Composition::Internal::CaptureControllerBase *this)
{
  Microsoft::WRL2::NestableRuntimeClass **v1; // rsi
  int v3; // eax
  unsigned int v4; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v7; // [rsp+30h] [rbp+8h] BYREF
  struct Windows::UI::Composition::Compositor **v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = (Microsoft::WRL2::NestableRuntimeClass **)((char *)this + 176);
  if ( !*((_QWORD *)this + 22) )
  {
    v7 = 0LL;
    v8 = (struct Windows::UI::Composition::Compositor **)this;
    v3 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ComponentTransform2D,Windows::UI::Composition::ComponentTransform2D,Windows::UI::Composition::Internal::CaptureControllerBase *>(
           &v7,
           &v8);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEF,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcapturecontrollerbase.cpp",
        (const char *)(unsigned int)v3);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v7);
      return v4;
    }
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      4,
      *((_DWORD *)v7 + 32));
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertyAnimator>::operator=(v1, &v7);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v7);
  }
  return 0LL;
}
