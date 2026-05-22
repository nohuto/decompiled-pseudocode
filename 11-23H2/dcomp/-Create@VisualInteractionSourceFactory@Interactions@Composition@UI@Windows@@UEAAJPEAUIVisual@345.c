/*
 * XREFs of ?Create@VisualInteractionSourceFactory@Interactions@Composition@UI@Windows@@UEAAJPEAUIVisual@345@PEAPEAUIVisualInteractionSource@2345@@Z @ 0x1800B6300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Interactions::VisualInteractionSourceFactory::Create(
        Windows::UI::Composition::Interactions::VisualInteractionSourceFactory *this,
        struct IUnknown *a2,
        struct Windows::UI::Composition::Interactions::IVisualInteractionSource **a3)
{
  return Windows::UI::Composition::Interactions::CreateInteractionSource_NoLock<Windows::UI::Composition::Interactions::VisualInteractionSource,Windows::UI::Composition::Interactions::IVisualInteractionSource>(a2);
}
