/*
 * XREFs of ?OnMessage@CVirtualDesktopManager@@UEAAJI_K_J@Z @ 0x180065570
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetWeakReference@VCVirtualDesktopManager@@@details@wil@@YAJPEAVCVirtualDesktopManager@@PEAPEAUIWeakReference@@@Z @ 0x1801B86E0 (--$GetWeakReference@VCVirtualDesktopManager@@@details@wil@@YAJPEAVCVirtualDesktopManager@@PEAPEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3fd5a9359bd88b84e59fbdca2ad299ce__&_ @ 0x1805FD070 (Windows--Internal--ComTaskPool--QueueTask__lambda_3fd5a9359bd88b84e59fbdca2ad299ce__-_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::OnMessage(CVirtualDesktopManager *this, int a2, __int64 a3)
{
  char *v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  char *v9; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a3 != 20 || a2 != 26 )
    return 0LL;
  v8 = 0LL;
  v4 = (char *)this - 48;
  wil::details::GetWeakReference<CVirtualDesktopManager>((char *)this - 48, &v8);
  v9 = v4;
  v5 = v8;
  v10[0] = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_3fd5a9359bd88b84e59fbdca2ad299ce____(v5, &v9);
  v7 = v6;
  if ( v6 >= 0 )
  {
    wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(v10);
    wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v8);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x62B,
    (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)v6,
    v8);
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(v10);
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v8);
  return v7;
}
