/*
 * XREFs of ?Destroy@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAXXZ @ 0x1800B7FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetController@CaptureRenderTarget@Internal@Composition@UI@Windows@@QEAAXPEAVCaptureControllerBase@2345@@Z @ 0x18018046C (-SetController@CaptureRenderTarget@Internal@Composition@UI@Windows@@QEAAXPEAVCaptureControllerBa.c)
 */

void __fastcall Windows::UI::Composition::Internal::CaptureRenderTarget::Destroy(
        Windows::UI::Composition::Internal::CaptureRenderTarget *this)
{
  Windows::UI::Composition::Internal::CaptureRenderTarget::SetController(this, 0LL);
  Windows::UI::Composition::ProxyObject::Destroy(this);
}
