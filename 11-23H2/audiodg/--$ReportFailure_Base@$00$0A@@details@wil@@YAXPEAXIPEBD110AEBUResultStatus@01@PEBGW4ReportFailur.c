/*
 * XREFs of ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x14004A3D0
 * Callers:
 *     ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x14004A4EC (--$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_Hr@$00@details@wil@@YAXPEAXIPEBD110J@Z @ 0x14004A59C (--$ReportFailure_Hr@$00@details@wil@@YAXPEAXIPEBD110J@Z.c)
 *     ??$ReportFailure_Win32@$00@details@wil@@YAJPEAXIPEBD110K@Z @ 0x14004FA3C (--$ReportFailure_Win32@$00@details@wil@@YAJPEAXIPEBD110K@Z.c)
 *     ??$ReportFailure_HrMsg@$00@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x14005BEA0 (--$ReportFailure_HrMsg@$00@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 *     ??$ReportFailure_CaughtExceptionCommon@$00@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x140066FB4 (--$ReportFailure_CaughtExceptionCommon@$00@details@wil@@YA-AUResultStatus@01@PEAXIPEBD110PEAG_KW.c)
 *     ??$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z @ 0x1400766D4 (--$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall wil::details::ReportFailure_Base<1,0>(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  return wil::details::ReportFailure_Return<1>(a1, a2, a3, a4, a5, a6, a7, a8);
}
