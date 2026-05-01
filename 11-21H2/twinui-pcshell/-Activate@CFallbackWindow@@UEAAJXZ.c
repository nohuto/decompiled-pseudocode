/*
 * XREFs of ?Activate@CFallbackWindow@@UEAAJXZ @ 0x1802EDE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFallbackWindow::Activate(HWND *this)
{
  return !SetForegroundWindow(*(this - 4)) ? 0x80070005 : 0;
}
