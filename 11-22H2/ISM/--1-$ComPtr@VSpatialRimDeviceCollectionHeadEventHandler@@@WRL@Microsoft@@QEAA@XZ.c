/*
 * XREFs of ??1?$ComPtr@VSpatialRimDeviceCollectionHeadEventHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DDE08
 * Callers:
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$6 @ 0x18007FE1B (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$6.c)
 *     _Microsoft::WRL::Details::Make_SpectrumListener_MPCRawInputProvider____::_1_::dtor$0 @ 0x1800DD543 (_Microsoft--WRL--Details--Make_SpectrumListener_MPCRawInputProvider____--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<SpatialRimDeviceCollectionHeadEventHandler>::~ComPtr<SpatialRimDeviceCollectionHeadEventHandler>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease(a1);
}
