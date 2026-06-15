/*
 * XREFs of ??1?$ComPtr@VAudioDeviceBroker@Internal@Devices@Media@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1400736FC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Media::Devices::Internal::AudioDeviceBroker_Windows::Media::Devices::Internal::IAudioDeviceBroker_void___&__::_1_::dtor$2 @ 0x140039133 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Media--Devices--Internal--Audi_ea_140039133.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14002AB60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBroke.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Media::Devices::Internal::AudioDeviceBroker>::~ComPtr<Windows::Media::Devices::Internal::AudioDeviceBroker>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
