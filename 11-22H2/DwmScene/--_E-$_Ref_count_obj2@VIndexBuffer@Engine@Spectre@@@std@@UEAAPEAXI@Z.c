/*
 * XREFs of ??_E?$_Ref_count_obj2@VIndexBuffer@Engine@Spectre@@@std@@UEAAPEAXI@Z @ 0x180047DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<Spectre::Engine::IndexBuffer>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_obj2<Spectre::Engine::IndexBuffer>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
