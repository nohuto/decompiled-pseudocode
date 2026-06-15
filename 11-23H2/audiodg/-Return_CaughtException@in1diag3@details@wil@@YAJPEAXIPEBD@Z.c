/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140068BE0
 * Callers:
 *     _CAPOProcessingHost::RegisterAPOWithProcessingHost_::_1_::catch$14 @ 0x140034716 (_CAPOProcessingHost--RegisterAPOWithProcessingHost_--_1_--catch$14.c)
 *     _CSubmixImpl::OnConnectedToStream_::_1_::catch$13 @ 0x140034A27 (_CSubmixImpl--OnConnectedToStream_--_1_--catch$13.c)
 *     _CAPOProcessingHost::RegisterAPONotifications_::_1_::catch$31 @ 0x140036724 (_CAPOProcessingHost--RegisterAPONotifications_--_1_--catch$31.c)
 *     _CAPOProcessingHost::AddDeviceOrientationNotificationClient_::_1_::catch$0 @ 0x14006C11F (_CAPOProcessingHost--AddDeviceOrientationNotificationClient_--_1_--catch$0.c)
 *     _CAPOProcessingHost::GetAudioSystemEffectPropertyChangeNotificationHandler_::_1_::catch$22 @ 0x14006C721 (_CAPOProcessingHost--GetAudioSystemEffectPropertyChangeNotificationHandler_--_1_--catch$22.c)
 *     _CAPOProcessingHost::GetEndpointNotificationHandler_::_1_::catch$24 @ 0x14006CEA3 (_CAPOProcessingHost--GetEndpointNotificationHandler_--_1_--catch$24.c)
 *     _CAPOProcessingHost::GetMicBoostNotificationHandler_::_1_::catch$24 @ 0x14006D2FD (_CAPOProcessingHost--GetMicBoostNotificationHandler_--_1_--catch$24.c)
 *     _CAPOProcessingHostObject::StartSendingNotifications_::_1_::catch$10 @ 0x140070465 (_CAPOProcessingHostObject--StartSendingNotifications_--_1_--catch$10.c)
 *     _CAPOEndpointNotificationsDelegator::RuntimeClassInitialize_::_1_::catch$2 @ 0x140072801 (_CAPOEndpointNotificationsDelegator--RuntimeClassInitialize_--_1_--catch$2.c)
 *     _CAudioSystemEffectsPropertyChangeNotificationsDelegator::RuntimeClassInitialize_::_1_::catch$2 @ 0x1400734E5 (_CAudioSystemEffectsPropertyChangeNotificationsDelegator--RuntimeClassInitialize_--_1_--catch$2.c)
 *     _CAudioSystemEffectsPropertyChangeNotificationsHandler::RuntimeClassInitialize_::_1_::catch$0 @ 0x140073581 (_CAudioSystemEffectsPropertyChangeNotificationsHandler--RuntimeClassInitialize_--_1_--catch$0.c)
 *     _CRTThreadManager::GetApoWorkQueueId_::_1_::catch$17 @ 0x140074BE7 (_CRTThreadManager--GetApoWorkQueueId_--_1_--catch$17.c)
 *     _CDeviceOrientationNotificationsHandler::AddNotificationClient_::_1_::catch$12 @ 0x140076DF7 (_CDeviceOrientationNotificationsHandler--AddNotificationClient_--_1_--catch$12.c)
 *     _CMicBoostNotificationsHandler::AddNotificationClient_::_1_::catch$12 @ 0x1400780E7 (_CMicBoostNotificationsHandler--AddNotificationClient_--_1_--catch$12.c)
 *     _CMicBoostNotificationsDelegator::RuntimeClassInitialize_::_1_::catch$2 @ 0x140078699 (_CMicBoostNotificationsDelegator--RuntimeClassInitialize_--_1_--catch$2.c)
 *     _CBridgeSourceEndpoint::AddBridgeSourceEndpointConsumer_::_1_::catch$13 @ 0x1400796E7 (_CBridgeSourceEndpoint--AddBridgeSourceEndpointConsumer_--_1_--catch$13.c)
 *     _CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::catch$6 @ 0x14009E5BC (_CSpatialCrossProcessBaseEndpoint--InitializeCPMemory_--_1_--catch$6.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x140066F34 (--$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<1>((int)this, (int)a2, a3);
}
