/*
 * XREFs of ?SetViewId@CHolographicExclusiveViewProxy@DirectComposition@@UEAAJI@Z @ 0x1800E7990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicExclusiveViewProxy::SetViewId(
        DirectComposition::CHolographicExclusiveViewProxy *this,
        unsigned int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CHolographicExclusiveViewProxy *)((char *)this + 8),
           0,
           a2);
}
