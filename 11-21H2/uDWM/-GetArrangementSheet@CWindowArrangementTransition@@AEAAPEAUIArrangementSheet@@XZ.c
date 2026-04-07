/*
 * XREFs of ?GetArrangementSheet@CWindowArrangementTransition@@AEAAPEAUIArrangementSheet@@XZ @ 0x180100A20
 * Callers:
 *     ?OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJAEBUtagRECT@@@Z @ 0x180100A64 (-OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@AEBUtagPOINT@@@Z @ 0x180100BCC (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@AEBUt.c)
 *     ?OnWindowDestroyed@CWindowArrangementTransition@@QEAAJXZ @ 0x180100F38 (-OnWindowDestroyed@CWindowArrangementTransition@@QEAAJXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180013B10 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@QEAAX_NW4Reporting.c)
 */

struct IArrangementSheet *__fastcall CWindowArrangementTransition::GetArrangementSheet(
        CWindowArrangementTransition *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Wmasfot>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_Wmasfot>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  return (struct IArrangementSheet *)((*(_QWORD *)(*(_QWORD *)this + 560LL) + 296LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)this + 560LL) != 0LL));
}
