/*
 * XREFs of ?_AnyTransparentBackground@CAccent@@IEBA_NXZ @ 0x18001C2D4
 * Callers:
 *     ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x18000222C (-_IsAnimationNeeded@CAccent@@IEAA_NXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18000528C (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x18001C100 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x1800404D0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEBAMXZ @ 0x180042084 (-_GetSolidFillOpacity@CAccent@@IEBAMXZ.c)
 *     ?_UpdateAccentBackground@CAccent@@IEAAXK@Z @ 0x1800422E8 (-_UpdateAccentBackground@CAccent@@IEAAXK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CAccent::_AnyTransparentBackground(CAccent *this)
{
  int v1; // eax
  char v2; // dl

  v1 = *((_DWORD *)this + 72);
  if ( v1 == 2 )
    return 1;
  v2 = 0;
  if ( (unsigned int)(v1 - 3) <= 1 )
  {
    if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54) + 641LL) )
      return 1;
  }
  return v2;
}
