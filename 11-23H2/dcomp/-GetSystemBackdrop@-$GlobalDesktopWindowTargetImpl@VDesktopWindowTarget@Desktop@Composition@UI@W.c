/*
 * XREFs of ?GetSystemBackdrop@?$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEBAPEAUICompositionBrush@345@XZ @ 0x18016F6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSystemBackdrop@SystemBackdropHelper@Composition@UI@Windows@@QEBAPEAVCompositionBrush@234@XZ @ 0x1800100C0 (-GetSystemBackdrop@SystemBackdropHelper@Composition@UI@Windows@@QEBAPEAVCompositionBrush@234@XZ.c)
 */

char *__fastcall Windows::UI::Composition::Desktop::GlobalDesktopWindowTargetImpl<Windows::UI::Composition::Desktop::DesktopWindowTarget>::GetSystemBackdrop(
        __int64 a1)
{
  Windows::UI::Composition::SystemBackdropHelper *v1; // rcx
  struct Windows::UI::Composition::CompositionBrush *SystemBackdrop; // rax

  v1 = *(Windows::UI::Composition::SystemBackdropHelper **)(a1 + 224);
  if ( v1 && (SystemBackdrop = Windows::UI::Composition::SystemBackdropHelper::GetSystemBackdrop(v1)) != 0LL )
    return (char *)SystemBackdrop + 136;
  else
    return 0LL;
}
