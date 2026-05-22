/*
 * XREFs of ?GetRoot@Partner@VisualTarget@Composition@UI@Windows@@W7EAAJPEAPEAUIVisual@345@@Z @ 0x1800ACD70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::VisualTarget::Partner::GetRoot(
        __int64 a1,
        struct Windows::UI::Composition::IVisual **a2)
{
  return Windows::UI::Composition::VisualTarget::Partner::GetRoot(
           (Windows::UI::Composition::VisualTarget::Partner *)(a1 - 8),
           a2);
}
