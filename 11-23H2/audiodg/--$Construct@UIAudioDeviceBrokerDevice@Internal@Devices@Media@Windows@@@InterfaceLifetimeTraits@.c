/*
 * XREFs of ??$Construct@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAU23456@@Z @ 0x1400225E0
 * Callers:
 *     ??$?0PEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@?$AutoValue@PEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@@XWinRT@@QEAA@AEBQEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAJ@Z @ 0x140022540 (--$-0PEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@-$AutoValue@PEAUIAudioDeviceB.c)
 *     ?GetAt@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAudioDeviceBrokerDevice@2Devices@Media@5@@Z @ 0x1400242A0 (-GetAt@-$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U-$DefaultEqualityPr.c)
 *     ?GetMany@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIAudioDeviceBrokerDevice@2Devices@Media@5@PEAI@Z @ 0x1400858C0 (-GetMany@-$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U-$DefaultEquality.c)
 *     ?IndexOf@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIAudioDeviceBrokerDevice@2Devices@Media@5@PEAIPEAE@Z @ 0x140086FD0 (-IndexOf@-$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U-$DefaultEquality.c)
 *     ?ReplaceAll@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAudioDeviceBrokerDevice@2Devices@Media@5@@Z @ 0x14008B7B0 (-ReplaceAll@-$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U-$DefaultEqual.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::InterfaceLifetimeTraits::Construct<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return 0LL;
}
