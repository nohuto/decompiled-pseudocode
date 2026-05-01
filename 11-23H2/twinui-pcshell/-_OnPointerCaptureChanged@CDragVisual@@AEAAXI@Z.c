/*
 * XREFs of ?_OnPointerCaptureChanged@CDragVisual@@AEAAXI@Z @ 0x1805EFF48
 * Callers:
 *     ?_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x1805F00C4 (-_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z.c)
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1805F0EE8 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?_OnCancelDrag@CDragVisual@@AEAAXXZ @ 0x1805EF6BC (-_OnCancelDrag@CDragVisual@@AEAAXXZ.c)
 */

void __fastcall CDragVisual::_OnPointerCaptureChanged(CDragVisual *this, int a2)
{
  if ( *((_BYTE *)this + 325) )
  {
    CDragVisual::_OnCancelDrag(this);
    *((_BYTE *)this + 325) = 0;
  }
  if ( *((_DWORD *)this + 82) == a2 )
    *((_DWORD *)this + 82) = 0;
}
