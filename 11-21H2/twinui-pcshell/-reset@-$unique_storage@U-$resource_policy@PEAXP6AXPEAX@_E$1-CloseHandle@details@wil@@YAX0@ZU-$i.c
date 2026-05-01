/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CA2C4
 * Callers:
 *     ?RuntimeClassInitialize@CLauncherTipContextMenu@@QEAAJXZ @ 0x18005F1EC (-RuntimeClassInitialize@CLauncherTipContextMenu@@QEAAJXZ.c)
 *     ?StartXamlApplicationThread@XamlExplorerHostShellComponent@@AEAAJXZ @ 0x1800619DC (-StartXamlApplicationThread@XamlExplorerHostShellComponent@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@XamlExplorerHostShellComponent@@QEAAJXZ @ 0x18006366C (-RuntimeClassInitialize@XamlExplorerHostShellComponent@@QEAAJXZ.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800C9E98 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ??0?$event_t@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@Uerr_exception_policy@2@@wil@@QEAA@W4EventOptions@1@@Z @ 0x1800CA164 (--0-$event_t@V-$unique_any_t@V-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-C.c)
 *     ??0SnapFlyoutHost@@QEAA@AEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@@Z @ 0x1800CA1CC (--0SnapFlyoutHost@@QEAA@AEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windo.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800CAAB4 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ??0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800CCA24 (--0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Initialize@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x1800E4958 (-Initialize@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x1802D6FB8 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x1802D7234 (-Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ.c)
 *     ?HandleState@AssistantLightManager@Lighting@TwinUI@@QEAAXW4AssistantState@2Cortana@@@Z @ 0x18055ECA0 (-HandleState@AssistantLightManager@Lighting@TwinUI@@QEAAXW4AssistantState@2Cortana@@@Z.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1805980EC (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil.c)
 *     ?XamlExplorerHostStartThreadProc@SnapFlyoutHost@@AEAAXXZ @ 0x1805B111C (-XamlExplorerHostStartThreadProc@SnapFlyoutHost@@AEAAXXZ.c)
 *     ?RegisterFlyoutWindow@Utils@@YAXPEAUHWND__@@_N@Z @ 0x1805D0D50 (-RegisterFlyoutWindow@Utils@@YAXPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18015F354 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
        wil::details **a1,
        wil::details *a2)
{
  wil::details *v4; // rsi
  DWORD LastError; // ebx
  void *v6; // rdx

  v4 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    wil::details::CloseHandle(v4, v6);
    SetLastError(LastError);
  }
  *a1 = a2;
}
