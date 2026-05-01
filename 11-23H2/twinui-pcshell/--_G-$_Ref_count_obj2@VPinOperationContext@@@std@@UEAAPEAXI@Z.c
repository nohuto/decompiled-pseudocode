/*
 * XREFs of ??_G?$_Ref_count_obj2@VPinOperationContext@@@std@@UEAAPEAXI@Z @ 0x18069F360
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<PinOperationContext>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<PinOperationContext>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
