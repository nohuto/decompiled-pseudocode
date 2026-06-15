/*
 * XREFs of ??_G?$_Ref_count_obj2@Voperation_guard@wil@@@std@@UEAAPEAXI@Z @ 0x1800F1FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<wil::operation_guard>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<wil::operation_guard>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
