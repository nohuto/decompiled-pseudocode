/*
 * XREFs of ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ @ 0x180153944
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1800C5B20 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 *     ??R_lambda_fe990823f78b875c41e1c4896de2e063_@@QEBA@XZ @ 0x1800F4C2C (--R_lambda_fe990823f78b875c41e1c4896de2e063_@@QEBA@XZ.c)
 *     ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180119110 (-SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     _lambda_fd6a6d19a360caf665b386e8926aa4f2_::operator() @ 0x1801512A0 (_lambda_fd6a6d19a360caf665b386e8926aa4f2_--operator().c)
 *     ??R_lambda_cb59e4c85f894ce28dd09636182d7590_@@QEBA@XZ @ 0x1801548FC (--R_lambda_cb59e4c85f894ce28dd09636182d7590_@@QEBA@XZ.c)
 *     ?IsWindowTabHostEnabledOnSKU@@YA_NXZ @ 0x180154F58 (-IsWindowTabHostEnabledOnSKU@@YA_NXZ.c)
 *     ?ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x180155034 (-ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?IsCopilotSupportedOSEdition@AIAssistancePolicy@@YA_NXZ @ 0x180265588 (-IsCopilotSupportedOSEdition@AIAssistancePolicy@@YA_NXZ.c)
 *     ?GetChatIconSoftwareLicensingPolicy@MeetAndChatHelpers@@YA?AW4ChatIconState@1@XZ @ 0x1806B1D04 (-GetChatIconSoftwareLicensingPolicy@MeetAndChatHelpers@@YA-AW4ChatIconState@1@XZ.c)
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x1806CF52C (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SP<unsigned short,SP_MEM<unsigned short>>::Reset(void **a1)
{
  void *v1; // rdi
  HANDLE ProcessHeap; // rax

  v1 = *a1;
  if ( *a1 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v1);
    *a1 = 0LL;
  }
}
