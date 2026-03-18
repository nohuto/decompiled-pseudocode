/*
 * XREFs of ?GetRightEyeRenderTargetBitmap@CStereoRenderTargetBitmap@@UEAAPEAVIRenderTargetBitmap@@XZ @ 0x180108D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IRenderTargetBitmap *__fastcall CStereoRenderTargetBitmap::GetRightEyeRenderTargetBitmap(
        CStereoRenderTargetBitmap *this)
{
  return (struct IRenderTargetBitmap *)*((_QWORD *)this + 2);
}
