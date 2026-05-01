/*
 * XREFs of ??$ReportFailure_NtStatus@$00@details@wil@@YGJPAXIPBD110J@Z @ 0x100065AD
 * Callers:
 *     ?Return_NtStatus@in1diag3@details@wil@@YGJPAXIPBDJ@Z @ 0x10006276 (-Return_NtStatus@in1diag3@details@wil@@YGJPAXIPBDJ@Z.c)
 * Callees:
 *     ?NtStatusToHr@details@wil@@YGJJ@Z @ 0x1000608F (-NtStatusToHr@details@wil@@YGJJ@Z.c)
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PBGW4ReportFailureOptions@01@@Z @ 0x1000659C (--$ReportFailure_Base@$00$0A@@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PBGW4ReportFailureOpt.c)
 */

int __stdcall wil::details::ReportFailure_NtStatus<1>(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // ecx
  int v7; // [esp-1Ch] [ebp-40h]
  int v8; // [esp-18h] [ebp-3Ch]
  int v9; // [esp-14h] [ebp-38h]
  _DWORD v10[3]; // [esp+Ch] [ebp-18h] BYREF
  int v11; // [esp+18h] [ebp-Ch]
  int v12; // [esp+1Ch] [ebp-8h]
  int v13; // [esp+20h] [ebp-4h]

  v11 = wil::details::NtStatusToHr(a5);
  v12 = a5;
  LOBYTE(v13) = 1;
  v10[0] = v11;
  v10[1] = a5;
  v10[2] = v13;
  wil::details::ReportFailure_Base<1,0>(v7, v8, v9, a4, (int)v10, v5, v5);
  return v10[0];
}
