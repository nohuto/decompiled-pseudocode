/*
 * XREFs of ?CanFitColumnLayouts@SnapLayoutHelpers@@YA_NAEBUCRect@Geometry@@H@Z @ 0x1805A1C18
 * Callers:
 *     ?ComputeMigrationState@SnapLayoutHelpers@@YA?AW4_SHELLSETWINDOWPOS_STATE@@W4SnapRegion@@AEBUCRect@Geometry@@H@Z @ 0x1805A1F88 (-ComputeMigrationState@SnapLayoutHelpers@@YA-AW4_SHELLSETWINDOWPOS_STATE@@W4SnapRegion@@AEBUCRec.c)
 *     ?DetermineNewSnapState@HotkeyHandler@@AEBA?AUSNAP_STATE@1@W4SnapAction@1@W4HotkeyCommand@1@IPEAUIImmersiveMonitor@@@Z @ 0x1805A9444 (-DetermineNewSnapState@HotkeyHandler@@AEBA-AUSNAP_STATE@1@W4SnapAction@1@W4HotkeyCommand@1@IPEAU.c)
 * Callees:
 *     <none>
 */

bool __fastcall SnapLayoutHelpers::CanFitColumnLayouts(SnapLayoutHelpers *this, const struct Geometry::CRect *a2)
{
  return (unsigned int)MulDiv(*((_DWORD *)this + 2) - *(_DWORD *)this, 96, (int)a2) >= 0x738;
}
