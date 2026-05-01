/*
 * XREFs of ?Show@MiniSearchExperienceManager@@AEAAJ_N@Z @ 0x1801A8090
 * Callers:
 *     MiniSearchExperienceManager::LauncherShowRequested$_ResumeCoro$1 @ 0x1801A7B20 (MiniSearchExperienceManager--LauncherShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsWeak@VMiniSearchExperienceManager@@@WRL@Microsoft@@YAJPEAVMiniSearchExperienceManager@@PEAVWeakRef@01@@Z @ 0x18005ECE4 (--$AsWeak@VMiniSearchExperienceManager@@@WRL@Microsoft@@YAJPEAVMiniSearchExperienceManager@@PEAV.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006C1F8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAXAEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x180114ED8 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1801492F0 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_b60a44f3dc294a4e18769336981e2a38__void_::_Func_impl_no_alloc__lambda_b60a44f3dc294a4e18769336981e2a38__void___lambda_b60a44f3dc294a4e18769336981e2a38__0_ @ 0x1801A6D10 (std--_Func_impl_no_alloc__lambda_b60a44f3dc294a4e18769336981e2a38__void_--_Func_impl_no_alloc__l.c)
 *     ?ActivateAppAsync@MiniSearchExperienceManager@@AEAAX_N@Z @ 0x1801A731C (-ActivateAppAsync@MiniSearchExperienceManager@@AEAAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?StartMiniSearchActivationTest@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A38B8 (-StartMiniSearchActivationTest@MiniSearchExperienceManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MiniSearchExperienceManager::Show(MiniSearchExperienceManager *this, char a2)
{
  __int64 *v4; // rax
  int v5; // eax
  __int64 v6; // rdi
  void (__fastcall *v7)(__int64, _QWORD *); // rbx
  const char *v8; // r9
  __int64 result; // rax
  MiniSearchExperienceManager *v10; // [rsp+20h] [rbp-68h] BYREF
  __int64 v11; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v12[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v13; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 *v15; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+20h] BYREF

  try
  {
    MiniSearchExperienceManager::StartMiniSearchActivationTest(this);
    v16 = 0LL;
    v15 = &v16;
    v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v15);
    v5 = Microsoft::WRL::AsWeak<MiniSearchExperienceManager>((__int64)this, v4);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1E0,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
        (const char *)(unsigned int)v5,
        (int)v10);
    v6 = *((_QWORD *)this + 9);
    v7 = *(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 40LL);
    v10 = this;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(&v11, &v16);
    v13 = 0LL;
    v13 = std::_Func_impl_no_alloc__lambda_b60a44f3dc294a4e18769336981e2a38__void_::_Func_impl_no_alloc__lambda_b60a44f3dc294a4e18769336981e2a38__void___lambda_b60a44f3dc294a4e18769336981e2a38__0_(
            v12,
            (__int64 *)&v10);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
    v7(v6, v12);
    MiniSearchExperienceManager::ActivateAppAsync(this, a2);
    LODWORD(v15) = 0;
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
      (_QWORD *)this + 23,
      (unsigned int *)&v15);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v15) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x1F2,
                     (int)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
                     v8);
    return (unsigned int)v15;
  }
  return result;
}
