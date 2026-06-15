/*
 * XREFs of ??_E?$_Ref_count_obj2@VCSerialWorkQueue@@@std@@UEAAPEAXI@Z @ 0x140067C80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<CSerialWorkQueue>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<CSerialWorkQueue>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
