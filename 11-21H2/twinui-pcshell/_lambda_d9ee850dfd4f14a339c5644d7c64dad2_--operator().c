/*
 * XREFs of _lambda_d9ee850dfd4f14a339c5644d7c64dad2_::operator() @ 0x1801C57C0
 * Callers:
 *     wistd::__function::__func__lambda_d9ee850dfd4f14a339c5644d7c64dad2__long___cdecl(void)_::operator() @ 0x1801C5A10 (wistd--__function--__func__lambda_d9ee850dfd4f14a339c5644d7c64dad2__long___cdecl(void)_--operato.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUDashboardExtension@Dashboard@3UI@WindowsUdk@6@XZ @ 0x18011E834 (-EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@A.c)
 *     ??0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z @ 0x180143304 (--0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_d9ee850dfd4f14a339c5644d7c64dad2_::operator()(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *v4; // rbx
  __int64 v5; // rcx
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  char v10; // [rsp+38h] [rbp+10h] BYREF
  winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *v11; // [rsp+40h] [rbp+18h]

  v2 = *(_QWORD *)a1;
  try
  {
    winrt::Windows::Internal::Shell::implementation::DashboardManager::EnsureDashboardExtensionCreated(
      v2,
      (winrt::Windows::Foundation::IUnknown *)&v9);
    if ( v9 && (v3 = *(_QWORD *)(a1 + 8), *(_QWORD *)(v3 + 56)) )
    {
      v4 = winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs::ShowShellViewRequestedEventArgs(
             (winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)&v10,
             (const struct winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)&v9);
      v11 = v4;
      v5 = *(_QWORD *)(v3 + 56);
      if ( !v5 )
        std::_Xbad_function_call();
      (*(void (__fastcall **)(__int64, winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *))(*(_QWORD *)v5 + 16LL))(
        v5,
        v4);
      winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2(v4);
    }
    else
    {
      **(_DWORD **)(a1 + 16) = -2147023728;
    }
    winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x588,
                           (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
                           v6);
  }
  return result;
}
