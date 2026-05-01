/*
 * XREFs of ??1TabTipAdapter@KeyboardHosting@@UEAA@XZ @ 0x18046F41C
 * Callers:
 *     ??_GTabTipAdapter@KeyboardHosting@@UEAAPEAXI@Z @ 0x18046FC10 (--_GTabTipAdapter@KeyboardHosting@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VTabTipAdapterPolicy@KeyboardHosting@@@WRL@Microsoft@@IEAAKXZ @ 0x180177A68 (-InternalRelease@-$ComPtr@VTabTipAdapterPolicy@KeyboardHosting@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@QEAA@XZ @ 0x18046F014 (--1-$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V-$allocator@UPendingShowHide.c)
 *     ?Release@SharedMessagePortRefPtr@@QEAAXXZ @ 0x1805E4310 (-Release@SharedMessagePortRefPtr@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KeyboardHosting::TabTipAdapter::~TabTipAdapter(
        KeyboardHosting::TabTipAdapter *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  *(_QWORD *)this = &KeyboardHosting::TabTipAdapter::`vftable'{for `IMessageProxyReconnectAdapterOwner'};
  *((_QWORD *)this + 1) = &KeyboardHosting::TabTipAdapter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRemoteTabTipAdapter>'};
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  SharedMessagePortRefPtr::Release((KeyboardHosting::TabTipAdapter *)((char *)this + 120));
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 10);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 11);
  std::deque<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>::~deque<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>((void **)this + 68);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 432));
  std::wstring::_Tidy_deallocate((__int64)this + 352);
  SharedMessagePortRefPtr::Release((KeyboardHosting::TabTipAdapter *)((char *)this + 120));
  Microsoft::WRL::ComPtr<KeyboardHosting::TabTipAdapterPolicy>::InternalRelease((__int64 *)this + 14);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 13);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 11);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 10);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 3);
  *((_DWORD *)this + 5) = -1073741823;
}
