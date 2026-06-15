/*
 * XREFs of ??$ActivateInstance@UIDataWriter@Streams@Storage@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIDataWriter@Streams@Storage@1@@Z @ 0x14007BE2C
 * Callers:
 *     ?CMModulesNotificationCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x1400822C0 (-CMModulesNotificationCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAKPEAUHC.c)
 *     ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x140088CA0 (-OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@In.c)
 *     ?SendCommand@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@PEAUIBuffer@Streams@Storage@5@PEAPEAU7895@@Z @ 0x14008BE90 (-SendCommand@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule.c)
 * Callees:
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Windows::Storage::Streams::IDataWriter>(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // ebx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = RoActivateInstance(a1, &v5);
  if ( v3 >= 0 )
  {
    if ( IsEqualGUID(&GUID_64b89265_d341_4922_b38a_dd4af8808c4e, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *a2 = v5;
    }
    else
    {
      v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v5)(
             v5,
             &GUID_64b89265_d341_4922_b38a_dd4af8808c4e,
             a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  return (unsigned int)v3;
}
