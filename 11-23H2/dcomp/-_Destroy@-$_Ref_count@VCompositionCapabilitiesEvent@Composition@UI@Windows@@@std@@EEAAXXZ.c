/*
 * XREFs of ?_Destroy@?$_Ref_count@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@EEAAXXZ @ 0x18008E3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCompositionCapabilitiesEvent@Composition@UI@Windows@@QEAAPEAXI@Z @ 0x18008E3F0 (--_GCompositionCapabilitiesEvent@Composition@UI@Windows@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::_Ref_count<Windows::UI::Composition::CompositionCapabilitiesEvent>::_Destroy(
        __int64 a1,
        unsigned int a2)
{
  Windows::UI::Composition::CompositionCapabilitiesEvent *v2; // rcx
  void *result; // rax

  v2 = *(Windows::UI::Composition::CompositionCapabilitiesEvent **)(a1 + 16);
  if ( v2 )
    return Windows::UI::Composition::CompositionCapabilitiesEvent::`scalar deleting destructor'(v2, a2);
  return result;
}
