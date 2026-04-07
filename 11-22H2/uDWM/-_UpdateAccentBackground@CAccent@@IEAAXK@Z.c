/*
 * XREFs of ?_UpdateAccentBackground@CAccent@@IEAAXK@Z @ 0x1800422E8
 * Callers:
 *     ?EndTransition@CAccent@@QEAAJXZ @ 0x180002D80 (-EndTransition@CAccent@@QEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180041CAC (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 * Callees:
 *     ?_AnyTransparentBackground@CAccent@@IEBA_NXZ @ 0x18001C2D4 (-_AnyTransparentBackground@CAccent@@IEBA_NXZ.c)
 */

void __fastcall CAccent::_UpdateAccentBackground(CAccent *this, unsigned int a2)
{
  if ( CAccent::s_clrCurrentAccentBackground != a2 )
  {
    CAccent::s_clrCurrentAccentBackground = a2;
    if ( !CAccent::_AnyTransparentBackground(this) )
      CWindowList::RecreateDesktopWindowReplacementForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                               + 54));
  }
}
