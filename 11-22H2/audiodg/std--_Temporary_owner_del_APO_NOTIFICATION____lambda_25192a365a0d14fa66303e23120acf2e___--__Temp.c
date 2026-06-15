/*
 * XREFs of std::_Temporary_owner_del_APO_NOTIFICATION____lambda_25192a365a0d14fa66303e23120acf2e___::__Temporary_owner_del_APO_NOTIFICATION____lambda_25192a365a0d14fa66303e23120acf2e___ @ 0x14002D500
 * Callers:
 *     ?QueueInitialMicBoostNotification@@YAJAEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14002D6AC (-QueueInitialMicBoostNotification@@YAJAEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR@@PE.c)
 *     _QueueInitialMicBoostNotification_::_1_::dtor$3 @ 0x14002D8C8 (_QueueInitialMicBoostNotification_--_1_--dtor$3.c)
 * Callees:
 *     ?CleanupApoNotification@@YAXPEAUAPO_NOTIFICATION@@@Z @ 0x14006F82C (-CleanupApoNotification@@YAXPEAUAPO_NOTIFICATION@@@Z.c)
 */

void __fastcall std::_Temporary_owner_del_APO_NOTIFICATION____lambda_25192a365a0d14fa66303e23120acf2e___::__Temporary_owner_del_APO_NOTIFICATION____lambda_25192a365a0d14fa66303e23120acf2e___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
    CleanupApoNotification(*(struct APO_NOTIFICATION **)a1);
}
