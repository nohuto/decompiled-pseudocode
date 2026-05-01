/*
 * XREFs of ??$ReportFailure_CaughtExceptionMsg@$01@details@wil@@YAJPEAXIPEBD1101PEAD@Z @ 0x1803F46A8
 * Callers:
 *     ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x1804022D8 (-Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18028E130 (_alloca_probe.c)
 *     ??$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x1803910E4 (--$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA-AUResultStatus@01@PEAXIPEBD110PEAG_KW.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x180392E84 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtExceptionMsg<2>(
        int a1,
        unsigned __int16 *a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned __int64 a7,
        char *a8)
{
  int v10; // edi
  _WORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  char *v14; // rcx
  __int64 v15; // r10
  __int64 v16; // rax
  signed __int64 v17; // rdx
  __int16 v18; // r8
  char *v19; // rax
  __int64 v21; // [rsp+20h] [rbp-1078h]
  __int64 v22; // [rsp+28h] [rbp-1070h]
  __int64 v23; // [rsp+40h] [rbp-1058h]
  char v24[16]; // [rsp+60h] [rbp-1038h] BYREF
  _WORD v25[2048]; // [rsp+70h] [rbp-1028h] BYREF

  v10 = (int)a2;
  wil::details::PrintLoggingMessage((wil::details *)v25, a2, a7, a8);
  v11 = v25;
  v12 = 2048LL;
  do
  {
    if ( !*v11 )
      break;
    ++v11;
    --v12;
  }
  while ( v12 );
  v13 = (2048 - v12) & -(__int64)(v12 != 0);
  if ( v12 )
  {
    v14 = (char *)&v25[v13];
    v15 = 2048 - v13;
    if ( 2048 != v13 )
    {
      v16 = 2147483646LL;
      v17 = (char *)L" -- " - v14;
      do
      {
        if ( !v16 )
          break;
        v18 = *(_WORD *)&v14[v17];
        if ( !v18 )
          break;
        *(_WORD *)v14 = v18;
        --v16;
        v14 += 2;
        --v15;
      }
      while ( v15 );
    }
    v19 = v14 - 2;
    if ( v15 )
      v19 = v14;
    *(_WORD *)v19 = 0;
  }
  return (unsigned int)*(_QWORD *)wil::details::ReportFailure_CaughtExceptionCommon<2>(
                                    (__int64)v24,
                                    a1,
                                    v10,
                                    a3,
                                    v21,
                                    v22,
                                    a6,
                                    (__int64)v25,
                                    v23,
                                    0);
}
