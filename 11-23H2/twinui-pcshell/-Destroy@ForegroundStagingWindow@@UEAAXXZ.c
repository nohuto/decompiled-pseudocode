/*
 * XREFs of ?Destroy@ForegroundStagingWindow@@UEAAXXZ @ 0x1801BF830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ForegroundStagingWindow::Destroy(HWND *this)
{
  DestroyWindow(this[3]);
}
