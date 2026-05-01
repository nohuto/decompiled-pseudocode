/*
 * XREFs of ?perform_delayed_initialization@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x18019DAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveChat@@@details@wil@@QEAA_NXZ @ 0x180098788 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveChat@@@details@wil@@QEAA_NX.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MainKey_ChatCompliance@@@details@wil@@QEAA_NXZ @ 0x180098904 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MainKey_ChatCompliance@@@details@.c)
 *     ?PerformPostDesktopReadyInitialization@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x180254E60 (-PerformPostDesktopReadyInitialization@MeetAndChatManager@implementation@Shell@Internal@Windows@.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::perform_delayed_initialization(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *this)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveChat>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_RemoveChat>::GetImpl'::`2'::impl)
    && !wil::details::FeatureImpl<__WilFeatureTraits_Feature_MainKey_ChatCompliance>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_MainKey_ChatCompliance>::GetImpl'::`2'::impl) )
  {
    winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization(
      (char *)this - 16,
      &v2);
  }
}
