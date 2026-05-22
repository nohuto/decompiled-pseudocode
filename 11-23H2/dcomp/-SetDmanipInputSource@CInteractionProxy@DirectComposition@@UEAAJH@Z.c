/*
 * XREFs of ?SetDmanipInputSource@CInteractionProxy@DirectComposition@@UEAAJH@Z @ 0x180063750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionProxy::SetDmanipInputSource(
        DirectComposition::CInteractionProxy *this,
        int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CInteractionProxy *)((char *)this + 8),
           0x11u,
           a2 != 0);
}
