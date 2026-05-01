/*
 * XREFs of ??_GCCommonApplicationViewArrangePosition@@UEAAPEAXI@Z @ 0x18017B550
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CCommonApplicationViewArrangePosition *__fastcall CCommonApplicationViewArrangePosition::`scalar deleting destructor'(
        CCommonApplicationViewArrangePosition *this,
        char a2)
{
  *((_DWORD *)this + 21) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 9);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x58uLL);
  return this;
}
