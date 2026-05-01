/*
 * XREFs of ?ShowFlyoutAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@PEAUHWND__@@W4ShowFlags@1@@Z @ 0x180228028
 * Callers:
 *     ?OnHitTestPartNotifyEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUHitTestPartNotifyEventArgs@3456@@Z @ 0x1802E9010 (-OnHitTestPartNotifyEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 *     ?ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ @ 0x1806653A4 (-ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     SnapFlyoutHost::ShowFlyoutAsync$_InitCoro$2 @ 0x180227CF4 (SnapFlyoutHost--ShowFlyoutAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall SnapFlyoutHost::ShowFlyoutAsync(__int64 a1, _BYTE *a2, __int64 a3, int a4)
{
  void *v7; // rax
  int v9; // [rsp+C8h] [rbp+10h] BYREF
  int v10; // [rsp+D8h] [rbp+20h] BYREF

  v10 = a4;
  v7 = operator new(0x62uLL);
  v9 = 0;
  SnapFlyoutHost::ShowFlyoutAsync__InitCoro_2(&v9, (__int64)v7, a2, a3, &v10, a1);
  return a2;
}
