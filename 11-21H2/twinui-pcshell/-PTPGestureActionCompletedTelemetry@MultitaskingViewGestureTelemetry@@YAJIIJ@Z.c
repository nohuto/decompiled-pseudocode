/*
 * XREFs of ?PTPGestureActionCompletedTelemetry@MultitaskingViewGestureTelemetry@@YAJIIJ@Z @ 0x18049DADC
 * Callers:
 *     _lambda_75bac987ac5f971a4d8840925317feb1_::operator() @ 0x180495E0C (_lambda_75bac987ac5f971a4d8840925317feb1_--operator().c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180119284 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ??$GestureActionResult@AEAIAEAI_N@MultitaskingViewTelemetry@@SAXAEAI0$$QEA_N@Z @ 0x18049D928 (--$GestureActionResult@AEAIAEAI_N@MultitaskingViewTelemetry@@SAXAEAI0$$QEA_N@Z.c)
 */

__int64 __fastcall MultitaskingViewGestureTelemetry::PTPGestureActionCompletedTelemetry(
        MultitaskingViewGestureTelemetry *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF
  bool v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = a2;
  v6 = (unsigned int)this;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  v8 = (a3 & 0x80000000) == 0;
  MultitaskingViewTelemetry::GestureActionResult<unsigned int &,unsigned int &,bool>(&v6, &v7, &v8);
  return a3;
}
