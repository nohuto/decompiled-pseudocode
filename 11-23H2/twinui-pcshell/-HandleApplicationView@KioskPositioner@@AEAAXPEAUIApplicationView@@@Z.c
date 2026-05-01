/*
 * XREFs of ?HandleApplicationView@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1805A867C
 * Callers:
 *     ?ControlGainedForActivation@KioskPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1805A7A50 (-ControlGainedForActivation@KioskPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@.c)
 *     ?InitializePosition@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1805A8AA0 (-InitializePosition@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationR.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetMainMonitor@KioskPositioner@@AEAA?AV?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1805A8254 (-GetMainMonitor@KioskPositioner@@AEAA-AV-$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wi.c)
 *     ?SetUwpViewFullScreen@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1805A9C28 (-SetUwpViewFullScreen@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KioskPositioner::HandleApplicationView(KioskPositioner *this, struct IApplicationView *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  _QWORD v6[9]; // [rsp+30h] [rbp-48h] BYREF
  struct IImmersiveMonitor *v7; // [rsp+80h] [rbp+8h] BYREF

  v4 = (__int64 *)*((_QWORD *)this + 80);
  v5 = *v4;
  v6[0] = off_1807EA5E0;
  v6[1] = this;
  v6[7] = v6;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, struct IApplicationView *, _QWORD, _QWORD *))(v5 + 16))(
          v4,
          a2,
          *((_QWORD *)this + 26),
          v6) )
  {
    KioskPositioner::GetMainMonitor((__int64)this, &v7);
    KioskPositioner::SetUwpViewFullScreen(this, a2, v7);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v7);
  }
  (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 48LL))(a2);
}
