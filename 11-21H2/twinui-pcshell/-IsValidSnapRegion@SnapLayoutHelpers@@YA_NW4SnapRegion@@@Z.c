/*
 * XREFs of ?IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z @ 0x1805A71E8
 * Callers:
 *     ?IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1801302F4 (-IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?_IsValidSnapAssistLocation@CSnapAssistControllerBase@@IEAA_NPEAUIImmersiveMonitor@@AEBUCRect@Geometry@@@Z @ 0x18059E634 (-_IsValidSnapAssistLocation@CSnapAssistControllerBase@@IEAA_NPEAUIImmersiveMonitor@@AEBUCRect@Ge.c)
 *     ?_OnHotkeyModeEnd@HotkeyHandler@@AEAAXPEAUISnappedWindow@@W4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805AAF28 (-_OnHotkeyModeEnd@HotkeyHandler@@AEAAXPEAUISnappedWindow@@W4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@.c)
 *     ?GetCorrectedFramePosition@CSnappedWindow@@UEBA?AUCRect@Geometry@@XZ @ 0x1805AB400 (-GetCorrectedFramePosition@CSnappedWindow@@UEBA-AUCRect@Geometry@@XZ.c)
 * Callees:
 *     ?AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ @ 0x1805A1A04 (-AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ.c)
 *     ?_IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z @ 0x1805A76CC (-_IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z.c)
 */

char __fastcall SnapLayoutHelpers::IsValidSnapRegion(SnapLayoutHelpers *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  char v5; // bl

  v4 = (unsigned int)a1;
  v5 = 0;
  if ( SnapLayoutHelpers::AreQuadrantsEnabled(a1, a2, a3, a4) )
    return SnapLayoutHelpers::_IsValidSnapRegion(v4);
  if ( (unsigned __int8)SnapLayoutHelpers::_IsValidSnapRegion(v4) )
    return ((v4 - 1) & 0xFFFFFFF9) != 0;
  return v5;
}
