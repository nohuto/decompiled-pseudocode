/*
 * XREFs of ?SetInputSink@CInteractionProxy@DirectComposition@@UEAAJPEAX@Z @ 0x1800F9030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionProxy::SetInputSink(
        DirectComposition::CInteractionProxy *this,
        void *a2)
{
  return DirectComposition::CResourceProxy::SetHandleProperty(
           (DirectComposition::CInteractionProxy *)((char *)this + 8),
           0,
           a2);
}
