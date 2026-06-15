/*
 * XREFs of ??_E?$_Ref_count_obj2@VCXvmPowerReferenceManager@@@std@@UEAAPEAXI@Z @ 0x180104030
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<CXvmPowerReferenceManager>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<CXvmPowerReferenceManager>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
