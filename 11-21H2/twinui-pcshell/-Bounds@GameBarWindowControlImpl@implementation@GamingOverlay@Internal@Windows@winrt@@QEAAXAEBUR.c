/*
 * XREFs of ?Bounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXAEBURect@Foundation@56@@Z @ 0x18034196C
 * Callers:
 *     ?OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180335CC0 (-OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?ResetWindowRect@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180338590 (-ResetWindowRect@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?SetWindowRect@GamingOverlayExperienceManager@@UEAAJHHHH@Z @ 0x1803397F0 (-SetWindowRect@GamingOverlayExperienceManager@@UEAAJHHHH@Z.c)
 *     ?put_Bounds@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x180344E80 (-put_Bounds@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@wi.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?SetBounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEBURect@Foundation@56@@Z @ 0x1803434A0 (-SetBounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUw.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::Bounds(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::Foundation::Rect *a2)
{
  __int64 v4; // rdx
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  wil::AcquireSRWLockExclusive(&v5, this + 22);
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetBounds(this, v4, a2);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v5);
}
