/*
 * XREFs of ?UnpinViewInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180559C30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A8480 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4Reportin.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualPinnedAppsHandler::UnpinViewInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  int v3; // eax
  __int64 v4; // r9
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(VirtualPinnedAppsHandler *, struct IApplicationView *, struct IVirtualDesktop *))(*(_QWORD *)this + 120LL))(
         this,
         a2,
         a3);
  v5 = v3;
  if ( v3 >= 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetImpl'::`2'::impl,
      0,
      3u,
      v4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
      (const char *)(unsigned int)v3);
    return v5;
  }
}
