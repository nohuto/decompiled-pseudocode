/*
 * XREFs of ?IsFallbackWindow@CFallbackWindow@@UEBA_NPEAUHWND__@@@Z @ 0x180041050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CFallbackWindow::IsFallbackWindow(CFallbackWindow *this, HWND a2)
{
  return *((_QWORD *)this - 4) == (_QWORD)a2;
}
