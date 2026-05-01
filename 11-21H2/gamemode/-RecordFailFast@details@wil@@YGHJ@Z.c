/*
 * XREFs of ?RecordFailFast@details@wil@@YGHJ@Z @ 0x100027B0
 * Callers:
 *     ?LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PB_W_NPA_WIPADIPAUFailureInfo@2@@Z @ 0x10003017 (-LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PB_W_NPA_WIPADIPAUFailu.c)
 *     ??$ReportFailure_NoReturn@$02@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x10004671 (--$ReportFailure_NoReturn@$02@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOp.c)
 * Callees:
 *     <none>
 */

int __stdcall wil::details::RecordFailFast(wil::details *this, int a2)
{
  `wil::details::RecordFailFast'::`2'::s_hrErrorLast = (int)this;
  return 1;
}
