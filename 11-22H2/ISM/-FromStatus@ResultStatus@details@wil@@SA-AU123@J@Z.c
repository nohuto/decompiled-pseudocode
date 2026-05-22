/*
 * XREFs of ?FromStatus@ResultStatus@details@wil@@SA?AU123@J@Z @ 0x1800B4264
 * Callers:
 *     ??$ReportFailure_NtStatus@$02@details@wil@@YAJPEAXIPEBD110J@Z @ 0x1800B2A04 (--$ReportFailure_NtStatus@$02@details@wil@@YAJPEAXIPEBD110J@Z.c)
 *     ??$ReportFailure_NtStatus@$0A@@details@wil@@YAJPEAXIPEBD110J@Z @ 0x18014D580 (--$ReportFailure_NtStatus@$0A@@details@wil@@YAJPEAXIPEBD110J@Z.c)
 * Callees:
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x1800A6504 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall wil::details::ResultStatus::FromStatus(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  *(_DWORD *)a1 = wil::details::NtStatusToHr((wil::details *)a2);
  result = a1;
  *(_DWORD *)(a1 + 4) = a2;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
