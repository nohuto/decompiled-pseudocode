/*
 * XREFs of ?_OnPointerCaptureChanged@CDragVisual@@AEAAXI@Z @ 0x1805351A0
 * Callers:
 *     ?_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x18053531C (-_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z.c)
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180536154 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?_OnCancelDrag@CDragVisual@@AEAAXXZ @ 0x180534920 (-_OnCancelDrag@CDragVisual@@AEAAXXZ.c)
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
