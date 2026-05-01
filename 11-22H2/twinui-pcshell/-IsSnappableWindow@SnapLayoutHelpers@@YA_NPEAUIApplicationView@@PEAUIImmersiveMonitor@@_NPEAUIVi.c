/*
 * XREFs of ?IsSnappableWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NPEAUIVirtualDesktopManagerInternal@@@Z @ 0x180673DF8
 * Callers:
 *     ?_ShouldShowViewInSnapAssist@CSnapAssistControllerBase@@IEAA_NPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@@Z @ 0x18066DF90 (-_ShouldShowViewInSnapAssist@CSnapAssistControllerBase@@IEAA_NPEAUIImmersiveMonitor@@PEAUIApplic.c)
 *     ?GetSnappableWindowList@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AV?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@XZ @ 0x180684008 (-GetSnappableWindowList@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Win.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18007769C (-CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanResizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1802EBA66 (-CanResizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?HasRootSwitchableOwner@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1807462CC (-HasRootSwitchableOwner@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsViewShownInSwitchers@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180746358 (-IsViewShownInSwitchers@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall SnapLayoutHelpers::IsSnappableWindow(
        struct IUnknown *this,
        struct IApplicationView *a2,
        struct IImmersiveMonitor *a3,
        __int64 *a4)
{
  char v4; // si
  char v6; // bl
  __int64 v7; // rax
  int v8; // eax
  struct IApplicationView *v9; // rdx
  int v10; // eax
  int v11; // eax
  struct IApplicationView *v12; // rdx
  __int64 v14[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v16; // [rsp+48h] [rbp+10h] BYREF
  int v17; // [rsp+58h] [rbp+20h] BYREF

  v16 = a2;
  v4 = (char)a3;
  v6 = 0;
  v14[0] = 0LL;
  if ( a4 && (v7 = *a4, v14[0] = 0LL, v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v7 + 48))(a4, v14), v8 < 0) )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA11,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)(unsigned int)v8);
  }
  else if ( ApplicationViewHelpers::CanResizeView(
              (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))this,
              a2)
         && ApplicationViewHelpers::CanMaximizeView((ApplicationViewHelpers *)this, v9) )
  {
    LODWORD(v16) = 0;
    if ( v14[0] )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *, struct IApplicationView **))(*(_QWORD *)v14[0] + 24LL))(
              v14[0],
              this,
              &v16);
      if ( v10 >= 0 )
      {
        if ( !(_DWORD)v16 )
          goto LABEL_17;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA20,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
          (const char *)(unsigned int)v10);
      }
    }
    v17 = 0;
    v11 = ((__int64 (__fastcall *)(struct IUnknown *, int *))this->lpVtbl[10].QueryInterface)(this, &v17);
    if ( v11 >= 0 )
    {
      if ( !v17 )
        goto LABEL_17;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA28,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
        (const char *)(unsigned int)v11);
    }
    if ( (!v4 || !ApplicationViewHelpers::HasRootSwitchableOwner(this, v12))
      && ApplicationViewHelpers::IsViewShownInSwitchers((ApplicationViewHelpers *)this, v12) )
    {
      v6 = 1;
    }
  }
LABEL_17:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v14);
  return v6;
}
