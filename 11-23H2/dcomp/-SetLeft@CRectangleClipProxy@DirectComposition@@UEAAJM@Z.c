/*
 * XREFs of ?SetLeft@CRectangleClipProxy@DirectComposition@@UEAAJM@Z @ 0x1800B55F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRectangleClipProxy::SetLeft(
        DirectComposition::CRectangleClipProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CRectangleClipProxy *)((char *)this + 8),
           4,
           a2);
}
