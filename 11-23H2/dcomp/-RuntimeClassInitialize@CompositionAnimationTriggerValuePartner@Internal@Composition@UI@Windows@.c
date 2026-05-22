/*
 * XREFs of ?RuntimeClassInitialize@CompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAUHSTRING__@@PEAUIAnimationObject@345@PEAUICompositionAnimationBase@345@@Z @ 0x180186120
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAPEAUHSTRING__@@AEAPEAUIAnimationObject@345@AEAPEAUICompositionAnimationBase@345@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAPEAUHSTRING__@@AEAPEAUIAnimationObject@567@AEAPEAUICompositionAnimationBase@567@@Z @ 0x180120130 (--$MakeAndInitialize2@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIAnimationObject@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAnimationObject@Composition@UI@Windows@@@Z @ 0x18004164C (--4-$ComPtr@UIAnimationObject@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAnimation.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18004434C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ??4?$ComPtr@UICompositionAnimationBase@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUICompositionAnimationBase@Composition@UI@Windows@@@Z @ 0x1801860C0 (--4-$ComPtr@UICompositionAnimationBase@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUI.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner::RuntimeClassInitialize(
        Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner *this,
        struct Windows::UI::Composition::Compositor *a2,
        HSTRING a3,
        struct Windows::UI::Composition::IAnimationObject *a4,
        struct Windows::UI::Composition::ICompositionAnimationBase *a5)
{
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = a3;
  Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 18, &v12);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::IAnimationObject>::operator=((__int64 *)this + 19, (__int64)a4);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionAnimationBase>::operator=(
    (__int64 *)this + 20,
    (__int64)a5);
  v8 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(this, a2);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x24,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionanimationtriggervaluepartner.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
