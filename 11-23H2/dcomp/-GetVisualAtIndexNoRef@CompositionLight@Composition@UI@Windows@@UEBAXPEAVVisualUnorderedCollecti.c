/*
 * XREFs of ?GetVisualAtIndexNoRef@CompositionLight@Composition@UI@Windows@@UEBAXPEAVVisualUnorderedCollectionImpl@234@IPEAPEAVVisual@234@@Z @ 0x18018A9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::UI::Composition::CompositionLight::GetVisualAtIndexNoRef(
        Windows::UI::Composition::CompositionLight *this,
        struct Windows::UI::Composition::VisualUnorderedCollectionImpl *a2,
        unsigned int a3,
        struct Windows::UI::Composition::Visual **a4)
{
  *a4 = 0LL;
  if ( a3 < *((_DWORD *)a2 + 6) )
    *a4 = *(struct Windows::UI::Composition::Visual **)(*(_QWORD *)a2 + 8LL * a3);
}
