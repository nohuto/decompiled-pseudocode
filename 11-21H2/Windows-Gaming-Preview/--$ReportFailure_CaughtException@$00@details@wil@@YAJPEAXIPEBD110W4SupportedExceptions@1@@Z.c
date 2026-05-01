/*
 * XREFs of ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x180013974
 * Callers:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800139F4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ??$ReportFailure_CaughtExceptionCommon@$00@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x180013844 (--$ReportFailure_CaughtExceptionCommon@$00@details@wil@@YA-AUResultStatus@01@PEAXIPEBD110PEAG_KW.c)
 *     __security_check_cookie @ 0x18004A5E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18004BF20 (_alloca_probe.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtException<1>(
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
  char v10; // [rsp+48h] [rbp-1040h]
  _BYTE v11[16]; // [rsp+60h] [rbp-1028h] BYREF
  _WORD v12[2048]; // [rsp+70h] [rbp-1018h] BYREF

  v12[0] = 0;
  return (unsigned int)*(_QWORD *)wil::details::ReportFailure_CaughtExceptionCommon<1>(
                                    (__int64)v11,
                                    a1,
                                    a2,
                                    a3,
                                    v7,
                                    v8,
                                    a6,
                                    (__int64)v12,
                                    v9,
                                    v10);
}
