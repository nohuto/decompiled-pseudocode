/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x140039818
 * Callers:
 *     ??1AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAA@XZ @ 0x140080700 (--1AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAA@XZ.c)
 *     ??1AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@MEAA@XZ @ 0x140080850 (--1AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@MEAA@XZ.c)
 *     ??1AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAA@XZ @ 0x140080898 (--1AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAA@XZ.c)
 *     ??1AudioDeviceModule@Devices@Media@Windows@@MEAA@XZ @ 0x140080A30 (--1AudioDeviceModule@Devices@Media@Windows@@MEAA@XZ.c)
 *     ??1AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@MEAA@XZ @ 0x140080AA0 (--1AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@MEAA@XZ.c)
 *     ??1AudioDeviceModulesManager@Devices@Media@Windows@@MEAA@XZ @ 0x140080AF0 (--1AudioDeviceModulesManager@Devices@Media@Windows@@MEAA@XZ.c)
 *     ??1ModuleCommandResult@Devices@Media@Windows@@MEAA@XZ @ 0x140080DAC (--1ModuleCommandResult@Devices@Media@Windows@@MEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1400819F0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIAudioDeviceBrokerChangedEventArgs@I.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001F280 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>(
        __int64 a1,
        volatile int *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
      2 * v3,
      a2);
  return Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease((__int64 *)(a1 + 40));
}
