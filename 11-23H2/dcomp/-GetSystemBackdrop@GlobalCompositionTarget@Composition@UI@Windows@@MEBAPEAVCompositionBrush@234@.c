/*
 * XREFs of ?GetSystemBackdrop@GlobalCompositionTarget@Composition@UI@Windows@@MEBAPEAVCompositionBrush@234@XZ @ 0x180158D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct Windows::UI::Composition::CompositionBrush *__fastcall Windows::UI::Composition::GlobalCompositionTarget::GetSystemBackdrop(
        Windows::UI::Composition::GlobalCompositionTarget *this)
{
  Windows::UI::Composition::SystemBackdropHelper *v1; // rcx

  v1 = (Windows::UI::Composition::SystemBackdropHelper *)*((_QWORD *)this + 26);
  if ( v1 )
    return Windows::UI::Composition::SystemBackdropHelper::GetSystemBackdrop(v1);
  else
    return 0LL;
}
