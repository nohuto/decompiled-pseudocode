/*
 * XREFs of ?SetFallbackHandler@CInteractionProxy@DirectComposition@@UEAAJH@Z @ 0x180064880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionProxy::SetFallbackHandler(
        DirectComposition::CInteractionProxy *this,
        int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CInteractionProxy *)((char *)this + 8),
           11,
           a2);
}
