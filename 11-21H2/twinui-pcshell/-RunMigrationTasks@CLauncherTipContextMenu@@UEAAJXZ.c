/*
 * XREFs of ?RunMigrationTasks@CLauncherTipContextMenu@@UEAAJXZ @ 0x1801DA200
 * Callers:
 *     <none>
 * Callees:
 *     ?RunMigrationTasksAsyncHelper@CLauncherTipContextMenu@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801DA4A0 (-RunMigrationTasksAsyncHelper@CLauncherTipContextMenu@@AEAA-AUfire_and_forget@winrt@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_38521895@@@details@wil@@QEAA_NXZ @ 0x1801E7E18 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWith.c)
 */

__int64 __fastcall CLauncherTipContextMenu::RunMigrationTasks(CLauncherTipContextMenu *this)
{
  char v3; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_38521895>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_38521895>::GetImpl'::`2'::impl) )
    CLauncherTipContextMenu::RunMigrationTasksAsyncHelper((char *)this - 104, &v3);
  return 0LL;
}
