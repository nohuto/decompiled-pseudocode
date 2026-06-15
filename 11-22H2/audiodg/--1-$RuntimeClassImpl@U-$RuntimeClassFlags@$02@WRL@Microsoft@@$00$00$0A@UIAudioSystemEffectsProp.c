/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioSystemEffectsPropertyChangeNotificationClient@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x140038458
 * Callers:
 *     ??1CDeviceOrientationNotificationsHandler@@UEAA@XZ @ 0x14006BD88 (--1CDeviceOrientationNotificationsHandler@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIControlChangeNotify@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x14006BE80 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIControlChangeNotify@@@WRL@Microsoft.c)
 *     ??1CAPOEndpointNotificationsHandler@@UEAA@XZ @ 0x140071650 (--1CAPOEndpointNotificationsHandler@@UEAA@XZ.c)
 *     ??1CAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAA@XZ @ 0x140072B78 (--1CAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAA@XZ.c)
 *     ??1CMicBoostNotificationsHandler@@UEAA@XZ @ 0x140077F20 (--1CMicBoostNotificationsHandler@@UEAA@XZ.c)
 *     ??1?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@MEAA@XZ @ 0x14008056C (--1-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBuffer@Streams.c)
 *     ??1?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@MEAA@XZ @ 0x1400805B4 (--1-$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U-$DefaultEqualityPredic.c)
 *     ??1?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@MEAA@XZ @ 0x1400805FC (--1-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAudioDe.c)
 *     ??1?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@MEAA@XZ @ 0x140080644 (--1-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows.c)
 *     ??_G?$SimpleVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAPEAXI@Z @ 0x140081B40 (--_G-$SimpleVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@V-$Vector@PEAVAudioDeviceMod.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001F280 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>(
        __int64 a1,
        volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 32);
  result = (unsigned __int64)v2 >> 63;
  if ( v2 < 0 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
             2 * v2,
             a2);
  return result;
}
