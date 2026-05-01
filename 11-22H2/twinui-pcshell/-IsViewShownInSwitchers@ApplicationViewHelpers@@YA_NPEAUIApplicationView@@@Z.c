/*
 * XREFs of ?IsViewShownInSwitchers@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180746358
 * Callers:
 *     ?ControlGainedForActivation@KioskPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1805A7A50 (-ControlGainedForActivation@KioskPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@.c)
 *     ?IsOperableView@Win32ViewOperationPolicy@@QEAA_NPEAUIApplicationView@@@Z @ 0x1805A8BD0 (-IsOperableView@Win32ViewOperationPolicy@@QEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsSnappableWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NPEAUIVirtualDesktopManagerInternal@@@Z @ 0x180673DF8 (-IsSnappableWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NPEAUIVi.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall ApplicationViewHelpers::IsViewShownInSwitchers(
        ApplicationViewHelpers *this,
        struct IApplicationView *a2)
{
  char v2; // bl
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*(int (__fastcall **)(ApplicationViewHelpers *, int *))(*(_QWORD *)this + 216LL))(this, &v4) >= 0 )
    return v4 != 0;
  return v2;
}
