/*
 * XREFs of ??$ReportFailure_Hr@$00@details@wil@@YGXPAXIPBD110J@Z @ 0x100048EA
 * Callers:
 *     ?Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x100033B5 (-Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YGJJ@Z @ 0x10002961 (-HrToNtStatus@details@wil@@YGJJ@Z.c)
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x100048D9 (--$ReportFailure_Base@$00$0A@@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOp.c)
 */

int __thiscall wil::details::ReportFailure_Hr<1>(void *this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ecx
  _DWORD v8[4]; // [esp+Ch] [ebp-1Ch] BYREF
  int v9; // [esp+1Ch] [ebp-Ch]
  int v10; // [esp+20h] [ebp-8h]
  void *v11; // [esp+24h] [ebp-4h]

  v11 = this;
  v8[3] = a6;
  v9 = wil::details::HrToNtStatus(a6);
  LOBYTE(v10) = 0;
  v8[0] = a6;
  v8[1] = v9;
  v8[2] = v10;
  return wil::details::ReportFailure_Base<1,0>(a2, v6, v6, a5, (int)v8, v6, v6);
}
