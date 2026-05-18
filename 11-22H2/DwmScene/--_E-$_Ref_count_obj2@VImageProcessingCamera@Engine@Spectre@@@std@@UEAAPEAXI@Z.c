/*
 * XREFs of ??_E?$_Ref_count_obj2@VImageProcessingCamera@Engine@Spectre@@@std@@UEAAPEAXI@Z @ 0x180072090
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<Spectre::Engine::ImageProcessingCamera>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingCamera>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
