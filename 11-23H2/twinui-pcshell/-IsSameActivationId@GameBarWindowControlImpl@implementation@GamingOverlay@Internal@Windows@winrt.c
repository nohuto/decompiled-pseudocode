/*
 * XREFs of ?IsSameActivationId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_N_K@Z @ 0x18040FFDC
 * Callers:
 *     ?GetWindow@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAUIGameBarWindowControl@GamingOverlay@Internal@Windows@@@Z @ 0x1803FFEA0 (-GetWindow@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAUIGameBarWindowControl@GamingOverlay@Int.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ActivationId@?$consume_Windows_Internal_Shell_Desktop_ViewManagerInterop_IViewWrapperDesktopExtension@UIViewWrapperDesktopExtension@ViewManagerInterop@Desktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18040F400 (-ActivationId@-$consume_Windows_Internal_Shell_Desktop_ViewManagerInterop_IViewWrapperDesktopExt.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameActivationId(
        winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *this,
        __int64 a2)
{
  __int64 v3; // rax
  void (__fastcall ***v4)(_QWORD, void *, __int64 *); // rcx
  __int64 v5; // rbx
  bool v6; // di
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 )
  {
    v4 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*((_QWORD *)this + 3);
    if ( v4 )
    {
      v11 = 0LL;
      (**v4)(
        v4,
        &winrt::impl::guid_v<winrt::Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapperDesktopExtension>,
        &v11);
      v5 = v11;
      v3 = v11;
    }
    else
    {
      v5 = 0LL;
      v3 = 0LL;
    }
    v10 = v5;
    if ( v3 )
    {
      try
      {
        v6 = winrt::impl::consume_Windows_Internal_Shell_Desktop_ViewManagerInterop_IViewWrapperDesktopExtension<winrt::Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapperDesktopExtension>::ActivationId(&v10) == a2;
        if ( v5 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
        LOBYTE(v3) = v6;
      }
      catch ( ... )
      {
        LOBYTE(v3) = (unsigned int)wil::details::in1diag3::Return_CaughtException(
                                     retaddr,
                                     (void *)0xE5,
                                     (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
                                     v7) != 0;
      }
    }
  }
  else
  {
    LOBYTE(v3) = 0;
  }
  return v3;
}
