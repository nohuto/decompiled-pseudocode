/*
 * XREFs of ??_G?$_Ref_count@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@UEAAPEAXI@Z @ 0x18008E620
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall std::_Ref_count<Windows::UI::Composition::CompositionCapabilitiesEvent>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x18uLL);
  return a1;
}
