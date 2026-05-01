/*
 * XREFs of ?_OnLButtonUp@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x1805EFB8C
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1805F0EE8 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?_OnClick@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x1805EF81C (-_OnClick@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnFinishDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z @ 0x1805EF924 (-_OnFinishDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z.c)
 */

void __fastcall CDragVisual::_OnLButtonUp(CDragVisual *this, struct tagPOINT a2)
{
  HWND *v4; // rdi

  if ( *((_BYTE *)this + 324) )
  {
    CDragVisual::_OnFinishDrag(this, 0, a2);
    *((_BYTE *)this + 324) = 0;
    v4 = (HWND *)((char *)this + 152);
  }
  else
  {
    v4 = (HWND *)((char *)this + 152);
    if ( GetCapture() == *((HWND *)this + 19) )
      CDragVisual::_OnClick((HWND *)this, a2);
  }
  if ( *v4 )
  {
    if ( GetCapture() == *v4 )
      ReleaseCapture();
  }
}
