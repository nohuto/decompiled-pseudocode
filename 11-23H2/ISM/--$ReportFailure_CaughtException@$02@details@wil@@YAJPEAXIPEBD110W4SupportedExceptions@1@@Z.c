/*
 * XREFs of ??$ReportFailure_CaughtException@$02@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x18009DD3C
 * Callers:
 *     ?FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009EC5C (-FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 * Callees:
 *     _alloca_probe @ 0x1800658C0 (_alloca_probe.c)
 *     ??$ReportFailure_CaughtExceptionCommonNoReturnBase@$02@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x18009DD84 (--$ReportFailure_CaughtExceptionCommonNoReturnBase@$02@details@wil@@YA-AUResultStatus@01@PEAXIPE.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_CaughtException<3>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  char v6; // [rsp+50h] [rbp-1018h] BYREF
  __int16 v7; // [rsp+60h] [rbp-1008h]

  v7 = 0;
  wil::details::ReportFailure_CaughtExceptionCommonNoReturnBase<3>((unsigned int)&v6, a1, a2, a3);
}
