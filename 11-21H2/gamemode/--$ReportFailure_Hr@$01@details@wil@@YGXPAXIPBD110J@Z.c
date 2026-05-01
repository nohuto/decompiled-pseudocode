/*
 * XREFs of ??$ReportFailure_Hr@$01@details@wil@@YGXPAXIPBD110J@Z @ 0x10004515
 * Callers:
 *     ?GetLastErrorFail@details@wil@@YGKPAXIPBD110@Z @ 0x10002B2E (-GetLastErrorFail@details@wil@@YGKPAXIPBD110@Z.c)
 *     ?LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PB_W_NPA_WIPADIPAUFailureInfo@2@@Z @ 0x10003017 (-LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PB_W_NPA_WIPADIPAUFailu.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x10005ACC (-_Log_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YGJJ@Z @ 0x10002961 (-HrToNtStatus@details@wil@@YGJJ@Z.c)
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x10004649 (--$ReportFailure_Base@$01$0A@@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOp.c)
 */

int __stdcall wil::details::ReportFailure_Hr<2>(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // ecx
  int v7; // [esp+18h] [ebp-18h]
  _DWORD v8[3]; // [esp+24h] [ebp-Ch] BYREF

  LOBYTE(v7) = 0;
  v8[0] = a5;
  v8[1] = wil::details::HrToNtStatus(a5);
  v8[2] = v7;
  return wil::details::ReportFailure_Base<2,0>(a1, a2, a3, a4, v8, v5, v5);
}
