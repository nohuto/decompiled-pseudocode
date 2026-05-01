/*
 * XREFs of ?GetTabTearOutSupportedForWindow@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAH_KPEA_N@Z @ 0x180637080
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAA_NXZ @ 0x180117BCC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAA_NXZ.c)
 *     ?GetTabTearOutSupportedIfWindowExists@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_K@Z @ 0x180637110 (-GetTabTearOutSupportedIfWindowExists@WindowTabHost@implementation@Shell@Internal@Windows@winrt@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::IWindowTabExtension>::GetTabTearOutSupportedForWindow(
        unsigned __int64 a1,
        unsigned __int64 a2,
        bool *a3)
{
  winrt::Windows::Internal::Shell::implementation::WindowTabHost *v5; // rbx
  char IsEnabled; // cl
  bool TabTearOutSupportedIfWindowExists; // al
  __int64 result; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)((a1 - 32) & ((unsigned __int128)-(__int128)a1 >> 64));
  try
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl);
    TabTearOutSupportedIfWindowExists = 0;
    if ( IsEnabled )
      TabTearOutSupportedIfWindowExists = winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetTabTearOutSupportedIfWindowExists(
                                            v5,
                                            a2);
    *a3 = TabTearOutSupportedIfWindowExists;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v9);
  }
  return result;
}
