/*
 * XREFs of ??$ReportFailure_GetLastError@$0A@@details@wil@@YAKPEAXIPEBD110@Z @ 0x18006CC58
 * Callers:
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180073AD4 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007B120 (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180024944 (--$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 *     ?FromResult@ResultStatus@details@wil@@SA?AU123@J@Z @ 0x1800347F0 (-FromResult@ResultStatus@details@wil@@SA-AU123@J@Z.c)
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x180036380 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_GetLastError<0>(
        wil::details *a1,
        void *a2,
        __int64 a3,
        const char *a4,
        int a5,
        const char *a6)
{
  int v6; // ebx
  int v7; // edi
  int v8; // esi
  signed int LastErrorFail; // eax
  __int64 v10; // rax
  __int64 v11; // xmm0_8
  int v12; // r9d
  const char *v13; // [rsp+20h] [rbp-58h]
  int v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+50h] [rbp-28h] BYREF
  int v16; // [rsp+58h] [rbp-20h]
  unsigned int v17[6]; // [rsp+60h] [rbp-18h] BYREF

  v6 = a3;
  v7 = (int)a2;
  v8 = (int)a1;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, a3, a4, v13, a6);
  if ( LastErrorFail > 0 )
    LastErrorFail = (unsigned __int16)LastErrorFail | 0x80070000;
  v10 = wil::details::ResultStatus::FromResult(v17, LastErrorFail);
  v11 = *(_QWORD *)v10;
  v16 = *(_DWORD *)(v10 + 8);
  v15 = v11;
  wil::details::ReportFailure_Base<0,0>(v8, v7, v6, v12, v14, (__int64)a6, (__int64)&v15, 0LL);
}
