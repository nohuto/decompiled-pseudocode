/*
 * XREFs of ?EnablePalmRejection@CInteractionProxy@DirectComposition@@UEAAJH@Z @ 0x1800F8F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionProxy::EnablePalmRejection(
        DirectComposition::CInteractionProxy *this,
        int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CInteractionProxy *)((char *)this + 8),
           5,
           a2);
}
