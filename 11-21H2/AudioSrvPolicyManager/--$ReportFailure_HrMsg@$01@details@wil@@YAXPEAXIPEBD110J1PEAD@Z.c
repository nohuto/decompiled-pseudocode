/*
 * XREFs of ??$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x180007F54
 * Callers:
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18000A5C0 (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180037B60 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180038E50 (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180005F14 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x180007FD4 (--$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_HrMsg<2>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7,
        __int64 a8,
        va_list Args)
{
  int v9; // r8d
  int v10; // r9d
  int v11; // r10d
  int v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+58h] [rbp-20h]
  __int64 v16; // [rsp+60h] [rbp-18h] BYREF
  int v17; // [rsp+68h] [rbp-10h]

  LODWORD(v14) = (_DWORD)a7;
  HIDWORD(v14) = wil::details::HrToNtStatus((wil::details *)(unsigned int)a7);
  LOBYTE(v15) = 0;
  v17 = v15;
  v16 = v14;
  return wil::details::ReportFailure_Msg<2>(v11, v10, v9, v10, v13, a6, (__int64)&v16, a8, Args);
}
