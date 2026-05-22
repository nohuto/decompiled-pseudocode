/*
 * XREFs of ??9Numerics@Foundation@Windows@@YA_NAEBUfloat2@012@0@Z @ 0x18006B2A8
 * Callers:
 *     ?SetRequestedSize@CompositionIsland@Composition@UI@Windows@@QEAAXUfloat2@Numerics@Foundation@4@@Z @ 0x18006B130 (-SetRequestedSize@CompositionIsland@Composition@UI@Windows@@QEAAXUfloat2@Numerics@Foundation@4@@.c)
 *     ?Thunk_NotifyFromSite_ActualSizeChanged_Callback_64@?$ICompositionIslandNotification_Receive@VCompositionIsland@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x18006B220 (-Thunk_NotifyFromSite_ActualSizeChanged_Callback_64@-$ICompositionIslandNotification_Receive@VCo.c)
 *     ?SetContentSize@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAXAEBUVector2@Numerics@Foundation@5@@Z @ 0x18018A3C8 (-SetContentSize@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAXAEBUVector2@Numerics.c)
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Foundation::Numerics::operator!=(float *a1, float *a2)
{
  return *a1 != *a2 || a1[1] != a2[1];
}
