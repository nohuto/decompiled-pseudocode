/*
 * XREFs of ?_UpdateAccentBackground@CAccent@@IEAAXK@Z @ 0x180013C3C
 * Callers:
 *     ?EndTransition@CAccent@@QEAAJXZ @ 0x180007F70 (-EndTransition@CAccent@@QEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180017244 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAccent::_UpdateAccentBackground(CAccent *this, unsigned int a2)
{
  int v2; // eax

  if ( CAccent::s_clrCurrentAccentBackground != a2 )
  {
    v2 = *((_DWORD *)this + 72);
    CAccent::s_clrCurrentAccentBackground = a2;
    if ( (unsigned int)(v2 - 2) > 3 )
      CWindowList::RecreateDesktopWindowReplacementForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                               + 52));
  }
}
