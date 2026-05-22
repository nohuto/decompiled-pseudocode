/*
 * XREFs of ?SetFrameEvent@CHolographicExclusiveViewProxy@DirectComposition@@UEAAJPEAX@Z @ 0x1800E78F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicExclusiveViewProxy::SetFrameEvent(
        DirectComposition::CHolographicExclusiveViewProxy *this,
        __int64 a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CHolographicExclusiveViewProxy *)((char *)this + 8),
           3,
           a2);
}
