/*
 * XREFs of ?RuntimeClassInitialize@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositor@234@@Z @ 0x180168670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Vector3NaturalMotionAnimation::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionAnimation *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  *((_DWORD *)this + 94) = 52;
  return Windows::UI::Composition::CompositionAnimation::RuntimeClassInitialize(this, a2);
}
