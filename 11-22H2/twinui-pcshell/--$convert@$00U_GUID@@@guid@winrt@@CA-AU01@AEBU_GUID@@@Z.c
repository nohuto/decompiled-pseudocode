/*
 * XREFs of ??$convert@$00U_GUID@@@guid@winrt@@CA?AU01@AEBU_GUID@@@Z @ 0x180088608
 * Callers:
 *     ?ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DashboardInvokeType@Dashboard@3UI@WindowsUdk@6@URect@Foundation@56@@Z @ 0x18005A0D0 (-ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4.c)
 *     ?GetAppWindowRemoteDesktopProperties@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEBA?AUAppWindowRemoteDesktopProperties@3456@_K@Z @ 0x1800BDAE0 (-GetAppWindowRemoteDesktopProperties@SwitchConnectionHandler@implementation@Shell@Internal@Windo.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$1 @ 0x18025A570 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBa_ea_18025A570.c)
 *     ?on_result@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@EEAAXAEBUTipReportingInfo@@@Z @ 0x18046D4C0 (-on_result@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@EEAAXAEBUTipReporting.c)
 *     ?GetForWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUSnapLayoutManagerExtension@PlatformExtensions@4567@AEBURect@Foundation@67@@Z @ 0x180683904 (-GetForWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@win.c)
 *     ?GetSnappableWindowList@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AV?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@XZ @ 0x180684008 (-GetSnappableWindowList@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Win.c)
 *     ?DeactivateDisabledRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x18072110C (-DeactivateDisabledRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Window.c)
 *     ?Execute@SwitchConnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x1807316A0 (-Execute@SwitchConnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_ptr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::guid::convert<1,_GUID>(__int64 a1, int *a2)
{
  __int64 result; // rax
  char v3; // si
  char v4; // bp
  char v5; // r10
  char v6; // r11
  char v7; // di
  char v8; // r14
  char v9; // r15
  __int16 v10; // r9
  __int16 v11; // r8
  int v12; // ecx

  result = a1;
  v3 = *((_BYTE *)a2 + 12);
  v4 = *((_BYTE *)a2 + 13);
  v5 = *((_BYTE *)a2 + 8);
  v6 = *((_BYTE *)a2 + 9);
  v7 = *((_BYTE *)a2 + 11);
  v8 = *((_BYTE *)a2 + 14);
  v9 = *((_BYTE *)a2 + 15);
  v10 = *((_WORD *)a2 + 3);
  v11 = *((_WORD *)a2 + 2);
  v12 = *a2;
  *(_BYTE *)(result + 10) = *((_BYTE *)a2 + 10);
  *(_BYTE *)(result + 12) = v3;
  *(_BYTE *)(result + 13) = v4;
  *(_DWORD *)result = v12;
  *(_WORD *)(result + 4) = v11;
  *(_WORD *)(result + 6) = v10;
  *(_BYTE *)(result + 8) = v5;
  *(_BYTE *)(result + 9) = v6;
  *(_BYTE *)(result + 11) = v7;
  *(_BYTE *)(result + 14) = v8;
  *(_BYTE *)(result + 15) = v9;
  return result;
}
