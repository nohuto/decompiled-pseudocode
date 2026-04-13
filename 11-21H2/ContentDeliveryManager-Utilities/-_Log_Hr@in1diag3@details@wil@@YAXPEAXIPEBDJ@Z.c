/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006940C
 * Callers:
 *     ContentManagement::ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___ @ 0x180052028 (ContentManagement--ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___.c)
 *     _lambda_929976d9f769b9ae6bfa1e1f0592e0ca_::operator() @ 0x18005898C (_lambda_929976d9f769b9ae6bfa1e1f0592e0ca_--operator().c)
 *     ?CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ @ 0x18005A2C8 (-CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ.c)
 *     ?GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z @ 0x18005DAEC (-GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z.c)
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180070E64 (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 *     ?Activate@NotificationsTargetedContentClient@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z @ 0x180077360 (-Activate@NotificationsTargetedContentClient@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_.c)
 *     ??1UniqueExtendedExecutionSession@@UEAA@XZ @ 0x1800B40A0 (--1UniqueExtendedExecutionSession@@UEAA@XZ.c)
 *     ?CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z @ 0x1800B4560 (-CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z.c)
 *     ?QueueActionAfterUnlock@UnlockActionHelper@@QEAAJXZ @ 0x1800B6B30 (-QueueActionAfterUnlock@UnlockActionHelper@@QEAAJXZ.c)
 *     ??0SwapStartTileService@Actions@CreativeFramework@@QEAA@PEB_W0AEBUSwapStartTileProperties@12@@Z @ 0x1800BCFE0 (--0SwapStartTileService@Actions@CreativeFramework@@QEAA@PEB_W0AEBUSwapStartTileProperties@12@@Z.c)
 *     ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800C1250 (-SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800C5E7C (-LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?NotifyForDesktopSpotlightUpdates@SetDesktopWallpaperService@Actions@CreativeFramework@@AEAAJXZ @ 0x1800D15B0 (-NotifyForDesktopSpotlightUpdates@SetDesktopWallpaperService@Actions@CreativeFramework@@AEAAJXZ.c)
 *     ?Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x1800DA118 (-Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z.c)
 *     ?IsMicrosoftInternalUser@AccountTokens@ContentDeliveryManager@@YA_NXZ @ 0x1800E06E8 (-IsMicrosoftInternalUser@AccountTokens@ContentDeliveryManager@@YA_NXZ.c)
 * Callees:
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180024EC0 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  wil::details *v4; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v4) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<2>((__int64)this, (int)a2, a3, 0LL, 0LL, retaddr, v4);
}
