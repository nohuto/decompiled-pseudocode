/*
 * XREFs of ?Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18046AC88
 * Callers:
 *     ?TryGetString@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHKEY__@@PEBG1@Z @ 0x1801802EC (-TryGetString@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAUHKEY__@@PEB.c)
 *     ?SetLastAppBackupListenerStartTimeForStateCapture@implementation@Shell@Internal@Windows@winrt@@YAXXZ @ 0x18019E79C (-SetLastAppBackupListenerStartTimeForStateCapture@implementation@Shell@Internal@Windows@winrt@@Y.c)
 *     ?PrecreateStartMenuConfigRegKey@StartDocked@@YAXXZ @ 0x18019FA74 (-PrecreateStartMenuConfigRegKey@StartDocked@@YAXXZ.c)
 *     ?IsUserAnAdmin@UserHelpers@@YA_NPEAUIUser@System@Windows@@@Z @ 0x180468FC0 (-IsUserAnAdmin@UserHelpers@@YA_NPEAUIUser@System@Windows@@@Z.c)
 *     ?LoadQuirksForApp@LegacyWindowWrapper@@AEAAJXZ @ 0x1804DBB70 (-LoadQuirksForApp@LegacyWindowWrapper@@AEAAJXZ.c)
 *     ?LoadQuirksForApp@LegacyUwpWindowWrapper@@AEAAJXZ @ 0x1804E1380 (-LoadQuirksForApp@LegacyUwpWindowWrapper@@AEAAJXZ.c)
 *     ?GetDragDropExtensionClsId@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AU_GUID@@XZ @ 0x18062AEF0 (-GetDragDropExtensionClsId@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Int.c)
 *     ?ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4ActivationKind@Activation@ApplicationModel@Windows@@EURect@Foundation@7@H@Z @ 0x18062F770 (-ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4A.c)
 *     ?ActivateRemotePathInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@11EURect@Foundation@Windows@@HPEA_J@Z @ 0x1806302A0 (-ActivateRemotePathInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@11EUR.c)
 *     ?GetPropertyValueFromRegistryKey@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHKEY__@@PEBG_N@Z @ 0x180633C18 (-GetPropertyValueFromRegistryKey@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@s.c)
 *     ?ModifyUnpackagedApp@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N1@Z @ 0x180634138 (-ModifyUnpackagedApp@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_N1@Z.c)
 *     ?StartMonitor@StartupAppMonitor@@QEAAXXZ @ 0x18063F3CC (-StartMonitor@StartupAppMonitor@@QEAAXXZ.c)
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x18063FC30 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 *     ??0StartupNotification@@QEAA@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18064213C (--0StartupNotification@@QEAA@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@Z.c)
 *     ??0StartupRegKeyNotification@@QEAA@PEAUHKEY__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4StartupAppLocation@@1@Z @ 0x1806422A8 (--0StartupRegKeyNotification@@QEAA@PEAUHKEY__@@V-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x180642CE0 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 *     ?CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z @ 0x180643290 (-CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z.c)
 *     ?CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ @ 0x180643870 (-CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ.c)
 *     ?CheckForRemovedStartupApp@StartupRegKeyNotification@@UEAAXXZ @ 0x180643BD0 (-CheckForRemovedStartupApp@StartupRegKeyNotification@@UEAAXXZ.c)
 *     ?RefreshRegKeyHandle@StartupRegKeyNotification@@QEAAXXZ @ 0x180644984 (-RefreshRegKeyHandle@StartupRegKeyNotification@@QEAAXXZ.c)
 *     ?TryEnsurePackageRegistered@ProtocolLauncher@Utils@@AEAAXXZ @ 0x1806C33E0 (-TryEnsurePackageRegistered@ProtocolLauncher@Utils@@AEAAXXZ.c)
 * Callees:
 *     ??$ReportFailure_Win32@$0A@@details@wil@@YAJPEAXIPEBD110K@Z @ 0x180462054 (--$ReportFailure_Win32@$0A@@details@wil@@YAJPEAXIPEBD110K@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::Throw_Win32(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4,
        unsigned int a5)
{
  int v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Win32<0>((__int64)this, a2, a3, (__int64)a4, v5, retaddr, (int)a4);
}
