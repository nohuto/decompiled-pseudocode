/*
 * XREFs of ?OnDesktopVisibilityChanged@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@H@Z @ 0x1803A7E20
 * Callers:
 *     <none>
 * Callees:
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x1801815B0 (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 */

__int64 __fastcall CImmersiveMode::OnDesktopVisibilityChanged(CImmersiveMode *this, struct IUnknown *a2, int a3)
{
  if ( a2 )
    CImmersiveMode::_HandleDesktopVisibilityChange((CImmersiveMode *)((char *)this - 152), a2, a3 != 0, 0);
  return 0LL;
}
