/*
 * XREFs of ?SetIsHardwareCursorEnabled@CCursorVisualProxy@DirectComposition@@UEAAJH@Z @ 0x1800F57D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCursorVisualProxy::SetIsHardwareCursorEnabled(
        DirectComposition::CCursorVisualProxy *this,
        int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CCursorVisualProxy *)((char *)this + 8),
           1,
           a2 != 0);
}
