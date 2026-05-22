/*
 * XREFs of ?SetInteractionTrackerInputSource@CInteractionProxy@DirectComposition@@UEAAJH@Z @ 0x1800F9050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionProxy::SetInteractionTrackerInputSource(
        DirectComposition::CInteractionProxy *this,
        int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CInteractionProxy *)((char *)this + 8),
           17,
           a2 != 0 ? 2 : 0);
}
