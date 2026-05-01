/*
 * XREFs of ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1800B3E54
 * Callers:
 *     _lambda_5112c4c8994b8afbe0e7f1a794b38521_::operator() @ 0x1801DDCC4 (_lambda_5112c4c8994b8afbe0e7f1a794b38521_--operator().c)
 *     ??R_lambda_120b110b9b84ba13734d7b16b46ad979_@@QEBA@XZ @ 0x1801F1C94 (--R_lambda_120b110b9b84ba13734d7b16b46ad979_@@QEBA@XZ.c)
 *     _lambda_2b601edba18b4fdf43345f97c13ddcab_$_ResumeCoro$1::operator() @ 0x18020DDA0 (_lambda_2b601edba18b4fdf43345f97c13ddcab_$_ResumeCoro$1--operator().c)
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1802106D0 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 *     JointResize::EnsureTileCollectionAsync$_ResumeCoro$1 @ 0x1802136B0 (JointResize--EnsureTileCollectionAsync$_ResumeCoro$1.c)
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x180239600 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 *     _lambda_2b4736168c23780831e980beacfbaf99_::operator() @ 0x1802534F4 (_lambda_2b4736168c23780831e980beacfbaf99_--operator().c)
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x180253800 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x180257360 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$1 @ 0x180258B90 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync$_ResumeCoro$1 @ 0x180259740 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupDeviceMetaDataAsync$_R.c)
 *     _lambda_3af96972622813cad57e0b9ae8d4dbe0_::operator() @ 0x18025C2B0 (_lambda_3af96972622813cad57e0b9ae8d4dbe0_--operator().c)
 *     ?GetTargetAppExtensionHelper@CopilotHotkeyManager@@AEAA?AUPropertyDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UPropertySet@Collections@Foundation@Windows@winrt@@@Z @ 0x18026428C (-GetTargetAppExtensionHelper@CopilotHotkeyManager@@AEAA-AUPropertyDetails@@V-$basic_string@GU-$c.c)
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180264890 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 *     ?InvokeSearch@CopilotHotkeyManager@@QEAAXXZ @ 0x18026533C (-InvokeSearch@CopilotHotkeyManager@@QEAAXXZ.c)
 *     ?IsCopilotPWAInstalled@CopilotHotkeyManager@@QEAA_NXZ @ 0x1802654D0 (-IsCopilotPWAInstalled@CopilotHotkeyManager@@QEAA_NXZ.c)
 *     ?SchemaNameAreRegisteredProtocol@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z @ 0x180272C08 (-SchemaNameAreRegisteredProtocol@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z.c)
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x180274070 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 *     GetEnterprisePinDataFromRegistry @ 0x180287B1C (GetEnterprisePinDataFromRegistry.c)
 *     GetStoredEnterprisePinGeneration @ 0x180287CFC (GetStoredEnterprisePinGeneration.c)
 *     ShouldAddEnterprisePinToOutput @ 0x1802883A8 (ShouldAddEnterprisePinToOutput.c)
 *     ?HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180736060 (-HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 */

winrt::param::hstring *__fastcall winrt::param::hstring::hstring(
        winrt::param::hstring *this,
        const unsigned __int16 *a2)
{
  unsigned __int64 v3; // r8

  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  winrt::param::hstring::create_string_reference(this, a2, v3);
  return this;
}
