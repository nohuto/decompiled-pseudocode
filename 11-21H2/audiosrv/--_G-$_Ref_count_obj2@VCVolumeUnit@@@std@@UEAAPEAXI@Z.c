/*
 * XREFs of ??_G?$_Ref_count_obj2@VCVolumeUnit@@@std@@UEAAPEAXI@Z @ 0x1800C2DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<CVolumeUnit>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<CVolumeUnit>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
