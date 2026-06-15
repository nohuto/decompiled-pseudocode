/*
 * XREFs of ??_G?$_Ref_count_obj2@VEffectPack@@@std@@UEAAPEAXI@Z @ 0x180006410
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<EffectPack>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<EffectPack>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x6F8uLL);
  return a1;
}
