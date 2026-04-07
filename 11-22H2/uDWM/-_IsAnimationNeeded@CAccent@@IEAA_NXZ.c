/*
 * XREFs of ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x18000222C
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x18000344C (-StartTransition@CAccent@@QEAAJXZ.c)
 * Callees:
 *     ?_AnyTransparentBackground@CAccent@@IEBA_NXZ @ 0x18001C2D4 (-_AnyTransparentBackground@CAccent@@IEBA_NXZ.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18004911C (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 */

bool __fastcall CAccent::_IsAnimationNeeded(CAccent *this)
{
  int v4; // r8d

  return *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22)
      && !CDesktopManager::CheckAnyPreference(0x10u)
      && *((_DWORD *)this + 79)
      && !CAccent::_AnyTransparentBackground(this)
      && (unsigned int)(v4 - 2) > 3;
}
