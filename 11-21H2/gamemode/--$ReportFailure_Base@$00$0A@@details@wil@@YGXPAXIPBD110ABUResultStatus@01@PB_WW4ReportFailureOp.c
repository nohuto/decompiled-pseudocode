/*
 * XREFs of ??$ReportFailure_Base@$00$0A@@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x100048D9
 * Callers:
 *     ??$ReportFailure_Hr@$00@details@wil@@YGXPAXIPBD110J@Z @ 0x100048EA (--$ReportFailure_Hr@$00@details@wil@@YGXPAXIPBD110J@Z.c)
 *     ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YGJPAXIPBD110@Z @ 0x1000493A (--$ReportFailure_GetLastErrorHr@$00@details@wil@@YGJPAXIPBD110@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall wil::details::ReportFailure_Base<1,0>(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return wil::details::ReportFailure_Return<1>(a1, a2, a3, a4, a5, a6, a7);
}
