/*
 * XREFs of ??1CVirtualTouchpadExperienceManager@@UEAA@XZ @ 0x18037C8F4
 * Callers:
 *     ??_ECVirtualTouchpadExperienceManager@@UEAAPEAXI@Z @ 0x18037CEB0 (--_ECVirtualTouchpadExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x180069558 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800E4540 (--1-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x18012D6A4 (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18037C8CC (--1-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-$int.c)
 *     ??1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ @ 0x18037C988 (--1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ.c)
 */

void __fastcall CVirtualTouchpadExperienceManager::~CVirtualTouchpadExperienceManager(
        CVirtualTouchpadExperienceManager *this)
{
  struct wil::details::wnf_subscription_state_base *v2; // rdx
  volatile int *v3; // rdx
  volatile int *v4; // rdx

  wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>((HMODULE *)this + 97);
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>(
    (wil::details **)this + 96,
    v2);
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper(
    (CVirtualTouchpadExperienceManager *)((char *)this + 728),
    v3);
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper(
    (CVirtualTouchpadExperienceManager *)((char *)this + 696),
    v4);
  TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::~TouchpadLaunched((CVirtualTouchpadExperienceManager *)((char *)this + 376));
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 43);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 42);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 41);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 34);
  CSingleViewShellExperience::~CSingleViewShellExperience((CVirtualTouchpadExperienceManager *)((char *)this + 64));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>((__int64)this);
}
