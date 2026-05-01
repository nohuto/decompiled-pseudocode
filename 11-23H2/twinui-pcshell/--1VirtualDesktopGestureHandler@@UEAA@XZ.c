/*
 * XREFs of ??1VirtualDesktopGestureHandler@@UEAA@XZ @ 0x1801458A4
 * Callers:
 *     ??_GVirtualDesktopGestureHandler@@UEAAPEAXI@Z @ 0x1801482E0 (--_GVirtualDesktopGestureHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x18014591C (--1VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualDesktopGestureContext@@QEAA@XZ @ 0x18060ACF0 (--1VirtualDesktopGestureContext@@QEAA@XZ.c)
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
    operator delete(v2, 0xC0uLL);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 4);
  *((_DWORD *)this + 7) = -1073741823;
}
