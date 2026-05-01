/*
 * XREFs of ?CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x18023A026
 * Callers:
 *     ?IsOperableWindow@@YA_NPEAUHWND__@@@Z @ 0x1804B36F8 (-IsOperableWindow@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsOperableView@Win32ViewOperationPolicy@@QEAA_NPEAUIApplicationView@@@Z @ 0x1804F0D80 (-IsOperableView@Win32ViewOperationPolicy@@QEAA_NPEAUIApplicationView@@@Z.c)
 *     ?CanShowFlyoutForWindow@CShellSnapComponent@@AEAA_NPEAUHWND__@@@Z @ 0x180592680 (-CanShowFlyoutForWindow@CShellSnapComponent@@AEAA_NPEAUHWND__@@@Z.c)
 *     ?CanResizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1805EFA40 (-CanResizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ApplicationViewHelpers::CanResizeWindow(ApplicationViewHelpers *this, HWND a2)
{
  return (GetWindowLongPtrW((HWND)this, -16) & 0x40000) != 0;
}
