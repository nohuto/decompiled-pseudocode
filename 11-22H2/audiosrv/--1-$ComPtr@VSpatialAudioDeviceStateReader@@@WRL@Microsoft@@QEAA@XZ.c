/*
 * XREFs of ??1?$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@QEAA@XZ @ 0x180144F80
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioDeviceStateWriter_SpatialAudioDeviceStateWriter_unsigned_short_const___&_IPropertyStore___&__::_1_::dtor$1 @ 0x180079DDD (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioDeviceStateWriter_SpatialAu_ea_180079DDD.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioDeviceStateReader_SpatialAudioDeviceStateReader_unsigned_short_const___&_IPropertyStore___&__::_1_::dtor$1 @ 0x18007ADA8 (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioDeviceStateReader_SpatialAudioDeviceStat.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::~ComPtr<SpatialAudioDeviceStateReader>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease(a1);
}
