/*
 * XREFs of ?RecordLog@details@wil@@YAHJ@Z @ 0x18000EE34
 * Callers:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEB_W_NPEA_W_KPEAD7PEAUFailureInfo@2@@Z @ 0x18000E764 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEB_W_NPEA_W_KPEAD7P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::RecordLog(wil::details *this)
{
  `wil::details::RecordLog'::`2'::s_hrErrorLast = (int)this;
  return (unsigned int)_InterlockedIncrement(&`wil::details::RecordLog'::`2'::s_cErrorCount);
}
