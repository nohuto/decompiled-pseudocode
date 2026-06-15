/*
 * XREFs of ??_G?$_Ref_count_obj2@VCCaptureReference@@@std@@UEAAPEAXI@Z @ 0x180119EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<CCaptureReference>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<CCaptureReference>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
