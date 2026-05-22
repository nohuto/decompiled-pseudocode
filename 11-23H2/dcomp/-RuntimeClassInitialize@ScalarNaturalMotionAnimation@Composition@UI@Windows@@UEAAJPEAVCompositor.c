/*
 * XREFs of ?RuntimeClassInitialize@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositor@234@@Z @ 0x180167710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::ScalarNaturalMotionAnimation::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionAnimation *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  *((_DWORD *)this + 94) = 18;
  return Windows::UI::Composition::CompositionAnimation::RuntimeClassInitialize(this, a2);
}
