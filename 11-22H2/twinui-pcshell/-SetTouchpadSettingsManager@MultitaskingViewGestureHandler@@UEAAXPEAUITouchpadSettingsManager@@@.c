/*
 * XREFs of ?SetTouchpadSettingsManager@MultitaskingViewGestureHandler@@UEAAXPEAUITouchpadSettingsManager@@@Z @ 0x1801B7ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MultitaskingViewGestureHandler::SetTouchpadSettingsManager(
        MultitaskingViewGestureHandler *this,
        struct ITouchpadSettingsManager *a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct ITouchpadSettingsManager **)this + 11) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct ITouchpadSettingsManager *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = a2;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v4);
  }
}
