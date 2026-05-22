/*
 * XREFs of ??0DesktopWindowTarget@Desktop@Composition@UI@Windows@@IEAA@XZ @ 0x1800852D8
 * Callers:
 *     ??$MakeAndInitialize2@VGlobalDesktopWindowTarget@Desktop@Composition@UI@Windows@@VDesktopWindowTarget@2345@AEAPEAVCompositor@345@AEAPEAUHWND__@@AEAW4_HwndTargetType@@@Details@WRL2@Microsoft@@YAJPEAPEAVDesktopWindowTarget@Desktop@Composition@UI@Windows@@AEAPEAVCompositor@567@AEAPEAUHWND__@@AEAW4_HwndTargetType@@@Z @ 0x180085020 (--$MakeAndInitialize2@VGlobalDesktopWindowTarget@Desktop@Composition@UI@Windows@@VDesktopWindowT.c)
 *     ??$MakeAndInitialize2@VGlobalInteropCompositionTarget@Composition@UI@Windows@@VInteropCompositionTarget@234@AEAPEAVCompositor@234@AEAPEAUHWND__@@AEAW4_HwndTargetType@@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropCompositionTarget@Composition@UI@Windows@@AEAPEAVCompositor@456@AEAPEAUHWND__@@AEAW4_HwndTargetType@@@Z @ 0x1800851F8 (--$MakeAndInitialize2@VGlobalInteropCompositionTarget@Composition@UI@Windows@@VInteropCompositio.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::Desktop::DesktopWindowTarget *__fastcall Windows::UI::Composition::Desktop::DesktopWindowTarget::DesktopWindowTarget(
        Windows::UI::Composition::Desktop::DesktopWindowTarget *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 16) = &Windows::UI::Composition::Desktop::DesktopWindowTarget::Partner::`vftable';
  *((_QWORD *)this + 18) = &Windows::UI::Composition::Desktop::DesktopWindowTarget::Internal::`vftable';
  *((_QWORD *)this + 20) = &Windows::UI::Composition::Desktop::DesktopWindowTarget::SystemOnly::`vftable';
  *((_QWORD *)this + 21) = &Windows::UI::Composition::Desktop::DesktopWindowTarget::SystemOnly::`vftable'{for `Windows::UI::Composition::Desktop::IDesktopWindowTarget'};
  *((_QWORD *)this + 22) = &Windows::UI::Composition::Desktop::DesktopWindowTarget::SystemOnly::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::Desktop::IDesktopWindowTargetInterop>'};
  return this;
}
