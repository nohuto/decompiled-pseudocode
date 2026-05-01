/*
 * XREFs of ??_E?$_Ref_count_obj2@VConnectedStandbyHelper@@@std@@UEAAPEAXI@Z @ 0x180129B60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<ConnectedStandbyHelper>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<ConnectedStandbyHelper>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x40uLL);
  return a1;
}
