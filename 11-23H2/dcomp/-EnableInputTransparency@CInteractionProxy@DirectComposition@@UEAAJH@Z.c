/*
 * XREFs of ?EnableInputTransparency@CInteractionProxy@DirectComposition@@UEAAJH@Z @ 0x1800F8F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionProxy::EnableInputTransparency(
        DirectComposition::CInteractionProxy *this,
        int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CInteractionProxy *)((char *)this + 8),
           7,
           a2);
}
