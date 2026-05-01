/*
 * XREFs of ?IsDashboardVisible@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x18017F7C4
 * Callers:
 *     _lambda_50eab521f3249b7fa1c207805ae80cf1_::operator() @ 0x1801C4DA0 (_lambda_50eab521f3249b7fa1c207805ae80cf1_--operator().c)
 *     _lambda_702b059237f471f0f2abb9216d2aed5e_::operator() @ 0x1801C5044 (_lambda_702b059237f471f0f2abb9216d2aed5e_--operator().c)
 * Callees:
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F9DD8 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Visibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AW4ViewVisibility@Shell@UI@WindowsUdk@3@XZ @ 0x18017F81C (-Visibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::IsDashboardVisible(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  char v1; // bl
  char *v2; // rdi
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  v1 = 1;
  v2 = (char *)this + 136;
  if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 17, &v4)
    || (unsigned int)winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::Visibility(v2) )
  {
    return 0;
  }
  return v1;
}
