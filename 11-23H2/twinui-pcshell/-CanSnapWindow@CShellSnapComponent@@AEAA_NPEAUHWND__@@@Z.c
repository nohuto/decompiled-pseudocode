/*
 * XREFs of ?CanSnapWindow@CShellSnapComponent@@AEAA_NPEAUHWND__@@@Z @ 0x18065FE20
 * Callers:
 *     ?OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUDragSizeInfoEventArgs@3456@@Z @ 0x1802E8EE0 (-OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEven.c)
 *     ?OnHitTestPartNotifyEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUHitTestPartNotifyEventArgs@3456@@Z @ 0x1802E9010 (-OnHitTestPartNotifyEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 *     ?ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ @ 0x1806653A4 (-ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ.c)
 * Callees:
 *     ?CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x1800776C8 (-CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x1802EBA92 (-CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 */

char __fastcall CShellSnapComponent::CanSnapWindow(CShellSnapComponent *this, ApplicationViewHelpers *a2)
{
  char v3; // di
  bool v4; // bl
  HWND v5; // rdx
  bool CanResizeWindow; // bp
  HWND v7; // rdx
  bool CanMaximizeWindow; // al
  int v10; // [rsp+30h] [rbp+8h] BYREF
  int v11; // [rsp+34h] [rbp+Ch]

  v11 = HIDWORD(this);
  v3 = 0;
  v10 = 0;
  if ( !SystemParametersInfoW(0x82u, 0, &v10, 0) || !v10 )
    return 0;
  v4 = IsWindowEnabled((HWND)a2);
  CanResizeWindow = ApplicationViewHelpers::CanResizeWindow(a2, v5);
  CanMaximizeWindow = ApplicationViewHelpers::CanMaximizeWindow(a2, v7);
  if ( v4 && CanResizeWindow )
    return CanMaximizeWindow;
  return v3;
}
