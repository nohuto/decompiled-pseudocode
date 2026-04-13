/*
 * XREFs of ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800249FC
 * Callers:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18003B334 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x180024BA8 (--$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA-AUResultStatus@01@PEAXIPEBD110PEAG_KW.c)
 *     _alloca_probe @ 0x1800ED720 (_alloca_probe.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtException<2>(int a1, int a2, int a3)
{
  char v4; // [rsp+60h] [rbp-1028h] BYREF
  __int16 v5; // [rsp+70h] [rbp-1018h]

  v5 = 0;
  return (unsigned int)*(_QWORD *)wil::details::ReportFailure_CaughtExceptionCommon<2>((unsigned int)&v4, a1, a2, a3);
}
