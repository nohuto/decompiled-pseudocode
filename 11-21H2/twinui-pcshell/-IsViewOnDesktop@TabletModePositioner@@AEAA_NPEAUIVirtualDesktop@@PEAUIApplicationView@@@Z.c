/*
 * XREFs of ?IsViewOnDesktop@TabletModePositioner@@AEAA_NPEAUIVirtualDesktop@@PEAUIApplicationView@@@Z @ 0x180505488
 * Callers:
 *     ?GetTopOperableView@TabletModePositioner@@AEAAJPEAUIObjectArray@@PEAPEAUIApplicationView@@@Z @ 0x180504234 (-GetTopOperableView@TabletModePositioner@@AEAAJPEAUIObjectArray@@PEAPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall TabletModePositioner::IsViewOnDesktop(
        TabletModePositioner *this,
        struct IVirtualDesktop *a2,
        struct IApplicationView *a3)
{
  char v3; // bl
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  TabletModePositioner *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = this;
  v3 = 0;
  if ( !a2 )
    return 1;
  v4 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, struct IApplicationView *, TabletModePositioner **))(*(_QWORD *)a2 + 24LL))(
         a2,
         a3,
         &v7);
  if ( v4 >= 0 )
  {
    if ( !(_DWORD)v7 )
      return v3;
    return 1;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x918,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v4);
  return v3;
}
