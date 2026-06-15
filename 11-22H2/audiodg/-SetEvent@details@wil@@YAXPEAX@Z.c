/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1400260A0
 * Callers:
 *     ?Resume@CAudioPump@@UEAAJXZ @ 0x140008EC0 (-Resume@CAudioPump@@UEAAJXZ.c)
 *     ?Pause@CAudioPump@@UEAAJXZ @ 0x14000A270 (-Pause@CAudioPump@@UEAAJXZ.c)
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14000B480 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?CheckForPause@CAudioPump@@AEAAXXZ @ 0x140038922 (-CheckForPause@CAudioPump@@AEAAXXZ.c)
 *     ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x140038B10 (-InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     _lambda_10c7ce318882e0e942d95a651b89d589_::operator() @ 0x140050520 (_lambda_10c7ce318882e0e942d95a651b89d589_--operator().c)
 *     ?Run@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x140052094 (-Run@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 *     ?SignalAndWaitForThread@CAudioPump@@AEAAXXZ @ 0x140073E30 (-SignalAndWaitForThread@CAudioPump@@AEAAXXZ.c)
 *     ?CMModulesNotificationCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x1400822C0 (-CMModulesNotificationCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAKPEAUHC.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x14004EBA4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  unsigned int v2; // r8d
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x92D, v2, v3);
}
