/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1400663FC
 * Callers:
 *     _CAPOProcessingHost::RegisterAPOWithProcessingHost_::_1_::catch$14 @ 0x140038D9F (_CAPOProcessingHost--RegisterAPOWithProcessingHost_--_1_--catch$14.c)
 *     _CAPOProcessingHost::RegisterAPONotifications_::_1_::catch$25 @ 0x14003962C (_CAPOProcessingHost--RegisterAPONotifications_--_1_--catch$25.c)
 *     _CAPOProcessingHost::GetAudioSystemEffectPropertyChangeNotificationHandler_::_1_::catch$14 @ 0x140065878 (_CAPOProcessingHost--GetAudioSystemEffectPropertyChangeNotificationHandler_--_1_--catch$14.c)
 *     _CAPOProcessingHost::GetEndpointNotificationHandler_::_1_::catch$17 @ 0x140065BDE (_CAPOProcessingHost--GetEndpointNotificationHandler_--_1_--catch$17.c)
 *     _CAPOProcessingHostObject::StartSendingNotifications_::_1_::catch$10 @ 0x140068554 (_CAPOProcessingHostObject--StartSendingNotifications_--_1_--catch$10.c)
 *     _CAPOEndpointNotificationsDelegator::RuntimeClassInitialize_::_1_::catch$2 @ 0x14006A1B1 (_CAPOEndpointNotificationsDelegator--RuntimeClassInitialize_--_1_--catch$2.c)
 *     _CAPOEndpointNotificationsHandler::RuntimeClassInitialize_::_1_::catch$0 @ 0x14006A238 (_CAPOEndpointNotificationsHandler--RuntimeClassInitialize_--_1_--catch$0.c)
 *     _CAudioSystemEffectsPropertyChangeNotificationsDelegator::RuntimeClassInitialize_::_1_::catch$2 @ 0x14006AF09 (_CAudioSystemEffectsPropertyChangeNotificationsDelegator--RuntimeClassInitialize_--_1_--catch$2.c)
 *     _CAudioSystemEffectsPropertyChangeNotificationsHandler::RuntimeClassInitialize_::_1_::catch$0 @ 0x14006AFA5 (_CAudioSystemEffectsPropertyChangeNotificationsHandler--RuntimeClassInitialize_--_1_--catch$0.c)
 *     _CRTThreadManager::GetApoWorkQueueId_::_1_::catch$15 @ 0x14006C4B9 (_CRTThreadManager--GetApoWorkQueueId_--_1_--catch$15.c)
 *     _CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::catch$6 @ 0x140092982 (_CSpatialCrossProcessBaseEndpoint--InitializeCPMemory_--_1_--catch$6.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x140064378 (--$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<1>((int)this, (int)a2, a3);
}
