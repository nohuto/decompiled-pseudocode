/*
 * XREFs of ??_E?$_Ref_count_obj2@UViewEventRegistration@@@std@@UEAAPEAXI@Z @ 0x180098550
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<ViewEventRegistration>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<ViewEventRegistration>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x38uLL);
  return a1;
}
