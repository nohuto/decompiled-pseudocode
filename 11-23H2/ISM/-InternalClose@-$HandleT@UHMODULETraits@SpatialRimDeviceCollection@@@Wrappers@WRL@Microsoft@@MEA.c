/*
 * XREFs of ?InternalClose@?$HandleT@UHMODULETraits@SpatialRimDeviceCollection@@@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x1800D9770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall Microsoft::WRL::Wrappers::HandleT<SpatialRimDeviceCollection::HMODULETraits>::InternalClose(__int64 a1)
{
  FreeLibrary(*(HMODULE *)(a1 + 8));
  return 1;
}
