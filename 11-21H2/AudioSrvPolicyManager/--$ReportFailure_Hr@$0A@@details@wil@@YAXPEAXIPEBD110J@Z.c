/*
 * XREFs of ??$ReportFailure_Hr@$0A@@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180013B74
 * Callers:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DDD0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 * Callees:
 *     ?FromResult@ResultStatus@details@wil@@SA?AU123@J@Z @ 0x180005500 (-FromResult@ResultStatus@details@wil@@SA-AU123@J@Z.c)
 *     ??$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180013994 (--$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_Hr<0>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v7; // rax
  __int64 v8; // xmm0_8
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  int v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+50h] [rbp-28h] BYREF
  int v14; // [rsp+58h] [rbp-20h]
  unsigned int v15[6]; // [rsp+60h] [rbp-18h] BYREF

  v7 = wil::details::ResultStatus::FromResult(v15, a7);
  v8 = *(_QWORD *)v7;
  v14 = *(_DWORD *)(v7 + 8);
  v13 = v8;
  wil::details::ReportFailure_Base<0,0>(v11, v9, v10, v11, v12, a6, (__int64)&v13);
}
