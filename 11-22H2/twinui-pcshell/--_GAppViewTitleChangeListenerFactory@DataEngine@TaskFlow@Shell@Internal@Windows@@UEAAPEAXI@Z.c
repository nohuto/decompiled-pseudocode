/*
 * XREFs of ??_GAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x18049C1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListenerFactory *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListenerFactory::`scalar deleting destructor'(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListenerFactory *this,
        char a2)
{
  *((_DWORD *)this + 17) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
