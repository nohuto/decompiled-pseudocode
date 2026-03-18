/*
 * XREFs of ?NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@BFI@EAAXPEBVIDeviceResource@@@Z @ 0x180121AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CD2DBitmapCache::NotifyInvalidResource(__int64 a1, const struct IDeviceResource *a2)
{
  CD2DBitmapCache::NotifyInvalidResource((CD2DBitmapCache *)(a1 - *(int *)(a1 - 4) - 344), a2);
}
