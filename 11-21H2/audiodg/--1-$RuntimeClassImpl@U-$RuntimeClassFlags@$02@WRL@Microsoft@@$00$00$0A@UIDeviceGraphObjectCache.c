/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x14002211C
 * Callers:
 *     ??1CDeviceGraphObjectCache@@MEAA@XZ @ 0x140021FBC (--1CDeviceGraphObjectCache@@MEAA@XZ.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@WRL@Microsoft@@UEAA@XZ @ 0x140068924 (--1-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIDeviceGraphObjectCache@@UIDeviceGrap.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1400689B0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIDeviceGraphObjectCache@@UIDeviceGra.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140022150 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  result = (unsigned __int64)v1 >> 63;
  if ( v1 < 0 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>::Release(2 * v1);
  return result;
}
