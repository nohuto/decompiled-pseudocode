/*
 * XREFs of ?FromResult@ResultStatus@details@wil@@SG?AU123@J@Z @ 0x10002621
 * Callers:
 *     ??$ReportFailure_Hr@$02@details@wil@@YGXPAXIPBD110J@Z @ 0x10003316 (--$ReportFailure_Hr@$02@details@wil@@YGXPAXIPBD110J@Z.c)
 *     ??$ReportFailure_GetLastError@$02@details@wil@@YGKPAXIPBD110@Z @ 0x10003358 (--$ReportFailure_GetLastError@$02@details@wil@@YGKPAXIPBD110@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YGJJ@Z @ 0x10002961 (-HrToNtStatus@details@wil@@YGJJ@Z.c)
 */

int __thiscall wil::details::ResultStatus::FromResult(void *this, int a2)
{
  int result; // eax
  wil::details *v3; // [esp+0h] [ebp-4h]
  int savedregs; // [esp+4h] [ebp+0h]

  *(_DWORD *)a2 = this;
  *(_DWORD *)(a2 + 4) = wil::details::HrToNtStatus(v3, savedregs);
  result = a2;
  *(_BYTE *)(a2 + 8) = 0;
  return result;
}
