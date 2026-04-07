/*
 * XREFs of ??1MagnifierTableElement@CMagnifierControl@@QEAA@XZ @ 0x180069992
 * Callers:
 *     ?FindElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAVMagnifierTableElement@CMagnifierControl@@PEAUHWND__@@@Z @ 0x1800699BC (-FindElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAV.c)
 *     ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x1800C72CC (-OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z.c)
 *     _CMagnifierControl::OnMagnifierCreate_::_1_::dtor$0 @ 0x1800C7481 (_CMagnifierControl--OnMagnifierCreate_--_1_--dtor$0.c)
 *     ?RemoveElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHPEAVMagnifierTableElement@CMagnifierControl@@@Z @ 0x1800C782C (-RemoveElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHP.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CMagnifierControl::MagnifierTableElement::~MagnifierTableElement(
        CMagnifierControl::MagnifierTableElement *this)
{
  CBaseObject *v2; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
}
