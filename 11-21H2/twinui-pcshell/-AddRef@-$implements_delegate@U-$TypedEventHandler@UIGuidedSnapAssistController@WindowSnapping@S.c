/*
 * XREFs of ?AddRef@?$implements_delegate@U?$TypedEventHandler@UIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@winrt@@UGuidedSnapAssistCompletedArgs@23456@@Foundation@Windows@winrt@@V_lambda_abb3344ab4be929b6b668a255075dc98_@@@impl@winrt@@UEAAIXZ @ 0x18003DD30
 * Callers:
 *     ?AddRef@error_info_fallback@impl@winrt@@W7EAAIXZ @ 0x1801EAD80 (-AddRef@error_info_fallback@impl@winrt@@W7EAAIXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController,winrt::Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs>,_lambda_abb3344ab4be929b6b668a255075dc98_>::AddRef(
        __int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 32));
}
