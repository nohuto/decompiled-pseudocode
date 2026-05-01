/*
 * XREFs of ?SetSite@ChromeManager@@UEAAJPEAUIUnknown@@@Z @ 0x1801ACE10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x1800E1C0C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall ChromeManager::SetSite(ChromeManager *this, struct IUnknown *a2)
{
  __int64 *v2; // rbp
  char v5; // di
  __int64 *v6; // r14
  IUnknown **v7; // rsi

  v2 = (__int64 *)((char *)this + 16);
  if ( !*((_QWORD *)this + 2) && a2 )
  {
    v5 = 1;
LABEL_4:
    v6 = (__int64 *)((char *)this + 40);
    v7 = (IUnknown **)((char *)this + 48);
    goto LABEL_5;
  }
  v5 = 0;
  if ( !*v2 || a2 )
    goto LABEL_4;
  v6 = (__int64 *)((char *)this + 40);
  IUnknown_SetSite(*((IUnknown **)this + 5), 0LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v6);
  v7 = (IUnknown **)((char *)this + 48);
  IUnknown_SetSite(*v7, 0LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v7);
LABEL_5:
  Microsoft::WRL::ComPtr<IUnknown>::operator=(v2, (__int64)a2);
  if ( v5 )
  {
    IUnknown_SetSite((IUnknown *)*v6, a2);
    IUnknown_SetSite(*v7, a2);
  }
  return 0LL;
}
