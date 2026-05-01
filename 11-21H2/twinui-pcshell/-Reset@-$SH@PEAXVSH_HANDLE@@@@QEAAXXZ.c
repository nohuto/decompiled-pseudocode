/*
 * XREFs of ?Reset@?$SH@PEAXVSH_HANDLE@@@@QEAAXXZ @ 0x1805F3EA4
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1800889D0 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 *     ??R_lambda_75e5b5e40d3ee59a799a62b8fd66d884_@@QEBA_NXZ @ 0x1800CAD78 (--R_lambda_75e5b5e40d3ee59a799a62b8fd66d884_@@QEBA_NXZ.c)
 *     ?IsWindowTabHostEnabledOnSKU@@YA_NXZ @ 0x1800CB4A0 (-IsWindowTabHostEnabledOnSKU@@YA_NXZ.c)
 *     ?ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x1800CB57C (-ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800D6D00 (-SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?GetChatIconSoftwareLicensingPolicy@MeetAndChatHelpers@@YA?AW4ChatIconState@1@XZ @ 0x1805C1578 (-GetChatIconSoftwareLicensingPolicy@MeetAndChatHelpers@@YA-AW4ChatIconState@1@XZ.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall SH<void *,SH_HANDLE>::Reset(void **a1)
{
  void *v2; // rcx
  BOOL result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = CloseHandle(v2);
    *a1 = 0LL;
  }
  return result;
}
