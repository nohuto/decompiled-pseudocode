/*
 * XREFs of ?OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x18045BFD0
 * Callers:
 *     ?LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x18045BDA0 (-LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x18004418C (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z @ 0x18045BF6C (-NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z.c)
 *     ?ReportActiveExperienceAboveLock@CortanaStoreAppExperienceManager@@AEAAJ_N@Z @ 0x18045C0DC (-ReportActiveExperienceAboveLock@CortanaStoreAppExperienceManager@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::OnViewConsolidationRequested(
        CortanaStoreAppExperienceManager *this)
{
  __int64 v2; // rcx
  int v3; // edi
  __int64 v4; // rdx
  __int64 v6; // rcx
  bool v7; // dl
  CortanaStoreAppExperienceManager *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 30);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 40LL))(v2, 1LL);
    if ( v3 < 0 )
    {
      v4 = 834LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
      return (unsigned int)v3;
    }
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 88LL))(*((_QWORD *)this + 30));
    if ( v3 < 0 )
    {
      v4 = 836LL;
      goto LABEL_4;
    }
  }
  v6 = *((_QWORD *)this + 29);
  if ( v6 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 344LL))(v6, 1LL);
    if ( v3 < 0 )
    {
      v4 = 841LL;
      goto LABEL_4;
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
    (HWND *)this + 48,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
    (HWND *)this + 49,
    0LL);
  CortanaStoreAppExperienceManager::NotifyTrayOfCortanaVisibility((const RECT *)this);
  if ( *((_BYTE *)this + 260) )
  {
    *((_BYTE *)this + 260) = 0;
    CortanaStoreAppExperienceManager::ReportActiveExperienceAboveLock(v8, v7);
  }
  return 0LL;
}
