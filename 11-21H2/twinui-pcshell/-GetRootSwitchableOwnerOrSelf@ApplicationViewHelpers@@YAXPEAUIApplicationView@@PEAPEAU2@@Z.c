/*
 * XREFs of ?GetRootSwitchableOwnerOrSelf@ApplicationViewHelpers@@YAXPEAUIApplicationView@@PEAPEAU2@@Z @ 0x1805EFAC8
 * Callers:
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180502E7C (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x180504750 (-HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ApplicationViewHelpers::GetRootSwitchableOwnerOrSelf(
        ApplicationViewHelpers *this,
        struct IApplicationView *a2,
        struct IApplicationView **a3)
{
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*(int (__fastcall **)(ApplicationViewHelpers *, struct IApplicationView *, struct IApplicationView **))(*(_QWORD *)this + 360LL))(
         this,
         a2,
         a3) < 0 )
  {
    v5 = (**(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, struct IApplicationView *))this)(
           this,
           &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
           a2);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x145,
        (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)(unsigned int)v5);
  }
}
