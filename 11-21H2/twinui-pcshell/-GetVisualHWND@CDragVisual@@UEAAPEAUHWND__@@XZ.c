/*
 * XREFs of ?GetVisualHWND@CDragVisual@@UEAAPEAUHWND__@@XZ @ 0x180185D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall CDragVisual::GetVisualHWND(CDragVisual *this)
{
  return (HWND)*((_QWORD *)this + 15);
}
