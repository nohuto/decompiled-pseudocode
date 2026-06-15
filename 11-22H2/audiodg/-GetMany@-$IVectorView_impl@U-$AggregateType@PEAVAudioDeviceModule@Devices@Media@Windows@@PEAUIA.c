/*
 * XREFs of ?GetMany@?$IVectorView_impl@U?$AggregateType@PEAVAudioDeviceModule@Devices@Media@Windows@@PEAUIAudioDeviceModule@234@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIAudioDeviceModule@Devices@Media@4@PEAI@Z @ 0x140084E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Foundation::Collections::IVectorView_impl<Windows::Foundation::Internal::AggregateType<Windows::Media::Devices::AudioDeviceModule *,Windows::Media::Devices::IAudioDeviceModule *>,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        _DWORD *a5)
{
  return Windows::Foundation::Collections::Detail::_VectorGetMany<Windows::Foundation::Collections::IVectorView_impl<Windows::Foundation::Internal::AggregateType<Windows::Media::Devices::AudioDeviceModule *,Windows::Media::Devices::IAudioDeviceModule *>,1>,Windows::Media::Devices::IAudioDeviceModule *>(
           a1,
           a2,
           a3,
           a4,
           a5);
}
