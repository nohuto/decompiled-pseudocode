/*
 * XREFs of ?IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z @ 0x1802E96F8
 * Callers:
 *     ?IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180030A14 (-IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?_IsValidSnapAssistLocation@CSnapAssistControllerBase@@IEAA_NPEAUIImmersiveMonitor@@AEBUCRect@Geometry@@@Z @ 0x18066DD94 (-_IsValidSnapAssistLocation@CSnapAssistControllerBase@@IEAA_NPEAUIImmersiveMonitor@@AEBUCRect@Ge.c)
 *     ?_OnHotkeyModeEnd@HotkeyHandler@@AEAAXPEAUISnappedWindow@@W4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x180677AF0 (-_OnHotkeyModeEnd@HotkeyHandler@@AEAAXPEAUISnappedWindow@@W4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@.c)
 *     ?GetCorrectedFramePosition@CSnappedWindow@@UEBA?AUCRect@Geometry@@XZ @ 0x180686B20 (-GetCorrectedFramePosition@CSnappedWindow@@UEBA-AUCRect@Geometry@@XZ.c)
 * Callees:
 *     ?AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ @ 0x180670608 (-AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ.c)
 */

char __fastcall SnapLayoutHelpers::IsValidSnapRegion(SnapLayoutHelpers *a1)
{
  unsigned int v1; // ebx
  bool v2; // al
  char v3; // dl
  int v4; // eax

  v1 = (unsigned int)a1;
  v2 = SnapLayoutHelpers::AreQuadrantsEnabled(a1);
  v3 = 0;
  if ( v2 )
  {
    if ( v1 && v1 != 11 )
      return 1;
  }
  else
  {
    if ( v1 > 0xB )
      return 1;
    v4 = 2219;
    if ( !_bittest(&v4, v1) )
      return 1;
  }
  return v3;
}
