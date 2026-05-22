/*
 * XREFs of ?GetSystemBackdrop@SystemBackdropHelper@Composition@UI@Windows@@QEBAPEAVCompositionBrush@234@XZ @ 0x1800100C0
 * Callers:
 *     ?GetSystemBackdrop@?$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEBAPEAUICompositionBrush@345@XZ @ 0x180010090 (-GetSystemBackdrop@-$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Wind.c)
 *     ?GetSystemBackdrop@GlobalCompositionTarget@Composition@UI@Windows@@MEBAPEAVCompositionBrush@234@XZ @ 0x180158D40 (-GetSystemBackdrop@GlobalCompositionTarget@Composition@UI@Windows@@MEBAPEAVCompositionBrush@234@.c)
 *     ?GetSystemBackdrop@?$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEBAPEAUICompositionBrush@345@XZ @ 0x18016F6E0 (-GetSystemBackdrop@-$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@W.c)
 * Callees:
 *     <none>
 */

struct Windows::UI::Composition::CompositionBrush *__fastcall Windows::UI::Composition::SystemBackdropHelper::GetSystemBackdrop(
        Windows::UI::Composition::SystemBackdropHelper *this)
{
  struct Windows::UI::Composition::CompositionBrush *result; // rax

  result = (struct Windows::UI::Composition::CompositionBrush *)*((_QWORD *)this + 3);
  if ( result )
    return (struct Windows::UI::Composition::CompositionBrush *)*((_QWORD *)result + 42);
  return result;
}
