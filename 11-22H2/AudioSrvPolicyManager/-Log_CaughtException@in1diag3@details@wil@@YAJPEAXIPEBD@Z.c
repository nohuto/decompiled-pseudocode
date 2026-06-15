/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180027E08
 * Callers:
 *     _CApplication::NotifyVolumePolicyChange_::_1_::catch$6 @ 0x180049260 (_CApplication--NotifyVolumePolicyChange_--_1_--catch$6.c)
 *     _CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint_::_1_::catch$10 @ 0x180049796 (_CStreamClassPolicyGainsWrapper--GetStreamClassPolicyGainsForEndpoint_--_1_--catch$10.c)
 *     __lambda_1c9ff73393079898664ba9c0b1342f4a_::operator()_::_1_::catch$7 @ 0x18004AD14 (__lambda_1c9ff73393079898664ba9c0b1342f4a_--operator()_--_1_--catch$7.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800240CC (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<2>((int)this, (int)a2, a3);
}
