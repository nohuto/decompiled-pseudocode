/*
 * XREFs of ?SetTouchpadSettingsManager@MultitaskingViewGestureHandler@@UEAAXPEAUITouchpadSettingsManager@@@Z @ 0x18017B1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MultitaskingViewGestureHandler::SetTouchpadSettingsManager(
        MultitaskingViewGestureHandler *this,
        struct ITouchpadSettingsManager *a2)
{
  struct ITouchpadSettingsManager *v4; // rax
  struct ITouchpadSettingsManager *v5; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct ITouchpadSettingsManager *)*((_QWORD *)this + 11);
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct ITouchpadSettingsManager *))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = (struct ITouchpadSettingsManager *)*((_QWORD *)this + 11);
    }
    v5 = v4;
    *((_QWORD *)this + 11) = a2;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v5);
  }
}
