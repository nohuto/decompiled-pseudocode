/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140061098
 * Callers:
 *     _GetModuleName_::_1_::catch$15 @ 0x14003947D (_GetModuleName_--_1_--catch$15.c)
 *     _GetCompositeModuleInfo_::_1_::catch$36 @ 0x140039C21 (_GetCompositeModuleInfo_--_1_--catch$36.c)
 *     _GetCompositeModuleInfo_::_1_::catch$37 @ 0x140039C5E (_GetCompositeModuleInfo_--_1_--catch$37.c)
 *     _GetCompositeModuleInfo_::_1_::catch$38 @ 0x140039C9B (_GetCompositeModuleInfo_--_1_--catch$38.c)
 *     _GetCompositeModuleInfo_::_1_::catch$39 @ 0x140039CD8 (_GetCompositeModuleInfo_--_1_--catch$39.c)
 *     _GetClsidsFromVar_::_1_::catch$4 @ 0x14006105D (_GetClsidsFromVar_--_1_--catch$4.c)
 *     _CAPOEndpointNotificationsHandler::AddEndpointPropertyChangeNotificationClient_::_1_::catch$12 @ 0x1400696AC (_CAPOEndpointNotificationsHandler--AddEndpointPropertyChangeNotificationClient_--_1_--catch$12.c)
 *     _CAPOEndpointNotificationsHandler::AddEndpointVolumeNotificationClient_::_1_::catch$12 @ 0x1400697CA (_CAPOEndpointNotificationsHandler--AddEndpointVolumeNotificationClient_--_1_--catch$12.c)
 *     _CAudioSystemEffectsPropertyChangeNotificationsHandler::AddNotificationClient_::_1_::catch$12 @ 0x14006A803 (_CAudioSystemEffectsPropertyChangeNotificationsHandler--AddNotificationClient_--_1_--catch$12.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x14005FC68 (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<2>((int)this, (int)a2, a3);
}
