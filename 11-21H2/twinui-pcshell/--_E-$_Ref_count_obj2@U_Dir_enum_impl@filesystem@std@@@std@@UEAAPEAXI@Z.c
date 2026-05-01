/*
 * XREFs of ??_E?$_Ref_count_obj2@U_Dir_enum_impl@filesystem@std@@@std@@UEAAPEAXI@Z @ 0x180584F20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<std::filesystem::_Dir_enum_impl>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_obj2<std::filesystem::_Dir_enum_impl>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
