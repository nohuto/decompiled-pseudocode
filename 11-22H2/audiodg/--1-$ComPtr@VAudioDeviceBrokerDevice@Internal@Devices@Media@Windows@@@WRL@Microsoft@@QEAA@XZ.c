/*
 * XREFs of ??1?$ComPtr@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1400803C4
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x14001B10C (--$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345.c)
 *     ??$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBrokerDevice@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x14001B204 (--$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBroke.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice_Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice_void___&__::_1_::dtor$2 @ 0x140035FFC (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Media--Devices--Internal--Audi_ea_140035FFC.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModulesManager@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1400246D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModul.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice>::~ComPtr<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
