/*
 * XREFs of ??_G?$_Ref_count_obj2@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@UEAAPEAXI@Z @ 0x180105320
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<std::wstring>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<std::wstring>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
