/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140068C30
 * Callers:
 *     _CAPOProcessingHost::RegisterAPOWithProcessingHost_::_1_::catch$14 @ 0x140034756 (_CAPOProcessingHost--RegisterAPOWithProcessingHost_--_1_--catch$14.c)
 *     _CSubmixImpl::OnConnectedToStream_::_1_::catch$13 @ 0x140034A67 (_CSubmixImpl--OnConnectedToStream_--_1_--catch$13.c)
 *     _CAPOProcessingHost::RegisterAPONotifications_::_1_::catch$31 @ 0x140036764 (_CAPOProcessingHost--RegisterAPONotifications_--_1_--catch$31.c)
 *     _CAPOProcessingHost::AddDeviceOrientationNotificationClient_::_1_::catch$0 @ 0x14006C16F (_CAPOProcessingHost--AddDeviceOrientationNotificationClient_--_1_--catch$0.c)
 *     _CAPOProcessingHost::GetAudioSystemEffectPropertyChangeNotificationHandler_::_1_::catch$22 @ 0x14006C771 (_CAPOProcessingHost--GetAudioSystemEffectPropertyChangeNotificationHandler_--_1_--catch$22.c)
 *     _CAPOProcessingHost::GetEndpointNotificationHandler_::_1_::catch$24 @ 0x14006CEF3 (_CAPOProcessingHost--GetEndpointNotificationHandler_--_1_--catch$24.c)
 *     _CAPOProcessingHost::GetMicBoostNotificationHandler_::_1_::catch$24 @ 0x14006D34D (_CAPOProcessingHost--GetMicBoostNotificationHandler_--_1_--catch$24.c)
 *     _CAPOProcessingHostObject::StartSendingNotifications_::_1_::catch$10 @ 0x1400704B5 (_CAPOProcessingHostObject--StartSendingNotifications_--_1_--catch$10.c)
 *     _CAPOEndpointNotificationsDelegator::RuntimeClassInitialize_::_1_::catch$2 @ 0x140072851 (_CAPOEndpointNotificationsDelegator--RuntimeClassInitialize_--_1_--catch$2.c)
 *     _CAudioSystemEffectsPropertyChangeNotificationsDelegator::RuntimeClassInitialize_::_1_::catch$2 @ 0x140073535 (_CAudioSystemEffectsPropertyChangeNotificationsDelegator--RuntimeClassInitialize_--_1_--catch$2.c)
 *     _CAudioSystemEffectsPropertyChangeNotificationsHandler::RuntimeClassInitialize_::_1_::catch$0 @ 0x1400735D1 (_CAudioSystemEffectsPropertyChangeNotificationsHandler--RuntimeClassInitialize_--_1_--catch$0.c)
 *     _CRTThreadManager::GetApoWorkQueueId_::_1_::catch$17 @ 0x140074C37 (_CRTThreadManager--GetApoWorkQueueId_--_1_--catch$17.c)
 *     _CDeviceOrientationNotificationsHandler::AddNotificationClient_::_1_::catch$12 @ 0x140076E47 (_CDeviceOrientationNotificationsHandler--AddNotificationClient_--_1_--catch$12.c)
 *     _CMicBoostNotificationsHandler::AddNotificationClient_::_1_::catch$12 @ 0x140078137 (_CMicBoostNotificationsHandler--AddNotificationClient_--_1_--catch$12.c)
 *     _CMicBoostNotificationsDelegator::RuntimeClassInitialize_::_1_::catch$2 @ 0x1400786E9 (_CMicBoostNotificationsDelegator--RuntimeClassInitialize_--_1_--catch$2.c)
 *     _CBridgeSourceEndpoint::AddBridgeSourceEndpointConsumer_::_1_::catch$13 @ 0x140079737 (_CBridgeSourceEndpoint--AddBridgeSourceEndpointConsumer_--_1_--catch$13.c)
 *     _CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::catch$6 @ 0x14009E60C (_CSpatialCrossProcessBaseEndpoint--InitializeCPMemory_--_1_--catch$6.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x140066F84 (--$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<1>((int)this, (int)a2, a3);
}
