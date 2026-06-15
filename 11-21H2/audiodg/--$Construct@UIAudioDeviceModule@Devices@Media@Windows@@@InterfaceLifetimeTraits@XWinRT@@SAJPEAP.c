/*
 * XREFs of ??$Construct@UIAudioDeviceModule@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIAudioDeviceModule@Devices@Media@Windows@@PEAU2345@@Z @ 0x14006FF84
 * Callers:
 *     ??$?0PEAUIAudioDeviceModule@Devices@Media@Windows@@@?$AutoValue@PEAUIAudioDeviceModule@Devices@Media@Windows@@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@@XWinRT@@QEAA@AEBQEAUIAudioDeviceModule@Devices@Media@Windows@@PEAJ@Z @ 0x14006ED9C (--$-0PEAUIAudioDeviceModule@Devices@Media@Windows@@@-$AutoValue@PEAUIAudioDeviceModule@Devices@M.c)
 *     ?GetAt@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAudioDeviceModule@Devices@Media@5@@Z @ 0x1400770E0 (-GetAt@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAud.c)
 *     ?GetMany@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIAudioDeviceModule@Devices@Media@5@PEAI@Z @ 0x1400788A0 (-GetMany@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVA.c)
 *     ?IndexOf@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIAudioDeviceModule@Devices@Media@5@PEAIPEAE@Z @ 0x140079FF0 (-IndexOf@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVA.c)
 *     ?ReplaceAll@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAudioDeviceModule@Devices@Media@5@@Z @ 0x14007E550 (-ReplaceAll@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PE.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::InterfaceLifetimeTraits::Construct<Windows::Media::Devices::IAudioDeviceModule>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return 0LL;
}
