/*
 * XREFs of std::_Temporary_owner_del_APO_NOTIFICATION____lambda_d416c8336d3055417b20082a58f2fcdf___::__Temporary_owner_del_APO_NOTIFICATION____lambda_d416c8336d3055417b20082a58f2fcdf___ @ 0x14006B9E8
 * Callers:
 *     _QueueInitialDeviceOrientationNotification_::_1_::dtor$1 @ 0x14006D840 (_QueueInitialDeviceOrientationNotification_--_1_--dtor$1.c)
 *     _QueueInitialEnhancementsEnabledNotification_::_1_::dtor$2 @ 0x14006DA01 (_QueueInitialEnhancementsEnabledNotification_--_1_--dtor$2.c)
 *     _QueueInitialVolumeNotification_::_1_::dtor$1 @ 0x14006DBC5 (_QueueInitialVolumeNotification_--_1_--dtor$1.c)
 *     _CAPOEndpointNotificationsHandler::OnNotifyVolume2_::_1_::dtor$5 @ 0x140071FE6 (_CAPOEndpointNotificationsHandler--OnNotifyVolume2_--_1_--dtor$5.c)
 *     _CAPOEndpointNotificationsHandler::OnNotifyVolume_::_1_::dtor$5 @ 0x1400721D3 (_CAPOEndpointNotificationsHandler--OnNotifyVolume_--_1_--dtor$5.c)
 *     _CAPOEndpointNotificationsHandler::OnPropertyValueChanged_::_1_::dtor$2 @ 0x1400723B5 (_CAPOEndpointNotificationsHandler--OnPropertyValueChanged_--_1_--dtor$2.c)
 * Callees:
 *     ?CleanupApoNotification@@YAXPEAUAPO_NOTIFICATION@@@Z @ 0x14006F82C (-CleanupApoNotification@@YAXPEAUAPO_NOTIFICATION@@@Z.c)
 */

void __fastcall std::_Temporary_owner_del_APO_NOTIFICATION____lambda_d416c8336d3055417b20082a58f2fcdf___::__Temporary_owner_del_APO_NOTIFICATION____lambda_d416c8336d3055417b20082a58f2fcdf___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
    CleanupApoNotification(*(struct APO_NOTIFICATION **)a1);
}
