/*
 * XREFs of ??1?$ComPtr@VSpatialRimDeviceCollectionHeadEventHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x1800CEB88
 * Callers:
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$6 @ 0x18006C211 (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$6.c)
 *     _Microsoft::WRL::Details::Make_SpectrumListener_MPCRawInputProvider____::_1_::dtor$0 @ 0x1800CE2C3 (_Microsoft--WRL--Details--Make_SpectrumListener_MPCRawInputProvider____--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<SpatialRimDeviceCollectionHeadEventHandler>::~ComPtr<SpatialRimDeviceCollectionHeadEventHandler>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease(a1);
}
