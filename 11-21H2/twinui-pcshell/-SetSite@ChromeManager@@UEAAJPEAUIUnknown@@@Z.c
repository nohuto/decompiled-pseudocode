/*
 * XREFs of ?SetSite@ChromeManager@@UEAAJPEAUIUnknown@@@Z @ 0x1801738C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x1800A024C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall ChromeManager::SetSite(ChromeManager *this, struct IUnknown *a2)
{
  bool v4; // bl

  if ( *((_QWORD *)this + 2) )
  {
    v4 = 0;
    if ( !a2 )
    {
      IUnknown_SetSite(*((IUnknown **)this + 5), 0LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 5);
      IUnknown_SetSite(*((IUnknown **)this + 6), 0LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 6);
    }
  }
  else
  {
    v4 = a2 != 0LL;
  }
  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 2, (__int64)a2);
  if ( v4 )
  {
    IUnknown_SetSite(*((IUnknown **)this + 5), a2);
    IUnknown_SetSite(*((IUnknown **)this + 6), a2);
  }
  return 0LL;
}
