/*
 * XREFs of ?GetWindow@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAUIGameBarWindowControl@GamingOverlay@Internal@Windows@@@Z @ 0x1803FFEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?IsWindowManagerIDKEnabledForSKU@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x180170144 (-IsWindowManagerIDKEnabledForSKU@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$as@UIGameBarWindowControl@GamingOverlay@Internal@Windows@@UGameBarWindowControlImpl@implementation@234winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIGameBarWindowControl@GamingOverlay@Internal@Windows@@@1@PEAUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@1@@Z @ 0x1802D2E1C (--$as@UIGameBarWindowControl@GamingOverlay@Internal@Windows@@UGameBarWindowControlImpl@implement.c)
 *     ?IsSameActivationId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_N_K@Z @ 0x18040FFDC (-IsSameActivationId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt.c)
 *     ?IsSameViewInstanceId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_NI@Z @ 0x1804100C0 (-IsSameViewInstanceId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@win.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GamingOverlayExperienceManager::GetWindow(
        RTL_SRWLOCK *this,
        int a2,
        struct Windows::Internal::GamingOverlay::IGameBarWindowControl **a3)
{
  RTL_SRWLOCK *v6; // rdi
  Windows::Internal::ApplicationModel::WindowManagement *v7; // rcx
  HWND v8; // rbx
  const char *v9; // r9
  unsigned __int64 PropW; // r15
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **Ptr; // rbx
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v12; // r14
  unsigned int v13; // r15d
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v14; // r14
  __int64 result; // rax
  struct Windows::Internal::GamingOverlay::IGameBarWindowControl *v16; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Windows::Internal::GamingOverlay::IGameBarWindowControl *v18; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v19; // [rsp+58h] [rbp+10h]

  v6 = this + 156;
  AcquireSRWLockShared(this + 156);
  v19 = v6;
  v8 = (HWND)~a2;
  try
  {
    if ( Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagerIDKEnabledForSKU(v7) )
    {
      PropW = (unsigned int)GetPropW(v8, L"Microsoft.Windows.WindowFactory.ActivationId");
      Ptr = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this[157].Ptr;
      v12 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this[158].Ptr;
      while ( Ptr != v12
           && !winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameActivationId(
                 *Ptr,
                 PropW) )
        ++Ptr;
    }
    else
    {
      v13 = (unsigned int)GetPropW(v8, L"Microsoft.Windows.WindowFactory.ViewId");
      Ptr = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this[157].Ptr;
      v14 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this[158].Ptr;
      while ( Ptr != v14
           && !winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameViewInstanceId(
                 *Ptr,
                 v13) )
        ++Ptr;
    }
    if ( Ptr == this[158].Ptr )
    {
      if ( v6 )
        ReleaseSRWLockShared(v6);
      result = 2147943568LL;
    }
    else
    {
      winrt::impl::as<Windows::Internal::GamingOverlay::IGameBarWindowControl,winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,0>(
        &v18,
        (__int64)*Ptr);
      v16 = v18;
      if ( v18 )
        (*(void (__fastcall **)(struct Windows::Internal::GamingOverlay::IGameBarWindowControl *))(*(_QWORD *)v18 + 8LL))(v18);
      *a3 = v16;
      if ( v16 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v18);
      if ( v6 )
        ReleaseSRWLockShared(v6);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD02,
                           (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                           v9);
  }
  return result;
}
