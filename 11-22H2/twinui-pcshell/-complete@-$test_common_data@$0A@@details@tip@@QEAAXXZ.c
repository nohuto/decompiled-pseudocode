/*
 * XREFs of ?complete@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x1800BCDCC
 * Callers:
 *     ??0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002F0C4 (--0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?OnLaunched@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXULaunchActivatedEventArgs@Xaml@UI@Microsoft@8@@Z @ 0x180048694 (-OnLaunched@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@w.c)
 *     ?TryGetForUriScheme@ProtocolLauncher@Utils@@SA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@@Z @ 0x180098F3C (-TryGetForUriScheme@ProtocolLauncher@Utils@@SA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$defaul.c)
 *     ??0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18010ED44 (--0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?OnLaunched@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXULaunchActivatedEventArgs@Activation@ApplicationModel@67@@Z @ 0x18010FBA4 (-OnLaunched@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXU.c)
 *     ?complete@?$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@QEAAXXZ @ 0x18020C3B4 (-complete@-$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@QEAAXXZ.c)
 *     _lambda_02ea2976da830b140e60944cbaaa9176_::operator() @ 0x18054C920 (_lambda_02ea2976da830b140e60944cbaaa9176_--operator().c)
 *     wil::details::lambda_call__lambda_184b61f680f02fd487f020fa6450c992___::_lambda_call__lambda_184b61f680f02fd487f020fa6450c992___ @ 0x1806C201C (wil--details--lambda_call__lambda_184b61f680f02fd487f020fa6450c992___--_lambda_call__lambda_184b.c)
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806DE4E4 (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     TestQueryData @ 0x1800BCEA0 (TestQueryData.c)
 *     ?evaluate_and_report@?$test_common_data@$0A@@details@tip@@AEAAX_J@Z @ 0x1800BCF8C (-evaluate_and_report@-$test_common_data@$0A@@details@tip@@AEAAX_J@Z.c)
 *     ?update_from_test_info@?$test_common_data@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x1800BD284 (-update_from_test_info@-$test_common_data@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall tip::details::test_common_data<0>::complete(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-48h] BYREF
  LPVOID pv[2]; // [rsp+30h] [rbp-38h]
  __int128 v8; // [rsp+40h] [rbp-28h]

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  *(_DWORD *)(a1 + 56) |= 0x300u;
  v3 = *(_QWORD *)(a1 + 152);
  if ( v3 )
  {
    v4 = *(unsigned int *)(a1 + 160);
    *(_QWORD *)(a1 + 152) = 0LL;
    v6 = 0LL;
    *(_OWORD *)pv = 0LL;
    v8 = 0LL;
    if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64, __int128 *))TestQueryData)(v3, 2LL, v4, &v6) )
    {
      tip::details::test_common_data<0>::update_from_test_info(a1, &v6);
      tip::details::test_common_data<0>::evaluate_and_report(v5, v8);
    }
    CoTaskMemFree(pv[1]);
  }
  if ( v1 )
    LeaveCriticalSection(v1);
}
