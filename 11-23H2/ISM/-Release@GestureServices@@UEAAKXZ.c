/*
 * XREFs of ?Release@GestureServices@@UEAAKXZ @ 0x180060E00
 * Callers:
 *     ?Release@GestureServices@@W7EAAKXZ @ 0x180067EB0 (-Release@GestureServices@@W7EAAKXZ.c)
 *     ?Release@GestureServices@@WDI@EAAKXZ @ 0x180067ED0 (-Release@GestureServices@@WDI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall GestureServices::Release(BamoInputSystemPrincipal *this)
{
  return BamoInputSystemPrincipal::Release(this);
}
