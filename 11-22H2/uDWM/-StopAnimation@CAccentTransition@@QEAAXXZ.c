/*
 * XREFs of ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x1800A2574
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180041CAC (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?OnAnimationComplete@CAccentTransition@@UEAAJI@Z @ 0x1800A2260 (-OnAnimationComplete@CAccentTransition@@UEAAJI@Z.c)
 * Callees:
 *     ?CleanupAnimation@CAccentTransition@@QEAAXXZ @ 0x1800A21F8 (-CleanupAnimation@CAccentTransition@@QEAAXXZ.c)
 */

void __fastcall CAccentTransition::StopAnimation(CAccent **this)
{
  if ( *((_BYTE *)this + 32) )
    CAccentTransition::CleanupAnimation((CAccentTransition *)this);
  CAccent::EndTransition(this[3]);
}
