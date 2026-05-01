/*
 * XREFs of ?ShowAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@PEAUHWND__@@W4ShowFlags@1@@Z @ 0x1801C0FA4
 * Callers:
 *     ?OnHitTestPartNotifyEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUHitTestPartNotifyEventArgs@3456@@Z @ 0x180594F70 (-OnHitTestPartNotifyEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 *     ?ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ @ 0x18059772C (-ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     SnapFlyoutHost::ShowAsync$_InitCoro$2 @ 0x1801C0AC4 (SnapFlyoutHost--ShowAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall SnapFlyoutHost::ShowAsync(__int64 a1, _BYTE *a2, __int64 a3, int a4)
{
  char *v7; // rax
  int v9; // [rsp+408h] [rbp+10h] BYREF
  int v10; // [rsp+418h] [rbp+20h] BYREF

  v10 = a4;
  v7 = (char *)operator new(0x3A9uLL);
  v9 = 0;
  SnapFlyoutHost::ShowAsync__InitCoro_2(&v9, v7, a2, a3, &v10, a1);
  return a2;
}
