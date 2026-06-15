/*
 * XREFs of ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180111BB0
 * Callers:
 *     ServiceDeviceEvent @ 0x180008F34 (ServiceDeviceEvent.c)
 *     _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::catch$8 @ 0x18007BA7F (_CPdcActivationClient--AcquirePdcTimerActivation_--_1_--catch$8.c)
 *     _CSebNotifier::AcquireSebReference_::_1_::catch$15 @ 0x18007BC42 (_CSebNotifier--AcquireSebReference_--_1_--catch$15.c)
 *     _CXvmPowerReferenceManager::AcquirePowerReference_::_1_::catch$14 @ 0x18011A1A0 (_CXvmPowerReferenceManager--AcquirePowerReference_--_1_--catch$14.c)
 *     _CExclusiveModeListener::OnHoloshellStateChange_::_1_::catch$3 @ 0x18013AEC1 (_CExclusiveModeListener--OnHoloshellStateChange_--_1_--catch$3.c)
 * Callees:
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x1800095B8 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  unsigned int v4; // ebx
  wil::details *v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = (unsigned int)a4;
  LODWORD(v6) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<2>((__int64)this, (int)a2, a3, 0LL, 0LL, retaddr, v6);
  return v4;
}
