/*
 * XREFs of ?RecordReturn@details@wil@@YGHJ@Z @ 0x1000277A
 * Callers:
 *     ?LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PB_W_NPA_WIPADIPAUFailureInfo@2@@Z @ 0x10003017 (-LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PB_W_NPA_WIPADIPAUFailu.c)
 *     ??$ReportFailure_Return@$00@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x10004A27 (--$ReportFailure_Return@$00@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOpti.c)
 *     ?LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PBG_NPAGIPADIPAUFailureInfo@2@@Z @ 0x100060EB (-LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PBG_NPAGIPADIPAUFailure.c)
 * Callees:
 *     <none>
 */

int __thiscall wil::details::RecordReturn(void *ecx0)
{
  `wil::details::RecordReturn'::`2'::s_hrErrorLast = (int)ecx0;
  return _InterlockedIncrement(&`wil::details::RecordReturn'::`2'::s_cErrorCount);
}
