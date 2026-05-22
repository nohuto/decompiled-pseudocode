/*
 * XREFs of ??_G?$_Ref_count_obj2@VSharedTargetWithHandle@SystemCursors@@@std@@UEAAPEAXI@Z @ 0x180113180
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<SystemCursors::SharedTargetWithHandle>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_obj2<SystemCursors::SharedTargetWithHandle>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
