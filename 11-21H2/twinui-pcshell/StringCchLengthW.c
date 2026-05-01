/*
 * XREFs of StringCchLengthW @ 0x1800CB940
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1800889D0 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 *     ??R_lambda_75e5b5e40d3ee59a799a62b8fd66d884_@@QEBA_NXZ @ 0x1800CAD78 (--R_lambda_75e5b5e40d3ee59a799a62b8fd66d884_@@QEBA_NXZ.c)
 *     ?IsWindowTabHostEnabledOnSKU@@YA_NXZ @ 0x1800CB4A0 (-IsWindowTabHostEnabledOnSKU@@YA_NXZ.c)
 *     ?ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x1800CB57C (-ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800D6D00 (-SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x1801DA63C (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 *     ?GetChatIconSoftwareLicensingPolicy@MeetAndChatHelpers@@YA?AW4ChatIconState@1@XZ @ 0x1805C1578 (-GetChatIconSoftwareLicensingPolicy@MeetAndChatHelpers@@YA-AW4ChatIconState@1@XZ.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCchLengthW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  HRESULT v3; // edx
  __int64 v4; // rax

  if ( !psz )
  {
    v3 = -2147024809;
LABEL_13:
    if ( pcchLength )
      *pcchLength = 0LL;
    return v3;
  }
  v3 = 0;
  v4 = 0x7FFFFFFFLL;
  while ( *psz )
  {
    ++psz;
    if ( !--v4 )
    {
      v3 = -2147024809;
      break;
    }
  }
  if ( pcchLength )
  {
    if ( v3 < 0 )
      *pcchLength = 0LL;
    else
      *pcchLength = 0x7FFFFFFF - v4;
  }
  if ( v3 < 0 )
    goto LABEL_13;
  return v3;
}
