/*
 * XREFs of ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x18001B74C
 * Callers:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001E19C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180016790 (__security_check_cookie.c)
 *     ??$ReportFailure_CaughtExceptionCommon@$00@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x18001B7CC (--$ReportFailure_CaughtExceptionCommon@$00@details@wil@@YA-AUResultStatus@01@PEAXIPEBD110PEAG_KW.c)
 *     _alloca_probe @ 0x180048AB0 (_alloca_probe.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtException<1>(int a1, int a2, int a3)
{
  char v4; // [rsp+60h] [rbp-1028h] BYREF
  __int16 v5; // [rsp+70h] [rbp-1018h]

  v5 = 0;
  return (unsigned int)*(_QWORD *)wil::details::ReportFailure_CaughtExceptionCommon<1>((unsigned int)&v4, a1, a2, a3);
}
