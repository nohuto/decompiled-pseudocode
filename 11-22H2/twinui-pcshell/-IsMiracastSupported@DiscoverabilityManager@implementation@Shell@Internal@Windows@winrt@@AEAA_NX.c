/*
 * XREFs of ?IsMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1806FB448
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync$_ResumeCoro$1 @ 0x18025CD20 (winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--InitializeAsync$_Resume.c)
 *     ?OnApplicationViewChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1806FB770 (-OnApplicationViewChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 *     ?WindowSnapStateChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1806FC390 (-WindowSnapStateChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     _Init_thread_footer @ 0x1801C9108 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801C9170 (_Init_thread_header.c)
 *     ?QueryMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x18025D3D4 (-QueryMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverability_Bugfix@@@details@wil@@QEAA_NXZ @ 0x18025D628 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverability_Bugfix@@@deta.c)
 *     winrt::Windows::Internal::Shell::implementation::IsMiracastSupportedByWlanStack @ 0x1806FB500 (winrt--Windows--Internal--Shell--implementation--IsMiracastSupportedByWlanStack.c)
 *     QueryMiracastDisplayDeviceSupport @ 0x1806FCFA4 (QueryMiracastDisplayDeviceSupport.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::IsMiracastSupported(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *this)
{
  bool v1; // bl
  winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *v3; // rcx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_CastDiscoverability_Bugfix>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_CastDiscoverability_Bugfix>::GetImpl'::`2'::impl) )
  {
    if ( dword_180990204 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                     + 16LL) )
    {
      Init_thread_header(&dword_180990204);
      if ( dword_180990204 == -1 )
      {
        if ( winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::QueryMiracastSupported(v3) )
          v1 = (unsigned __int8)winrt::Windows::Internal::Shell::implementation::IsMiracastSupportedByWlanStack() != 0;
        byte_18098D8F1 = v1;
        Init_thread_footer(&dword_180990204);
      }
    }
    return byte_18098D8F1;
  }
  else
  {
    if ( (int)QueryMiracastDisplayDeviceSupport(v4) >= 0 )
      return (unsigned __int8)winrt::Windows::Internal::Shell::implementation::IsMiracastSupportedByWlanStack() != 0;
    return v1;
  }
}
