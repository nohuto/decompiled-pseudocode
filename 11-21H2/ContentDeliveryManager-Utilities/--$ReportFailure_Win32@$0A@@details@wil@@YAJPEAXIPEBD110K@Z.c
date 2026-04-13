/*
 * XREFs of ??$ReportFailure_Win32@$0A@@details@wil@@YAJPEAXIPEBD110K@Z @ 0x1800BC800
 * Callers:
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800C26A0 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 * Callees:
 *     ?FromResult@ResultStatus@details@wil@@SA?AU123@J@Z @ 0x1800347F0 (-FromResult@ResultStatus@details@wil@@SA-AU123@J@Z.c)
 *     ??$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailureOptions@01@@Z @ 0x180091A0C (--$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFail.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_Win32<0>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  unsigned int v7; // edx
  __int64 v8; // rax
  __int64 v9; // xmm0_8
  int v10; // r9d
  int v11; // r10d
  int v12; // r11d
  int v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF
  int v15; // [rsp+58h] [rbp-20h]
  unsigned int v16[6]; // [rsp+60h] [rbp-18h] BYREF

  v7 = a7;
  if ( a7 > 0 )
    v7 = (unsigned __int16)a7 | 0x80070000;
  v8 = wil::details::ResultStatus::FromResult(v16, v7);
  v9 = *(_QWORD *)v8;
  v15 = *(_DWORD *)(v8 + 8);
  v14 = v9;
  wil::details::ReportFailure_Base<0,0>(v12, v11, v10, v10, v13, a6, (__int64)&v14);
}
