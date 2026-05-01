/*
 * XREFs of ??1CPPIAllUpViewService@@UEAA@XZ @ 0x1801B9BDC
 * Callers:
 *     ??_GCPPIAllUpViewService@@UEAAPEAXI@Z @ 0x1801B9BA0 (--_GCPPIAllUpViewService@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CPPIAllUpViewService::~CPPIAllUpViewService(CPPIAllUpViewService *this)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 6);
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}
