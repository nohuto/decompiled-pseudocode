/*
 * XREFs of ?RuntimeClassInitialize@Vector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositor@234@@Z @ 0x1801680C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Vector2NaturalMotionAnimation::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionAnimation *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  *((_DWORD *)this + 94) = 35;
  return Windows::UI::Composition::CompositionAnimation::RuntimeClassInitialize(this, a2);
}
