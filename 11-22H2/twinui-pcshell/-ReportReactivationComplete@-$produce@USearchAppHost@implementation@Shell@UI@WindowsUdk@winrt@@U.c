/*
 * XREFs of ?ReportReactivationComplete@?$produce@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost2@3456@@impl@winrt@@UEAAHXZ @ 0x18046A070
 * Callers:
 *     <none>
 * Callees:
 *     ??$?R$$T$$T@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEB$$T0@Z @ 0x18047E564 (--$-R$$T$$T@-$event@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost2>::ReportReactivationComplete(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 + 48;
  if ( !a1 )
    v2 = 72LL;
  try
  {
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>::operator()<std::nullptr_t,std::nullptr_t>(
      v2,
      72LL);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
