/*
 * XREFs of ?AddRef@GestureServices@@UEAAKXZ @ 0x180060340
 * Callers:
 *     ?AddRef@GestureServices@@W7EAAKXZ @ 0x180067DF0 (-AddRef@GestureServices@@W7EAAKXZ.c)
 *     ?AddRef@GestureServices@@WDI@EAAKXZ @ 0x180067E10 (-AddRef@GestureServices@@WDI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall GestureServices::AddRef(BamoInputObserverManagerPrincipal *this)
{
  return BamoInputObserverManagerPrincipal::AddRef(this);
}
