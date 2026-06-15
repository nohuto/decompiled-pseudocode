/*
 * XREFs of ?QueryInterface@AudioDeviceModule@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140089BA0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModule@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140032450 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_140032450.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModule@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140032470 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_140032470.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Media::Devices::AudioDeviceModule::QueryInterface(
        __int64 this,
        const struct _GUID *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::IAudioDeviceModule,Microsoft::WRL::FtmBase>>(
           this,
           a2,
           a3);
}
