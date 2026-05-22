/*
 * XREFs of ?Destroy@SuperWetInkVisual@Internal@Composition@UI@Windows@@UEAAXXZ @ 0x180184B50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetSuperWetInkSource@SuperWetInkVisual@Internal@Composition@UI@Windows@@QEAAXPEAVCompositionSuperWetInkSource@2345@@Z @ 0x180184B74 (-SetSuperWetInkSource@SuperWetInkVisual@Internal@Composition@UI@Windows@@QEAAXPEAVCompositionSup.c)
 */

void __fastcall Windows::UI::Composition::Internal::SuperWetInkVisual::Destroy(
        Windows::UI::Composition::Internal::SuperWetInkVisual *this)
{
  Windows::UI::Composition::Internal::SuperWetInkVisual::SetSuperWetInkSource(this, 0LL);
  Windows::UI::Composition::Visual::Destroy(this);
}
