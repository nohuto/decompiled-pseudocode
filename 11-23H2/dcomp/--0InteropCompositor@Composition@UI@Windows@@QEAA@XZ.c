/*
 * XREFs of ??0InteropCompositor@Composition@UI@Windows@@QEAA@XZ @ 0x18003DC70
 * Callers:
 *     ??$MakeAndInitialize2@VInteropCompositor@Composition@UI@Windows@@V1234@AEAPEAUIUnknown@@AEAPEAUIInteropCompositorPartnerCallback@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropCompositor@Composition@UI@Windows@@AEAPEAUIUnknown@@AEAPEAUIInteropCompositorPartnerCallback@456@@Z @ 0x18003DBC4 (--$MakeAndInitialize2@VInteropCompositor@Composition@UI@Windows@@V1234@AEAPEAUIUnknown@@AEAPEAUI.c)
 *     ??$MakeAndInitialize2@VInteropDwmCompositor@Composition@UI@Windows@@V1234@AEAPEAUIUnknown@@AEAPEAUIInteropCompositorPartnerCallback@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropDwmCompositor@Composition@UI@Windows@@AEAPEAUIUnknown@@AEAPEAUIInteropCompositorPartnerCallback@456@@Z @ 0x18010DE80 (--$MakeAndInitialize2@VInteropDwmCompositor@Composition@UI@Windows@@V1234@AEAPEAUIUnknown@@AEAPE.c)
 * Callees:
 *     ??0Compositor@Composition@UI@Windows@@QEAA@XZ @ 0x18004000C (--0Compositor@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::InteropCompositor *__fastcall Windows::UI::Composition::InteropCompositor::InteropCompositor(
        Windows::UI::Composition::InteropCompositor *this)
{
  Windows::UI::Composition::Compositor::Compositor(this);
  *(_QWORD *)this = &Windows::UI::Composition::InteropCompositor::`vftable'{for `Microsoft::WRL2::ContextSession'};
  *((_QWORD *)this + 19) = &Windows::UI::Composition::Compositor::`vftable'{for `DirectComposition::IDeviceOwner'};
  *((_QWORD *)this + 150) = &Windows::UI::Composition::InteropCompositor::Api::`vftable';
  *((_QWORD *)this + 151) = &Windows::UI::Composition::InteropCompositor::Api::`vftable'{for `IDCompositionDevice3'};
  *((_QWORD *)this + 152) = &Windows::UI::Composition::InteropCompositor::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDCompositionDesktopDevicePartner6,IDCompositionDesktopDeviceRestricted,IDCompositionDeviceInternal,IDCompositionDeviceDebug,Windows::UI::Composition::IInteropCompositorPartner>'};
  *((_QWORD *)this + 153) = &Windows::UI::Composition::InteropCompositor::Api::`vftable'{for `IDCompositionDesktopDeviceRestricted'};
  *((_QWORD *)this + 154) = &Windows::UI::Composition::InteropCompositor::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDCompositionDeviceInternal,IDCompositionDeviceDebug,Windows::UI::Composition::IInteropCompositorPartner>'};
  *((_QWORD *)this + 155) = &Windows::UI::Composition::InteropCompositor::Api::`vftable'{for `IDCompositionDeviceDebug'};
  *((_QWORD *)this + 156) = &Windows::UI::Composition::InteropCompositor::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Windows::UI::Composition::IInteropCompositorPartner>'};
  *((_QWORD *)this + 158) = &Windows::UI::Composition::InteropCompositor::SystemOnly::`vftable';
  return this;
}
