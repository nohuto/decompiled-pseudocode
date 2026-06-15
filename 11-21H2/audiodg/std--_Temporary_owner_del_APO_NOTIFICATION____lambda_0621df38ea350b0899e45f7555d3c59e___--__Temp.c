/*
 * XREFs of std::_Temporary_owner_del_APO_NOTIFICATION____lambda_0621df38ea350b0899e45f7555d3c59e___::__Temporary_owner_del_APO_NOTIFICATION____lambda_0621df38ea350b0899e45f7555d3c59e___ @ 0x140064CEC
 * Callers:
 *     _QueueInitialEnhancementsEnabledNotification_::_1_::dtor$2 @ 0x1400661D4 (_QueueInitialEnhancementsEnabledNotification_--_1_--dtor$2.c)
 *     _QueueInitialVolumeNotification_::_1_::dtor$1 @ 0x140066333 (_QueueInitialVolumeNotification_--_1_--dtor$1.c)
 *     _CAPOEndpointNotificationsHandler::OnPropertyValueChanged_::_1_::dtor$2 @ 0x140069D7E (_CAPOEndpointNotificationsHandler--OnPropertyValueChanged_--_1_--dtor$2.c)
 * Callees:
 *     ?CleanupApoNotification@@YAXPEAUAPO_NOTIFICATION@@@Z @ 0x140067CE8 (-CleanupApoNotification@@YAXPEAUAPO_NOTIFICATION@@@Z.c)
 */

void __fastcall std::_Temporary_owner_del_APO_NOTIFICATION____lambda_0621df38ea350b0899e45f7555d3c59e___::__Temporary_owner_del_APO_NOTIFICATION____lambda_0621df38ea350b0899e45f7555d3c59e___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
    CleanupApoNotification(*(struct APO_NOTIFICATION **)a1);
}
