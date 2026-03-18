/*
 * XREFs of ?NotifyInvalidResource@CCaptureRenderTarget@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801C5660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCaptureRenderTarget::NotifyInvalidResource(
        CCaptureRenderTarget *this,
        const struct IDeviceResource *a2)
{
  CCaptureRenderTarget::ReleaseRenderingResources((CCaptureRenderTarget *)((char *)this - 1864));
}
