/*
 * XREFs of ?Destroy@CAppArrangementDelayed@@EEAAXXZ @ 0x1800DA070
 * Callers:
 *     <none>
 * Callees:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18000CF48 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAppArrangementDelayed::Destroy(CAppArrangementDelayed *this)
{
  CBaseObject *v2; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 23);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 23) = 0LL;
  }
  CStoryboard::_Cleanup(this);
  CStoryboard::Release(this);
}
