/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140065DA4
 * Callers:
 *     _GetClsidsFromVar_::_1_::catch$5 @ 0x1400650B9 (_GetClsidsFromVar_--_1_--catch$5.c)
 *     _GetCompositeModuleInfo_::_1_::catch$53 @ 0x14006552B (_GetCompositeModuleInfo_--_1_--catch$53.c)
 *     _GetCompositeModuleInfo_::_1_::catch$54 @ 0x140065586 (_GetCompositeModuleInfo_--_1_--catch$54.c)
 *     _GetCompositeModuleInfo_::_1_::catch$55 @ 0x1400655BD (_GetCompositeModuleInfo_--_1_--catch$55.c)
 *     _GetCompositeModuleInfo_::_1_::catch$56 @ 0x1400655F4 (_GetCompositeModuleInfo_--_1_--catch$56.c)
 *     _GetCompositeModuleInfo_::_1_::catch$57 @ 0x14006562B (_GetCompositeModuleInfo_--_1_--catch$57.c)
 *     _GetModuleName_::_1_::catch$25 @ 0x140065A59 (_GetModuleName_--_1_--catch$25.c)
 *     _CAPOEndpointNotificationsHandler::AddEndpointPropertyChangeNotificationClient_::_1_::catch$12 @ 0x14007193B (_CAPOEndpointNotificationsHandler--AddEndpointPropertyChangeNotificationClient_--_1_--catch$12.c)
 *     _CAPOEndpointNotificationsHandler::AddEndpointVolumeNotificationClient_::_1_::catch$7 @ 0x140071A0E (_CAPOEndpointNotificationsHandler--AddEndpointVolumeNotificationClient_--_1_--catch$7.c)
 *     _CAudioSystemEffectsPropertyChangeNotificationsHandler::AddNotificationClient_::_1_::catch$12 @ 0x140072D93 (_CAudioSystemEffectsPropertyChangeNotificationsHandler--AddNotificationClient_--_1_--catch$12.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x14006409C (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<2>((int)this, (int)a2, a3);
}
