/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1400826E8
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x14001B10C (--$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345.c)
 *     ??$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBrokerDevice@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x14001B204 (--$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBroke.c)
 *     ?QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001B4D0 (-QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModule@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModule@Devices@Media@Windows@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x14007C704 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModu.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIModuleCommandResult@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIModuleCommandResult@Devices@Media@Windows@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x14007C7AC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIModuleCommandRe.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x14007C8F4 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBrok.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x14007C99C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModu.c)
 *     ?QueryInterface@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140089A40 (-QueryInterface@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140089AF0 (-QueryInterface@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModulesManager@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140089BB0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_140089BB0.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x140017FD8 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140082730 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

int __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  void **v2; // r8
  __int64 v3; // r9
  const struct _GUID *v4; // r10
  int result; // eax

  if ( InlineIsEqualGUID(a2, &GUID_00000038_0000_0000_c000_000000000046) )
  {
    *v2 = (void *)v3;
    return 0;
  }
  else
  {
    result = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v3 + 8), v4, v2);
    if ( result == -2147467262 )
      return -2147467262;
  }
  return result;
}
