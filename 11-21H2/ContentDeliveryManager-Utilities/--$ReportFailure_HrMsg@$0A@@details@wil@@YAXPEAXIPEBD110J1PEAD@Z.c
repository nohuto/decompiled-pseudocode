/*
 * XREFs of ??$ReportFailure_HrMsg@$0A@@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x18006CCD8
 * Callers:
 *     ?_Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBD0J1PEAD@Z @ 0x180073AF0 (-_Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBD0J1PEAD@Z.c)
 *     ?Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800B8BB0 (-Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 * Callees:
 *     ?FromResult@ResultStatus@details@wil@@SA?AU123@J@Z @ 0x1800347F0 (-FromResult@ResultStatus@details@wil@@SA-AU123@J@Z.c)
 *     ??$ReportFailure_Msg@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x18006CD50 (--$ReportFailure_Msg@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_HrMsg<0>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        unsigned __int64 a8,
        char *a9)
{
  __int64 v9; // rax
  __int64 v10; // xmm0_8
  int v11; // r9d
  int v12; // r10d
  int v13; // r11d
  int v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+50h] [rbp-28h] BYREF
  int v16; // [rsp+58h] [rbp-20h]
  unsigned int v17[6]; // [rsp+60h] [rbp-18h] BYREF

  v9 = wil::details::ResultStatus::FromResult(v17, a7);
  v10 = *(_QWORD *)v9;
  v16 = *(_DWORD *)(v9 + 8);
  v15 = v10;
  wil::details::ReportFailure_Msg<0>(v13, v12, v11, v11, v14, a6, (__int64)&v15, a8, a9);
}
