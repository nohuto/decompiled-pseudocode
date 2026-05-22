/*
 * XREFs of ?Destroy@CaptureController@Internal@Composition@UI@Windows@@UEAAXXZ @ 0x18017F520
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRoot@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAXPEAVVisual@345@@Z @ 0x18018A610 (-SetRoot@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAXPEAVVisual@345@@Z.c)
 */

void __fastcall Windows::UI::Composition::Internal::CaptureController::Destroy(
        Windows::UI::Composition::Internal::CaptureController *this)
{
  Windows::UI::Composition::Internal::CaptureControllerBase::SetRoot(this, 0LL);
  Windows::UI::Composition::ProxyObject::Destroy(this);
}
