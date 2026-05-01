/*
 * XREFs of ??$ReportFailure_Hr@$02@details@wil@@YGXPAXIPBD110J@Z @ 0x10003316
 * Callers:
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YGXPAXIPBD@Z @ 0x10003429 (-FailFast_Unexpected@in1diag3@details@wil@@YGXPAXIPBD@Z.c)
 * Callees:
 *     ?FromResult@ResultStatus@details@wil@@SG?AU123@J@Z @ 0x10002621 (-FromResult@ResultStatus@details@wil@@SG-AU123@J@Z.c)
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x100032FA (--$ReportFailure_Base@$02$0A@@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOp.c)
 */

void __cdecl __noreturn wil::details::ReportFailure_Hr<3>(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // eax
  int v5; // [esp-1Ch] [ebp-40h]
  int v6; // [esp-18h] [ebp-3Ch]
  int v7; // [esp-14h] [ebp-38h]
  _BYTE v8[12]; // [esp+Ch] [ebp-18h] BYREF
  _DWORD v9[3]; // [esp+18h] [ebp-Ch] BYREF

  v4 = (_DWORD *)wil::details::ResultStatus::FromResult((void *)0x8000FFFF, (int)v8);
  v9[0] = *v4;
  v9[1] = v4[1];
  v9[2] = v4[2];
  wil::details::ReportFailure_Base<3,0>(v5, v6, v7, a4, (int)v9);
}
