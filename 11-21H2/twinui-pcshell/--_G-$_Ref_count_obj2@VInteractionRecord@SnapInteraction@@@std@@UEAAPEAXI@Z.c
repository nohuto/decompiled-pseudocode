/*
 * XREFs of ??_G?$_Ref_count_obj2@VInteractionRecord@SnapInteraction@@@std@@UEAAPEAXI@Z @ 0x180159FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<SnapInteraction::InteractionRecord>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_obj2<SnapInteraction::InteractionRecord>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x40uLL);
  return a1;
}
