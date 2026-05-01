/*
 * XREFs of ??$ReportFailure_Base@$01$0A@@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x10004649
 * Callers:
 *     ??$ReportFailure_Hr@$01@details@wil@@YGXPAXIPBD110J@Z @ 0x10004515 (--$ReportFailure_Hr@$01@details@wil@@YGXPAXIPBD110J@Z.c)
 * Callees:
 *     ??$ReportFailure_Return@$01@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x100049AF (--$ReportFailure_Return@$01@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOpti.c)
 */

int __thiscall wil::details::ReportFailure_Base<2,0>(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return wil::details::ReportFailure_Return<2>(a2, a3, a4, a5, a6, 0, this);
}
