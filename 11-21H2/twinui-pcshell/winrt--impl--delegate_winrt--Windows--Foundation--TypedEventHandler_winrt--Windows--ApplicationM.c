/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___lambda_7e117e86fbbf7389a420f5618d976754___::Invoke @ 0x1801C8DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z @ 0x180143304 (--0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z.c)
 *     _lambda_7e117e86fbbf7389a420f5618d976754_::operator()_winrt::Windows::Foundation::IInspectable_ @ 0x1801C163C (_lambda_7e117e86fbbf7389a420f5618d976754_--operator()_winrt--Windows--Foundation--IInspectable_.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___lambda_7e117e86fbbf7389a420f5618d976754___::Invoke(
        __int64 a1,
        __int64 a2)
{
  _DWORD **v2; // rbx
  __int64 v3; // r8
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v2 = (_DWORD **)(a1 + 8);
  winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs::ShowShellViewRequestedEventArgs(
    (winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)&v5,
    (const struct winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)&v6);
  lambda_7e117e86fbbf7389a420f5618d976754_::operator()_winrt::Windows::Foundation::IInspectable_(
    v2,
    (winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v5,
    v3);
  return 0LL;
}
