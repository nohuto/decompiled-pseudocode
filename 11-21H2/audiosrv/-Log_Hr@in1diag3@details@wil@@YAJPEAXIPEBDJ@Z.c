/*
 * XREFs of ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180103150
 * Callers:
 *     _CSebNotifier::AcquireSebReference_::_1_::catch$18 @ 0x18006E870 (_CSebNotifier--AcquireSebReference_--_1_--catch$18.c)
 *     _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::catch$26 @ 0x18006E960 (_CPdcActivationClient--AcquirePdcTimerActivation_--_1_--catch$26.c)
 *     _CXvmPowerReferenceManager::AcquirePowerReference_::_1_::catch$14 @ 0x1801042A0 (_CXvmPowerReferenceManager--AcquirePowerReference_--_1_--catch$14.c)
 *     _CExclusiveModeListener::OnHoloshellStateChange_::_1_::catch$3 @ 0x18012D631 (_CExclusiveModeListener--OnHoloshellStateChange_--_1_--catch$3.c)
 *     ServiceDeviceEvent @ 0x18015110C (ServiceDeviceEvent.c)
 * Callees:
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x1800BDC6C (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
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
