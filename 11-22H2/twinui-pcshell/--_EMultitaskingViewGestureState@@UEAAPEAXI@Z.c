/*
 * XREFs of ??_EMultitaskingViewGestureState@@UEAAPEAXI@Z @ 0x1801B94E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

MultitaskingViewGestureState *__fastcall MultitaskingViewGestureState::`vector deleting destructor'(
        MultitaskingViewGestureState *this,
        char a2)
{
  *((_DWORD *)this + 13) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 5);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x48uLL);
  return this;
}
