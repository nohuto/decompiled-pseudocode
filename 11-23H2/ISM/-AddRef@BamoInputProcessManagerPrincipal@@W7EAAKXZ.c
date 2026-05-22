/*
 * XREFs of ?AddRef@BamoInputProcessManagerPrincipal@@W7EAAKXZ @ 0x180065B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoInputProcessManagerPrincipal::AddRef(__int64 a1)
{
  return BamoInputObserverManagerPrincipal::AddRef((BamoInputObserverManagerPrincipal *)(a1 - 8));
}
