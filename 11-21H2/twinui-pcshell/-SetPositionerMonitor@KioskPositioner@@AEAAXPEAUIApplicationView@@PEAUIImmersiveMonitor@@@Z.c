/*
 * XREFs of ?SetPositionerMonitor@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1804F1CA4
 * Callers:
 *     ?SetUwpViewFullScreen@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1804F1D48 (-SetUwpViewFullScreen@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180098FE0 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall KioskPositioner::SetPositionerMonitor(
        KioskPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64),
        struct IImmersiveApplication **a3)
{
  int ApplicationFromView; // eax
  int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, (struct IApplicationView *)&v8, a3);
  if ( ApplicationFromView < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3FF,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)ApplicationFromView,
      v6);
  v5 = (*(__int64 (__fastcall **)(__int64, struct IImmersiveApplication **))(*(_QWORD *)v8 + 360LL))(v8, a3);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x400,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v5,
      v6);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v8);
}
