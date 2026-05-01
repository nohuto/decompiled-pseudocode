/*
 * XREFs of ?HideAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@_N@Z @ 0x1802274E4
 * Callers:
 *     ?DisplaySettingsChange@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18006C3F0 (-DisplaySettingsChange@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISP.c)
 *     ?OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUDragSizeInfoEventArgs@3456@@Z @ 0x1802E8EE0 (-OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEven.c)
 *     ?OnHitTestPartNotifyEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUHitTestPartNotifyEventArgs@3456@@Z @ 0x1802E9010 (-OnHitTestPartNotifyEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 *     ?MonitorAdded@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x180661AD0 (-MonitorAdded@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ @ 0x1806653A4 (-ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ.c)
 *     ?OnFlyoutInstanceDismissRequested@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x18067B860 (-OnFlyoutInstanceDismissRequested@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shel.c)
 *     ?OnFlyoutInstancePointerExited@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x18067B8F0 (-OnFlyoutInstancePointerExited@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@I.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     SnapFlyoutHost::HideAsync$_InitCoro$2 @ 0x180226FFC (SnapFlyoutHost--HideAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall SnapFlyoutHost::HideAsync(__int64 a1, _BYTE *a2, char a3)
{
  void *v5; // rax
  int v7; // [rsp+E8h] [rbp+10h] BYREF
  char v8; // [rsp+F0h] [rbp+18h] BYREF

  v8 = a3;
  v5 = operator new(0x93uLL);
  v7 = 0;
  SnapFlyoutHost::HideAsync__InitCoro_2(&v7, (__int64)v5, a2, &v8, a1);
  return a2;
}
