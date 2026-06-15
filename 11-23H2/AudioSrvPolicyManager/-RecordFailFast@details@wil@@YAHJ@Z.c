/*
 * XREFs of ?RecordFailFast@details@wil@@YAHJ@Z @ 0x180019930
 * Callers:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x18000D620 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::RecordFailFast(wil::details *this)
{
  `wil::details::RecordFailFast'::`2'::s_hrErrorLast = (int)this;
  return 1LL;
}
