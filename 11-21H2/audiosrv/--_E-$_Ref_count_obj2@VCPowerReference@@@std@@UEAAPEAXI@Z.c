/*
 * XREFs of ??_E?$_Ref_count_obj2@VCPowerReference@@@std@@UEAAPEAXI@Z @ 0x180023B20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<CPowerReference>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<CPowerReference>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x80uLL);
  return a1;
}
