/*
 * XREFs of ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800D4F9C
 * Callers:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800D9180 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18006A600 (_alloca_probe.c)
 *     ??$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x1800C1DCC (--$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA-AUResultStatus@01@PEAXIPEBD110PEAG_KW.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtException<2>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  int v7; // [rsp+20h] [rbp-1068h]
  int v8; // [rsp+28h] [rbp-1060h]
  int v9; // [rsp+40h] [rbp-1048h]
  _BYTE v10[16]; // [rsp+60h] [rbp-1028h] BYREF
  _WORD v11[2048]; // [rsp+70h] [rbp-1018h] BYREF

  v11[0] = 0;
  return (unsigned int)*(_QWORD *)wil::details::ReportFailure_CaughtExceptionCommon<2>(
                                    (__int64)v10,
                                    a1,
                                    a2,
                                    a3,
                                    v7,
                                    v8,
                                    a6,
                                    (__int64)v11,
                                    v9,
                                    0);
}
