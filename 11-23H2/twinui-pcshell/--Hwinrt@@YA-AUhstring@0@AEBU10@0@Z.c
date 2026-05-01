/*
 * XREFs of ??Hwinrt@@YA?AUhstring@0@AEBU10@0@Z @ 0x1800B54E0
 * Callers:
 *     ?IsRemoteDesktopProviderApp@RemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@@Z @ 0x1800B522C (-IsRemoteDesktopProviderApp@RemoteDesktopProviderPackageUninstallHandler@implementation@Shell@In.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1800B7C8C (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     _lambda_b77cff33db7c166167279fbdb5843ce7_::operator() @ 0x1800D63E0 (_lambda_b77cff33db7c166167279fbdb5843ce7_--operator().c)
 *     ?RecoverRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801ADAC0 (-RecoverRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@00@Z @ 0x180705B84 (-DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6.c)
 *     ?EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@000@Z @ 0x180705DAC (-EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@.c)
 *     ?IsValidRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@@Z @ 0x180706F84 (-IsValidRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEB.c)
 *     ?CreateCorrelationIdForSwitch@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@U76@@Z @ 0x18070FBE4 (-CreateCorrelationIdForSwitch@Utils@implementation@Shell@Internal@Windows@winrt@@SA-AUhstring@6@.c)
 *     ?CreateFileMappingName@FileMappingHelpers@Util@@QEAA?AUhstring@winrt@@QEAUHWND__@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEBU34@@Z @ 0x18070FF08 (-CreateFileMappingName@FileMappingHelpers@Util@@QEAA-AUhstring@winrt@@QEAUHWND__@@AEBV-$basic_st.c)
 *     ?LaunchBootToCloudAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x1807146CC (-LaunchBootToCloudAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winr.c)
 *     ?LaunchForSwitchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180714D9C (-LaunchForSwitchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@.c)
 *     ?LaunchRemoteSystemSettingsAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x1807155FC (-LaunchRemoteSystemSettingsAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Win.c)
 * Callees:
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800B5528 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?concat_hstring@impl@winrt@@YA?AUhstring@2@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x1800B5630 (-concat_hstring@impl@winrt@@YA-AUhstring@2@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@.c)
 */

__int64 __fastcall winrt::operator+(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // r9
  _BYTE v7[16]; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v8[32]; // [rsp+38h] [rbp-20h] BYREF

  winrt::hstring::operator std::basic_string_view<unsigned short>(a3, v7, a3, a2);
  winrt::hstring::operator std::basic_string_view<unsigned short>(v5, v8, v4, v5);
  winrt::impl::concat_hstring(a1, v8, v7);
  return a1;
}
