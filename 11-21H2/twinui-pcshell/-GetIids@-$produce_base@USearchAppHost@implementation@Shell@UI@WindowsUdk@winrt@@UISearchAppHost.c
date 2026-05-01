/*
 * XREFs of ?GetIids@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost@3456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18019EDF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost,void>::GetIids(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::WindowSnapping::implementation::GuidedSnapAssistCompletedArgs,winrt::Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs>::NonDelegatingGetIids((a1 - 16) & -(__int64)(a1 != 0));
}
