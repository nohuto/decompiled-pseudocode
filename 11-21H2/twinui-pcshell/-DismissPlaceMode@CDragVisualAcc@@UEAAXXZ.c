/*
 * XREFs of ?DismissPlaceMode@CDragVisualAcc@@UEAAXXZ @ 0x18053B130
 * Callers:
 *     <none>
 * Callees:
 *     ?_DismissPlaceModeButtons@CDragVisualAcc@@AEAAXXZ @ 0x18053C7A4 (-_DismissPlaceModeButtons@CDragVisualAcc@@AEAAXXZ.c)
 */

void __fastcall CDragVisualAcc::DismissPlaceMode(IRawElementProviderSimple *this)
{
  CDragVisualAcc::_DismissPlaceModeButtons(this - 4);
  LODWORD(this[2].lpVtbl) = 0;
}
