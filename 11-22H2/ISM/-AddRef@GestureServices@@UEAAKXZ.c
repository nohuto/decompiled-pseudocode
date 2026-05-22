/*
 * XREFs of ?AddRef@GestureServices@@UEAAKXZ @ 0x180072B70
 * Callers:
 *     ?AddRef@GestureServices@@W7EAAKXZ @ 0x18007B950 (-AddRef@GestureServices@@W7EAAKXZ.c)
 *     ?AddRef@GestureServices@@WDI@EAAKXZ @ 0x18007B970 (-AddRef@GestureServices@@WDI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall GestureServices::AddRef(BamoInputObserverManagerPrincipal *this)
{
  return BamoInputObserverManagerPrincipal::AddRef(this);
}
