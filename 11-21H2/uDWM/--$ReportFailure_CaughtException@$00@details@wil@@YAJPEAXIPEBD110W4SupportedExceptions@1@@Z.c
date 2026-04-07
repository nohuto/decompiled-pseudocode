/*
 * XREFs of ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x18009275C
 * Callers:
 *     ?winrt_to_hresult@wil@@YAHPEAX@Z @ 0x180096F70 (-winrt_to_hresult@wil@@YAHPEAX@Z.c)
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800F1350 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180063680 (_alloca_probe.c)
 *     ??$ReportFailure_CaughtExceptionCommon@$00@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x1800927DC (--$ReportFailure_CaughtExceptionCommon@$00@details@wil@@YA-AUResultStatus@01@PEAXIPEBD110PEAG_KW.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtException<1>(int a1, int a2, int a3)
{
  char v4; // [rsp+60h] [rbp-1028h] BYREF
  __int16 v5; // [rsp+70h] [rbp-1018h]

  v5 = 0;
  return (unsigned int)*(_QWORD *)wil::details::ReportFailure_CaughtExceptionCommon<1>((unsigned int)&v4, a1, a2, a3);
}
