/*
 * XREFs of ??_G?$_Ref_count_obj2@VDuckingDescriptor@@@std@@UEAAPEAXI@Z @ 0x180020F10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<DuckingDescriptor>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<DuckingDescriptor>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
