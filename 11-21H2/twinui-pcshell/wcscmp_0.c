/*
 * XREFs of wcscmp_0 @ 0x1801EACD7
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1800889D0 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 *     ??R_lambda_75e5b5e40d3ee59a799a62b8fd66d884_@@QEBA_NXZ @ 0x1800CAD78 (--R_lambda_75e5b5e40d3ee59a799a62b8fd66d884_@@QEBA_NXZ.c)
 *     ?IsWindowTabHostEnabledOnSKU@@YA_NXZ @ 0x1800CB4A0 (-IsWindowTabHostEnabledOnSKU@@YA_NXZ.c)
 *     ?ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x1800CB57C (-ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800D6D00 (-SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180105E20 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     ?TryGetForUriScheme@ProtocolLauncher@Utils@@SA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@@Z @ 0x18011E514 (-TryGetForUriScheme@ProtocolLauncher@Utils@@SA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$defaul.c)
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x1801DA63C (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 *     ?ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z @ 0x18044BD10 (-ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z.c)
 *     ?GetChatIconSoftwareLicensingPolicy@MeetAndChatHelpers@@YA?AW4ChatIconState@1@XZ @ 0x1805C1578 (-GetChatIconSoftwareLicensingPolicy@MeetAndChatHelpers@@YA-AW4ChatIconState@1@XZ.c)
 *     _lambda_1a28a66a6761d59b906b53c38d1feea3_::operator() @ 0x1805F5454 (_lambda_1a28a66a6761d59b906b53c38d1feea3_--operator().c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *String1, const wchar_t *String2)
{
  return wcscmp(String1, String2);
}
