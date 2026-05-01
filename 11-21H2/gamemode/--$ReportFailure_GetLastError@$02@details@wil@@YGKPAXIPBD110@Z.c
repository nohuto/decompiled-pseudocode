/*
 * XREFs of ??$ReportFailure_GetLastError@$02@details@wil@@YGKPAXIPBD110@Z @ 0x10003358
 * Callers:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YGXPAXIPBD@Z @ 0x100033EE (-_FailFast_GetLastError@in1diag3@details@wil@@YGXPAXIPBD@Z.c)
 * Callees:
 *     ?FromResult@ResultStatus@details@wil@@SG?AU123@J@Z @ 0x10002621 (-FromResult@ResultStatus@details@wil@@SG-AU123@J@Z.c)
 *     ?GetLastErrorFail@details@wil@@YGKPAXIPBD110@Z @ 0x10002B2E (-GetLastErrorFail@details@wil@@YGKPAXIPBD110@Z.c)
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x100032FA (--$ReportFailure_Base@$02$0A@@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOp.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_GetLastError<3>(
        void *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        char *a6)
{
  void *LastErrorFail; // eax
  _DWORD *v7; // eax
  int v8; // [esp-1Ch] [ebp-44h]
  int v9; // [esp-18h] [ebp-40h]
  int v10; // [esp-14h] [ebp-3Ch]
  const char *v11; // [esp+0h] [ebp-28h]
  const char *v12; // [esp+4h] [ebp-24h]
  void *v13; // [esp+8h] [ebp-20h]
  _BYTE v14[12]; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD v15[4]; // [esp+18h] [ebp-10h] BYREF

  v15[3] = a1;
  LastErrorFail = (void *)wil::details::GetLastErrorFail(
                            a2,
                            (int)a1,
                            (wil::details *)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
                            a1,
                            (unsigned int)a1,
                            a6,
                            v11,
                            v12,
                            v13);
  if ( (int)LastErrorFail > 0 )
    LastErrorFail = (void *)((unsigned __int16)LastErrorFail | 0x80070000);
  v7 = (_DWORD *)wil::details::ResultStatus::FromResult(LastErrorFail, (int)v14);
  v15[0] = *v7;
  v15[1] = v7[1];
  v15[2] = v7[2];
  wil::details::ReportFailure_Base<3,0>(v8, v9, v10, (int)a6, (int)v15);
}
