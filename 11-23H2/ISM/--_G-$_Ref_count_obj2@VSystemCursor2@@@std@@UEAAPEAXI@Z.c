/*
 * XREFs of ??_G?$_Ref_count_obj2@VSystemCursor2@@@std@@UEAAPEAXI@Z @ 0x180104680
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<SystemCursor2>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<SystemCursor2>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
