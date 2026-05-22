/*
 * XREFs of sub_1800C30F8 @ 0x1800C30F8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall sub_1800C30F8(
        MPCSpatialGestureRecognizerHandler *a1,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs *a3)
{
  char v3; // of

  if ( !v3 )
    JUMPOUT(0x1800C3102LL);
  return MPCSpatialGestureRecognizerHandler::OnSpatialNavigationCompleted(a1, a2, a3);
}
