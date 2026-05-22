/*
 * XREFs of ?SetTop@CRectangleClipProxy@DirectComposition@@UEAAJM@Z @ 0x1800B5670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRectangleClipProxy::SetTop(
        DirectComposition::CRectangleClipProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CRectangleClipProxy *)((char *)this + 8),
           5,
           a2);
}
