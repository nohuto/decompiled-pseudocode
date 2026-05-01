/*
 * XREFs of ??4?$com_ptr_t@UIVirtualDesktopManagerInternal@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIVirtualDesktopManagerInternal@@@Z @ 0x18010F390
 * Callers:
 *     ?Initialize@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18010E880 (-Initialize@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVi.c)
 *     ?SetDesktopManager@MultitaskingViewGestureHandler@@UEAAXPEAUIVirtualDesktopManagerInternal@@@Z @ 0x18010F380 (-SetDesktopManager@MultitaskingViewGestureHandler@@UEAAXPEAUIVirtualDesktopManagerInternal@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<IVirtualDesktopManagerInternal,wil::err_returncode_policy>::operator=(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rdi

  v3 = *a1;
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return a1;
}
