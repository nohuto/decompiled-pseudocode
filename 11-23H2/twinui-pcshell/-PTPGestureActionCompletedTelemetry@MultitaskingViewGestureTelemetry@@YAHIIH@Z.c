/*
 * XREFs of ?PTPGestureActionCompletedTelemetry@MultitaskingViewGestureTelemetry@@YAHIIH@Z @ 0x18055D48C
 * Callers:
 *     _lambda_02ea2976da830b140e60944cbaaa9176_::operator() @ 0x18054C920 (_lambda_02ea2976da830b140e60944cbaaa9176_--operator().c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014F710 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ??$GestureActionResult@AEAIAEAIAEAH@MultitaskingViewTelemetry@@SAXAEAI0AEAH@Z @ 0x18055D260 (--$GestureActionResult@AEAIAEAIAEAH@MultitaskingViewTelemetry@@SAXAEAI0AEAH@Z.c)
 */

__int64 __fastcall MultitaskingViewGestureTelemetry::PTPGestureActionCompletedTelemetry(
        MultitaskingViewGestureTelemetry *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = a3;
  v7 = a2;
  v6 = (unsigned int)this;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  MultitaskingViewTelemetry::GestureActionResult<unsigned int &,unsigned int &,int &>(&v6, &v7, &v8);
  return a3;
}
