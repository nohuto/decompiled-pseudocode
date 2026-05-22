/*
 * XREFs of ?DisableBuffering@CInteractionProxy@DirectComposition@@UEAAJH@Z @ 0x1800648A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionProxy::DisableBuffering(
        DirectComposition::CInteractionProxy *this,
        int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CInteractionProxy *)((char *)this + 8),
           10,
           a2);
}
