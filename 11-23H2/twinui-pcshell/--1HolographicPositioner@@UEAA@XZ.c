/*
 * XREFs of ??1HolographicPositioner@@UEAA@XZ @ 0x1801914F0
 * Callers:
 *     ??_EHolographicPositioner@@UEAAPEAXI@Z @ 0x1801914B4 (--_EHolographicPositioner@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180142264 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801916B0 (--1-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     ??$_Destroy_range@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAXPEAUItem@AgileRegistrationList@@QEAU12@AEAV?$allocator@UItem@AgileRegistrationList@@@0@@Z @ 0x1801B6664 (--$_Destroy_range@V-$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAXPEAUItem@AgileRegistr.c)
 */

void __fastcall HolographicPositioner::~HolographicPositioner(HolographicPositioner *this)
{
  struct wil::details::wnf_subscription_state_base *v2; // rdx
  wil::details *v3; // rcx
  __int64 v4; // rcx

  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)this + 57);
  v3 = (wil::details *)*((_QWORD *)this + 55);
  if ( v3 )
    wil::details::delete_wnf_subscription_state(v3, v2);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 54);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)this + 53);
  v4 = *((_QWORD *)this + 47);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<AgileRegistrationList::Item>>(v4, *((_QWORD *)this + 48));
    std::_Deallocate<16,0>(
      *((void **)this + 47),
      (*((_QWORD *)this + 49) - *((_QWORD *)this + 47)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 47) = 0LL;
    *((_QWORD *)this + 48) = 0LL;
    *((_QWORD *)this + 49) = 0LL;
  }
  wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::~AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>((char *)this + 304);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 36);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 35);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 34);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 33);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 32);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 30);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 29);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 28);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 27);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInternalFullScreenHandler,IHolographicViewManager,IHolographicViewTransitionNotificationService,Windows::Internal::Shell::Holographic::IHolographicViewHostItemSource>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::ChainInterfaces<Microsoft::WRL::CloakedIid<IShellPositionerViewHandoffWithShowCommand>,Microsoft::WRL::CloakedIid<IShellPositionerViewHandoff>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::CloakedIid<IApplicationViewChangeListener>>>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInternalFullScreenHandler,IHolographicViewManager,IHolographicViewTransitionNotificationService,Windows::Internal::Shell::Holographic::IHolographicViewHostItemSource>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::ChainInterfaces<Microsoft::WRL::CloakedIid<IShellPositionerViewHandoffWithShowCommand>,Microsoft::WRL::CloakedIid<IShellPositionerViewHandoff>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::CloakedIid<IApplicationViewChangeListener>>>(this);
}
