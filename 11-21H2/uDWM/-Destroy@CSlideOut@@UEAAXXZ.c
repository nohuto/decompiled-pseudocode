/*
 * XREFs of ?Destroy@CSlideOut@@UEAAXXZ @ 0x1800D5EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x1800D93F8 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 */

void __fastcall CSlideOut::Destroy(CSlideOut *this)
{
  CBaseObject *v2; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 17);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 17) = 0LL;
  }
  CStoryboard::_Cleanup(this);
  CStoryboard::Release(this);
}
