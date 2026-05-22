/*
 * XREFs of ?winrt_to_hresult@wil@@YAHPEAX@Z @ 0x1800F37F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800E4D44 (--$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::winrt_to_hresult(wil *this, void *a2)
{
  return wil::details::ReportFailure_CaughtException<1>(0, 0, 0);
}
