/*
 * XREFs of ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x14005FC68
 * Callers:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140061098 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1400321A0 (_alloca_probe.c)
 *     ??$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x14005FCE8 (--$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA-AUResultStatus@01@PEAXIPEBD110PEAG_KW.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtException<2>(int a1, int a2, int a3)
{
  char v4; // [rsp+60h] [rbp-1028h] BYREF
  __int16 v5; // [rsp+70h] [rbp-1018h]

  v5 = 0;
  return (unsigned int)*(_QWORD *)wil::details::ReportFailure_CaughtExceptionCommon<2>((unsigned int)&v4, a1, a2, a3);
}
