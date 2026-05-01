/*
 * XREFs of ?UpdateWorkAreaAsync@TaskViewFrame@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@@Z @ 0x18028DC54
 * Callers:
 *     ?RuntimeClassInitialize@TaskViewFrame@@QEAAJW4ALL_UP_VIEW_FLAGS@@PEAUIImmersiveMonitor@@1AEBUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@AEBUSwitchItemDataView@6ComposableShell@89winrt@@AEBUIVirtualDesktopDataSource@6ComposableShell@89winrt@@AEBUIVirtualDesktopController@6ComposableShell@89winrt@@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@PEAUIApplicationViewCollection@@UTaskGroupDataSourceAdapter@TaskGroups@789winrt@@PEAUIRemoteSessionWindowManager@789ABI@@@Z @ 0x18007B4D8 (-RuntimeClassInitialize@TaskViewFrame@@QEAAJW4ALL_UP_VIEW_FLAGS@@PEAUIImmersiveMonitor@@1AEBUIDe.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     TaskViewFrame::UpdateWorkAreaAsync$_InitCoro$2 @ 0x18028D758 (TaskViewFrame--UpdateWorkAreaAsync$_InitCoro$2.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall TaskViewFrame::UpdateWorkAreaAsync(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        __int64 a3)
{
  void *v6; // rax
  int v8; // [rsp+1C8h] [rbp+10h] BYREF

  v6 = operator new(0x171uLL);
  v8 = 0;
  TaskViewFrame::UpdateWorkAreaAsync__InitCoro_2(&v8, (__int64)v6 + 96, a2, a3, a1);
  return a2;
}
