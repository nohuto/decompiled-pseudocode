/*
 * XREFs of ??_EGlobalInteropCompositionTarget@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18008CB70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1?$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@UEAA@XZ @ 0x18008CBB4 (--1-$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@@@Desktop@Co.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::GlobalInteropCompositionTarget *__fastcall Windows::UI::Composition::GlobalInteropCompositionTarget::`vector deleting destructor'(
        Windows::UI::Composition::GlobalInteropCompositionTarget *this,
        char a2)
{
  Windows::UI::Composition::Desktop::GlobalDesktopWindowTargetImpl<Windows::UI::Composition::InteropCompositionTarget>::~GlobalDesktopWindowTargetImpl<Windows::UI::Composition::InteropCompositionTarget>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xF8uLL);
    else
      operator delete(this);
  }
  return this;
}
