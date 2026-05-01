/*
 * XREFs of ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180105A04
 * Callers:
 *     ?GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z @ 0x180021DA0 (-GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z.c)
 *     ?IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFlags@@@Z @ 0x1801057D8 (-IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFl.c)
 *     RecoverWindowsProc @ 0x1801058D0 (RecoverWindowsProc.c)
 * Callees:
 *     <none>
 */

bool __fastcall CApplicationManagerUtility::IsTrayWindowStyleCheck(HWND hWnd, HWND a2)
{
  return (GetWindowLongPtrW(hWnd, -20) & 0x40000) != 0 || (GetWindowLongPtrW(hWnd, -20) & 0x8000080) == 0;
}
