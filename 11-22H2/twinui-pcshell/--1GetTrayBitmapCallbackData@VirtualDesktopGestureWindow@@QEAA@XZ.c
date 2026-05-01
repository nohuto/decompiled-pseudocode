/*
 * XREFs of ??1GetTrayBitmapCallbackData@VirtualDesktopGestureWindow@@QEAA@XZ @ 0x18060AC84
 * Callers:
 *     ??_GGetTrayBitmapCallbackData@VirtualDesktopGestureWindow@@QEAAPEAXI@Z @ 0x18060B0E8 (--_GGetTrayBitmapCallbackData@VirtualDesktopGestureWindow@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktopGestureWindow::GetTrayBitmapCallbackData::~GetTrayBitmapCallbackData(
        VirtualDesktopGestureWindow::GetTrayBitmapCallbackData *this)
{
  __int64 v2; // rcx
  void *v3; // rcx

  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 8);
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 16) + 16LL))(v2 + 16);
  }
  v3 = (void *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v3 )
    DeleteObject(v3);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 1);
}
