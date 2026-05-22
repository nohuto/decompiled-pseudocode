/*
 * XREFs of ??_EGlobalDesktopWindowTarget@Desktop@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180012790
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@UEAA@XZ @ 0x1800127D4 (--1-$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::Desktop::GlobalDesktopWindowTarget *__fastcall Windows::UI::Composition::Desktop::GlobalDesktopWindowTarget::`vector deleting destructor'(
        Windows::UI::Composition::Desktop::GlobalDesktopWindowTarget *this,
        char a2)
{
  Windows::UI::Composition::Desktop::GlobalDesktopWindowTargetImpl<Windows::UI::Composition::Desktop::DesktopWindowTarget>::~GlobalDesktopWindowTargetImpl<Windows::UI::Composition::Desktop::DesktopWindowTarget>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xE8uLL);
    else
      operator delete(this);
  }
  return this;
}
