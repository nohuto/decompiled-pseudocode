/*
 * XREFs of ?SetRight@CRectangleClipProxy@DirectComposition@@UEAAJM@Z @ 0x1800B5630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRectangleClipProxy::SetRight(
        DirectComposition::CRectangleClipProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CRectangleClipProxy *)((char *)this + 8),
           6,
           a2);
}
