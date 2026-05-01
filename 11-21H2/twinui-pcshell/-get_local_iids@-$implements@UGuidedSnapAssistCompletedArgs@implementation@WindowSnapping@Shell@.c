/*
 * XREFs of ?get_local_iids@?$implements@UGuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@U134567@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x180186590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::WindowSnapping::implementation::GuidedSnapAssistCompletedArgs,winrt::Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 1;
  *(_QWORD *)(a2 + 8) = &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs>>::value;
  return a2;
}
