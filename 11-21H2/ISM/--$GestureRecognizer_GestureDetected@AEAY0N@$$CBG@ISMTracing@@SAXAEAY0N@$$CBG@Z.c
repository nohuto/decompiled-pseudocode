/*
 * XREFs of ??$GestureRecognizer_GestureDetected@AEAY0N@$$CBG@ISMTracing@@SAXAEAY0N@$$CBG@Z @ 0x1800A90C4
 * Callers:
 *     ?OnSpatialManipulationCanceled@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationCanceledEventArgs@3456@@Z @ 0x1800AACC0 (-OnSpatialManipulationCanceled@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecog.c)
 *     ?OnSpatialNavigationCanceled@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialNavigationCanceledEventArgs@3456@@Z @ 0x1800AB070 (-OnSpatialNavigationCanceled@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogni.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180090CA0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z @ 0x1800AA788 (-GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z.c)
 */

void __fastcall ISMTracing::GestureRecognizer_GestureDetected<unsigned short const (&)[13]>(unsigned __int16 *a1)
{
  __int64 v2; // rcx
  ISMTracing *v3; // rcx

  if ( ISMTracing::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<ISMTracing>::get(v2, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::GestureRecognizer_GestureDetected_(v3, a1);
  }
}
