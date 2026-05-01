/*
 * XREFs of ??1CortanaStoreAppExperienceManager@@EEAA@XZ @ 0x180176F20
 * Callers:
 *     ??_ECortanaStoreAppExperienceManager@@EEAAPEAXI@Z @ 0x180176EE4 (--_ECortanaStoreAppExperienceManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180142264 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x180177594 (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CortanaStoreAppExperienceManager::~CortanaStoreAppExperienceManager(
        CortanaStoreAppExperienceManager *this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  HWND v3; // rcx
  HWND v4; // rcx
  wil::details *v5; // rcx
  wil::details *v6; // rcx
  wil::details *v7; // rcx
  wil::details *v8; // rcx
  wil::details *v9; // rcx
  _QWORD *v10; // rdi
  TwinUI::Lighting::AssistantLightManager *v11; // rsi

  *(_QWORD *)this = &CortanaStoreAppExperienceManager::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>::`vftable'{for `Microsoft::WRL::Details::Selector<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>>'};
  *((_QWORD *)this + 6) = &CortanaStoreAppExperienceManager::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 7) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 14) = &CortanaStoreAppExperienceManager::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>>'};
  *((_QWORD *)this + 15) = &CortanaStoreAppExperienceManager::`vftable'{for `ICortanaStoreAppExperienceManager'};
  *((_QWORD *)this + 16) = &CortanaStoreAppExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>'};
  *((_QWORD *)this + 17) = &CortanaStoreAppExperienceManager::`vftable'{for `IInputHostLayoutChanges'};
  *((_QWORD *)this + 18) = &CortanaStoreAppExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IPrivilegedOperationsConsumer>'};
  v3 = (HWND)*((_QWORD *)this + 49);
  if ( v3 )
    DestroyWindow(v3);
  v4 = (HWND)*((_QWORD *)this + 48);
  if ( v4 )
    DestroyWindow(v4);
  v5 = (wil::details *)*((_QWORD *)this + 47);
  if ( v5 )
    wil::details::delete_wnf_subscription_state(v5, a2);
  v6 = (wil::details *)*((_QWORD *)this + 46);
  if ( v6 )
    wil::details::delete_wnf_subscription_state(v6, a2);
  v7 = (wil::details *)*((_QWORD *)this + 45);
  if ( v7 )
    wil::details::delete_wnf_subscription_state(v7, a2);
  v8 = (wil::details *)*((_QWORD *)this + 44);
  if ( v8 )
    wil::details::delete_wnf_subscription_state(v8, a2);
  v9 = (wil::details *)*((_QWORD *)this + 43);
  if ( v9 )
    wil::details::delete_wnf_subscription_state(v9, a2);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 41);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 37);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 36);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)this + 35);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 34);
  v10 = (_QWORD *)*((_QWORD *)this + 31);
  *((_QWORD *)this + 31) = 0LL;
  if ( v10 )
  {
    v11 = (TwinUI::Lighting::AssistantLightManager *)v10[1];
    v10[1] = 0LL;
    if ( v11 )
    {
      TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(v11);
      operator delete(v11, 0x70uLL);
    }
    operator delete(v10, 0x10uLL);
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 30);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 29);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 27);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>(this);
}
