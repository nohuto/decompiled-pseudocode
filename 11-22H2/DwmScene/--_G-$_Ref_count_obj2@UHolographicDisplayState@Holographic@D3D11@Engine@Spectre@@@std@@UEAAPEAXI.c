/*
 * XREFs of ??_G?$_Ref_count_obj2@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@UEAAPEAXI@Z @ 0x1800D8E60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<Spectre::Engine::D3D11::Holographic::HolographicDisplayState>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_obj2<Spectre::Engine::D3D11::Holographic::HolographicDisplayState>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
