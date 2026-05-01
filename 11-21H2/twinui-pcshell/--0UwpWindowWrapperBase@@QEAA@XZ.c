/*
 * XREFs of ??0UwpWindowWrapperBase@@QEAA@XZ @ 0x180403D6C
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x180403AAC (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VUwpWindowWrapperBase@@UILegacyViewWra.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VUwpWindowWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1804050F4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VUwpWindowWrapperBase@@UIUAPViewWrappe.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180082710 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIFocusNavigateEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FFD90 (--0-$EventSource@U-$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Wi.c)
 */

UwpWindowWrapperBase *__fastcall UwpWindowWrapperBase::UwpWindowWrapperBase(UwpWindowWrapperBase *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *((_QWORD *)this + 2) = &Microsoft::WRL::ChainInterfaces<IUwpWindowWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IWindowWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((UwpWindowWrapperBase *)((char *)this + 64));
  *(_QWORD *)this = &UwpWindowWrapperBase::`vftable';
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 1) = &UwpWindowWrapperBase::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewWrapper'};
  *((_QWORD *)this + 2) = &UwpWindowWrapperBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::ChainInterfaces<IUwpWindowWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IWindowWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 3) = &UwpWindowWrapperBase::`vftable'{for `Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride'};
  *((_QWORD *)this + 4) = &UwpWindowWrapperBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 5) = &UwpWindowWrapperBase::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IClientWindowState'};
  *((_QWORD *)this + 6) = &UwpWindowWrapperBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 7) = &UwpWindowWrapperBase::`vftable'{for `IFramedViewWrapper'};
  *((_QWORD *)this + 8) = &CopyToViewValueSetBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((RTL_SRWLOCK *)this + 18);
  *((_WORD *)this + 84) = 0;
  *((_DWORD *)this + 43) = 0;
  *((_BYTE *)this + 176) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 56) = 0;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = SHTaskPoolGetUniqueContext(v2);
  *(_QWORD *)((char *)this + 244) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *(_QWORD *)((char *)this + 252) = 0LL;
  *((_DWORD *)this + 72) = 0;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_DWORD *)this + 90) = 1;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_BYTE *)this + 376) = 0;
  *(_QWORD *)((char *)this + 380) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_DWORD *)this + 114) = 1;
  *((_DWORD *)this + 118) = 1;
  *((_DWORD *)this + 119) = 1;
  *(_QWORD *)((char *)this + 460) = 6LL;
  *((_DWORD *)this + 117) = 0x10000;
  *((_OWORD *)this + 30) = 0LL;
  *((_BYTE *)this + 496) = 0;
  *((_DWORD *)this + 125) = 0;
  *(_OWORD *)((char *)this + 504) = 0LL;
  *(_OWORD *)((char *)this + 520) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_DWORD *)this + 136) = 0;
  *((_QWORD *)this + 69) = 0LL;
  *((_DWORD *)this + 140) = SHTaskPoolGetUniqueContext(v3);
  *((_WORD *)this + 282) = 0;
  *((_BYTE *)this + 566) = 0;
  return this;
}
