/*
 * XREFs of ?GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z @ 0x180706530
 * Callers:
 *     ??0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18008A48C (--0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?RecoverRemoteSessionsData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x18008CE7C (-RecoverRemoteSessionsData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@w.c)
 *     ??0RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180113570 (--0RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CopyCorrelationIdForBootUserSession@Utils@implementation@Shell@Internal@Windows@winrt@@SAXXZ @ 0x1802774F4 (-CopyCorrelationIdForBootUserSession@Utils@implementation@Shell@Internal@Windows@winrt@@SAXXZ.c)
 *     ?HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180277CEC (-HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXX.c)
 *     ?OnProcessDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@56@AEBI@Z @ 0x18027BE20 (-OnProcessDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     _lambda_5dd99ac34d6bd03dd8b88786cad3764c_::operator() @ 0x1802841E4 (_lambda_5dd99ac34d6bd03dd8b88786cad3764c_--operator().c)
 *     ?GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AUUri@Foundation@56@AEBURemoteDesktopProviderInfo@3456@W4Mode@CloudPCHelpers@@@Z @ 0x180712008 (-GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU.c)
 *     ?LaunchBootToCloudAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x1807146CC (-LaunchBootToCloudAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winr.c)
 *     ?PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBW4RemoteDesktopLocalAction@3456@@Z @ 0x180716018 (-PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180722188 (-OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAX.c)
 *     ?HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180736060 (-HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1801C8FB0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1801C9334 (--_U@YAPEAX_K@Z.c)
 *     wcscmp_0 @ 0x1801CE4C6 (wcscmp_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_CopyCorrelationId@@@details@wil@@QEAA_NXZ @ 0x18027882C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_CopyCorrelationId@@@deta.c)
 */

void __fastcall CloudPCHelpers::GetCorrelationId(_WORD *pvData, wchar_t *String1, const unsigned __int16 *a3)
{
  __int64 v4; // rbx
  unsigned __int64 v6; // rbx
  WCHAR *v7; // rdi
  __int64 v8; // r14
  DWORD v9; // eax
  const WCHAR *v10; // rdx
  DWORD pcbData; // [rsp+60h] [rbp+20h] BYREF

  if ( pvData )
  {
    pcbData = 0;
    v4 = -1LL;
    do
      ++v4;
    while ( String1[v4] );
    v6 = v4 + 52;
    v7 = (WCHAR *)operator new[](saturated_mul(v6, 2uLL));
    _o_wcscpy_s(v7, 52LL, L"Software\\Microsoft\\Windows\\RemoteSystemIntegration\\");
    _o_wcscat_s(v7, v6, String1);
    if ( !wcscmp_0(String1, L"SystemId_boot") )
    {
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_CopyCorrelationId>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_W365Boot_CopyCorrelationId>::GetImpl'::`2'::impl) )
      {
        RegGetValueW(HKEY_CURRENT_USER, v7, L"CorrelationId", 2u, 0LL, 0LL, &pcbData);
        if ( pcbData - 1 <= 0x102 )
        {
          RegGetValueW(HKEY_CURRENT_USER, v7, L"CorrelationId", 2u, 0LL, pvData, &pcbData);
LABEL_17:
          operator delete[](v7);
          return;
        }
      }
      v8 = -2147483646LL;
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\RemoteSystemIntegration",
        L"CorrelationId",
        1u,
        0LL,
        0LL,
        &pcbData);
      v9 = pcbData;
      if ( !pcbData )
      {
LABEL_16:
        *pvData = 0;
        goto LABEL_17;
      }
      if ( pcbData >= 0x104 )
      {
LABEL_15:
        if ( v9 - 1 <= 0x102 )
          goto LABEL_17;
        goto LABEL_16;
      }
      v10 = L"Software\\Microsoft\\Windows\\RemoteSystemIntegration";
    }
    else
    {
      v8 = -2147483647LL;
      RegGetValueW(HKEY_CURRENT_USER, v7, L"CorrelationId", 1u, 0LL, 0LL, &pcbData);
      v9 = pcbData;
      if ( !pcbData )
        goto LABEL_16;
      if ( pcbData >= 0x104 )
        goto LABEL_15;
      v10 = v7;
    }
    RegGetValueW((HKEY)v8, v10, L"CorrelationId", 1u, 0LL, pvData, &pcbData);
    v9 = pcbData;
    goto LABEL_15;
  }
}
