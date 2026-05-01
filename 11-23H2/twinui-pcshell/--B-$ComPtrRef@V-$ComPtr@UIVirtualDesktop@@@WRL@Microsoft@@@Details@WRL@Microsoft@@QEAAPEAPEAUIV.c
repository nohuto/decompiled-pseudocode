/*
 * XREFs of ??B?$ComPtrRef@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIVirtualDesktop@@XZ @ 0x1803AC8A8
 * Callers:
 *     ?_RemoveDesktop@CVirtualDesktopHotkeyHandler@@AEAAJXZ @ 0x1806099A8 (-_RemoveDesktop@CVirtualDesktopHotkeyHandler@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IVirtualDesktop>>::operator IVirtualDesktop * *(
        __int64 **a1)
{
  __int64 *v1; // rbx

  v1 = *a1;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(*a1);
  return v1;
}
