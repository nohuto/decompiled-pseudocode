/*
 * XREFs of ??1CRotationManagerSync@@UEAA@XZ @ 0x180179FCC
 * Callers:
 *     ??_GCRotationManagerSync@@UEAAPEAXI@Z @ 0x180179F90 (--_GCRotationManagerSync@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x1800EF978 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 */

void __fastcall CRotationManagerSync::~CRotationManagerSync(CRotationManagerSync *this)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 18);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 17);
  *((_DWORD *)this + 23) = -1073741823;
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((CRotationManagerSync *)((char *)this + 32));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
}
