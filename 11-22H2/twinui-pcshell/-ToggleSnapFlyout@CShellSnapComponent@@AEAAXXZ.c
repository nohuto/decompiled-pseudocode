/*
 * XREFs of ?ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ @ 0x1806653A4
 * Callers:
 *     ?OnMessage@CShellSnapComponent@@UEAAJI_K_J@Z @ 0x180072870 (-OnMessage@CShellSnapComponent@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsAnySnapFlyoutInstanceVisible@SnapFlyoutHost@@QEAA_NXZ @ 0x18006C428 (-IsAnySnapFlyoutInstanceVisible@SnapFlyoutHost@@QEAA_NXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?HideAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@_N@Z @ 0x1802274E4 (-HideAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@_N@Z.c)
 *     ?ShowFlyoutAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@PEAUHWND__@@W4ShowFlags@1@@Z @ 0x180228028 (-ShowFlyoutAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@PEAUHWND__@@W4ShowFlags@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanSnapWindow@CShellSnapComponent@@AEAA_NPEAUHWND__@@@Z @ 0x18065FE20 (-CanSnapWindow@CShellSnapComponent@@AEAA_NPEAUHWND__@@@Z.c)
 *     ?IsSnapBarVisible@SnapFlyoutHost@@QEAA_NXZ @ 0x18067B7B4 (-IsSnapBarVisible@SnapFlyoutHost@@QEAA_NXZ.c)
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
    v5 = (SnapFlyoutHost *)*((_QWORD *)this + 114);
    if ( v5 && !SnapFlyoutHost::IsSnapBarVisible(v5) )
    {
      if ( SnapFlyoutHost::IsAnySnapFlyoutInstanceVisible(*((RTL_SRWLOCK **)this + 114)) )
      {
        SnapFlyoutHost::HideAsync(*((_QWORD *)this + 114), &v13, 1);
      }
      else
      {
        v14 = 0LL;
        v6 = (__int64 *)*((_QWORD *)this + 28);
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
              if ( CShellSnapComponent::CanSnapWindow(v10, WindowForView) )
                SnapFlyoutHost::ShowFlyoutAsync(*((_QWORD *)this + 114), &v13, v11, 2);
            }
          }
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v14);
      }
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x748,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      a4);
  }
}
