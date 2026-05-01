/*
 * XREFs of ??1TabTipAdapter@KeyboardHosting@@UEAA@XZ @ 0x1801850D8
 * Callers:
 *     ??_E?$heap_implements@UTabTipAdapter@KeyboardHosting@@@impl@winrt@@UEAAPEAXI@Z @ 0x18018509C (--_E-$heap_implements@UTabTipAdapter@KeyboardHosting@@@impl@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1801851E4 (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ??1?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@QEAA@XZ @ 0x18018524C (--1-$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V-$allocator@UPendingShowHide.c)
 *     ?Release@SharedMessagePortRefPtr@@QEAAXXZ @ 0x1801852AC (-Release@SharedMessagePortRefPtr@@QEAAXXZ.c)
 *     ?UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x180185330 (-UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KeyboardHosting::TabTipAdapter::~TabTipAdapter(KeyboardHosting::TabTipAdapter *this)
{
  struct wil::details::wnf_subscription_state_base *v2; // rdx
  wil::details::event_watcher_state *v3; // rcx
  wil::details *v4; // rcx

  *(_QWORD *)this = &winrt::impl::heap_implements<KeyboardHosting::TabTipAdapter>::`vftable'{for `winrt::impl::producer_convert<KeyboardHosting::TabTipAdapter,IMessageProxyReconnectAdapterOwner,void>'};
  *((_QWORD *)this + 1) = &KeyboardHosting::TabTipAdapter::`vftable'{for `winrt::impl::producer_convert<KeyboardHosting::TabTipAdapter,IRemoteTabTipAdapter,void>'};
  *((_QWORD *)this + 2) = &winrt::impl::heap_implements<KeyboardHosting::TabTipAdapter>::`vftable';
  KeyboardHosting::TabTipAdapter::UnInitialize(this);
  SharedMessagePortRefPtr::Release((KeyboardHosting::TabTipAdapter *)((char *)this + 136));
  v3 = (wil::details::event_watcher_state *)*((_QWORD *)this + 68);
  if ( v3 )
    wil::details::event_watcher_state::`scalar deleting destructor'(v3, (unsigned int)v2);
  v4 = (wil::details *)*((_QWORD *)this + 67);
  if ( v4 )
    wil::details::delete_wnf_subscription_state(v4, v2);
  std::deque<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>::~deque<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>((char *)this + 496);
  SharedMessagePortRefPtr::Release((KeyboardHosting::TabTipAdapter *)((char *)this + 136));
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 14);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 13);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 11);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 10);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 4);
  winrt::impl::root_implements<SnapLayoutProvider,IInspectable>::~root_implements<SnapLayoutProvider,IInspectable>((__int64)this + 16);
}
