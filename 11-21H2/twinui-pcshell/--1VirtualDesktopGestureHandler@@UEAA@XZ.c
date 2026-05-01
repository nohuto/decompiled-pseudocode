/*
 * XREFs of ??1VirtualDesktopGestureHandler@@UEAA@XZ @ 0x18015C2AC
 * Callers:
 *     ??_GVirtualDesktopGestureHandler@@UEAAPEAXI@Z @ 0x18015C270 (--_GVirtualDesktopGestureHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x18015C324 (--1VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualDesktopGestureContext@@QEAA@XZ @ 0x18054F540 (--1VirtualDesktopGestureContext@@QEAA@XZ.c)
 */

void __fastcall VirtualDesktopGestureHandler::~VirtualDesktopGestureHandler(VirtualDesktopGestureHandler *this)
{
  VirtualDesktopGestureContext *v2; // rdi

  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::~VirtualDesktopGestureActivity((VirtualDesktopGestureHandler *)((char *)this + 88));
  v2 = (VirtualDesktopGestureContext *)*((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = 0LL;
  if ( v2 )
  {
    VirtualDesktopGestureContext::~VirtualDesktopGestureContext(v2);
    operator delete(v2, 0xC8uLL);
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 4);
  *((_DWORD *)this + 7) = -1073741823;
}
