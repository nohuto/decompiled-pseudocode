/*
 * XREFs of ?GetVisualHWND@CSimpleTempAppVisual@@UEAAPEAUHWND__@@XZ @ 0x1801C3F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall CSimpleTempAppVisual::GetVisualHWND(CSimpleTempAppVisual *this)
{
  return (HWND)*((_QWORD *)this + 5);
}
