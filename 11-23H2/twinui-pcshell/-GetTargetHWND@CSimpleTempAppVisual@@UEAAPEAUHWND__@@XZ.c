/*
 * XREFs of ?GetTargetHWND@CSimpleTempAppVisual@@UEAAPEAUHWND__@@XZ @ 0x1801C3EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall CSimpleTempAppVisual::GetTargetHWND(CSimpleTempAppVisual *this)
{
  return (HWND)*((_QWORD *)this + 4);
}
