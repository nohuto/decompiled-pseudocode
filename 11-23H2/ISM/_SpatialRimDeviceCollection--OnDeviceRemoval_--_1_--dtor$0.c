/*
 * XREFs of _SpatialRimDeviceCollection::OnDeviceRemoval_::_1_::dtor$0 @ 0x1800DA579
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SpatialRimDeviceCollection::OnDeviceRemoval_::_1_::dtor_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  SpatialRimDeviceCollectionCallbacks::~SpatialRimDeviceCollectionCallbacks(
    (SpatialRimDeviceCollectionCallbacks *)(a2 + 32),
    a2,
    a3,
    a4);
}
