/*
 * XREFs of ?ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ @ 0x18059772C
 * Callers:
 *     ?OnMessage@CShellSnapComponent@@UEAAJI_K_J@Z @ 0x18003E560 (-OnMessage@CShellSnapComponent@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?IsVisible@SnapFlyoutHost@@QEAA_NXZ @ 0x180035E28 (-IsVisible@SnapFlyoutHost@@QEAA_NXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?HideAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@_N@Z @ 0x1801C0560 (-HideAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@_N@Z.c)
 *     ?ShowAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@PEAUHWND__@@W4ShowFlags@1@@Z @ 0x1801C0FA4 (-ShowAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@PEAUHWND__@@W4ShowFlags@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanShowFlyoutForWindow@CShellSnapComponent@@AEAA_NPEAUHWND__@@@Z @ 0x180592680 (-CanShowFlyoutForWindow@CShellSnapComponent@@AEAA_NPEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CShellSnapComponent::ToggleSnapFlyout(
        CShellSnapComponent *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  SnapFlyoutHost *v5; // rcx
  __int64 *v6; // rcx
  __int64 v7; // rax
  struct IApplicationView *v8; // rdx
  ApplicationViewHelpers *WindowForView; // rax
  CShellSnapComponent *v10; // rcx
  __int64 v11; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v13; // [rsp+30h] [rbp+8h] BYREF
  ApplicationViewHelpers *v14; // [rsp+38h] [rbp+10h] BYREF

  try
  {
    v5 = (SnapFlyoutHost *)*((_QWORD *)this + 123);
    if ( v5 )
    {
      if ( SnapFlyoutHost::IsVisible(v5) )
      {
        SnapFlyoutHost::HideAsync(*((_QWORD *)this + 123), &v13, 1);
      }
      else
      {
        v14 = 0LL;
        v6 = (__int64 *)*((_QWORD *)this + 29);
        v7 = *v6;
        v14 = 0LL;
        if ( (*(int (__fastcall **)(__int64 *, ApplicationViewHelpers **))(v7 + 72))(v6, &v14) >= 0 )
        {
          if ( v14 )
          {
            WindowForView = (ApplicationViewHelpers *)ApplicationViewHelpers::GetWindowForView(
                                                        (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v14,
                                                        v8);
            v11 = (__int64)WindowForView;
            if ( WindowForView )
            {
              if ( CShellSnapComponent::CanShowFlyoutForWindow(v10, WindowForView) )
                SnapFlyoutHost::ShowAsync(*((_QWORD *)this + 123), &v13, v11, 2);
            }
          }
        }
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v14);
      }
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x66C,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      a4);
  }
}
