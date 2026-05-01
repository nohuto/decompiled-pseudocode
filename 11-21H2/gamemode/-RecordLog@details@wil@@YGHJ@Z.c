/*
 * XREFs of ?RecordLog@details@wil@@YGHJ@Z @ 0x10002793
 * Callers:
 *     ?LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PB_W_NPA_WIPADIPAUFailureInfo@2@@Z @ 0x10003017 (-LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PB_W_NPA_WIPADIPAUFailu.c)
 * Callees:
 *     <none>
 */

int __thiscall wil::details::RecordLog(void *ecx0)
{
  `wil::details::RecordLog'::`2'::s_hrErrorLast = (int)ecx0;
  return _InterlockedIncrement(&`wil::details::RecordLog'::`2'::s_cErrorCount);
}
