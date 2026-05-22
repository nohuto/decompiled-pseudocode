/*
 * XREFs of ?AccessorGetSession@CompositionLight@Composition@UI@Windows@@UEAAPEAVContextSession@WRL2@Microsoft@@XZ @ 0x18008FD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct Microsoft::WRL2::ContextSession *__fastcall Windows::UI::Composition::CompositionLight::AccessorGetSession(
        Windows::UI::Composition::CompositionLight *this)
{
  return (struct Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 14);
}
