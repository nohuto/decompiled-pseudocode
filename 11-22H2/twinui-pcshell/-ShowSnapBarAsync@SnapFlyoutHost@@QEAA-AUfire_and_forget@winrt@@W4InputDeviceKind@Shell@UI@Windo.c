/*
 * XREFs of ?ShowSnapBarAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@W4InputDeviceKind@Shell@UI@WindowsUdk@3@PEAUHWND__@@@Z @ 0x1802282FC
 * Callers:
 *     ?OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUDragSizeInfoEventArgs@3456@@Z @ 0x1802E8EE0 (-OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEven.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     SnapFlyoutHost::ShowSnapBarAsync$_InitCoro$2 @ 0x1802280A0 (SnapFlyoutHost--ShowSnapBarAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall SnapFlyoutHost::ShowSnapBarAsync(__int64 a1, _BYTE *a2, int a3, __int64 a4)
{
  void *v7; // rax
  int v9; // [rsp+A8h] [rbp+10h] BYREF
  int v10; // [rsp+B0h] [rbp+18h] BYREF

  v10 = a3;
  v7 = operator new(0x4AuLL);
  v9 = 0;
  SnapFlyoutHost::ShowSnapBarAsync__InitCoro_2(&v9, (__int64)v7, a2, &v10, a4, a1);
  return a2;
}
