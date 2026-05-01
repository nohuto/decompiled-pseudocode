/*
 * XREFs of ?UpdateIcon@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180032530
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x180032720 (--$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateInstance@AppViewIconFactory@@SAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z @ 0x1804540C0 (-CreateInstance@AppViewIconFactory@@SAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@AEB.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall AppViewDataSourceAdapterBase::UpdateIcon(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationView *a2,
        const struct _GUID *a3)
{
  struct IApplicationViewIconLoader *v6; // rdx
  int v7; // eax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, _QWORD, void **); // rsi
  int v10; // eax
  int v11; // eax
  __int64 (__fastcall *v12)(struct IApplicationView *, struct IApplicationView **); // rbx
  int v13; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, _QWORD, void **); // rdi
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  void *v19; // [rsp+20h] [rbp-60h] BYREF
  struct IApplicationView *v20; // [rsp+28h] [rbp-58h] BYREF
  __int64 v21; // [rsp+30h] [rbp-50h] BYREF
  struct IApplicationView *v22; // [rsp+38h] [rbp-48h] BYREF
  __int64 v23; // [rsp+40h] [rbp-40h]
  __int64 v24; // [rsp+48h] [rbp-38h]
  _BYTE v25[32]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v20 = a2;
  v19 = 0LL;
  v6 = (struct IApplicationViewIconLoader *)*((_QWORD *)this + 5);
  if ( v6 )
  {
    v19 = 0LL;
    v18 = AppViewIconFactory::CreateInstance(a2, v6, a3, &v19);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1FF,
        (unsigned int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
        (const char *)(unsigned int)v18,
        (int)v19);
  }
  else if ( *((_QWORD *)this + 6) )
  {
    wil::try_com_query<IWin32ApplicationView,IApplicationView * &>(&v21, &v20);
    if ( v21 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView **))(*(_QWORD *)v21 + 24LL))(v21, &v20);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x207,
          (unsigned int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
          (const char *)(unsigned int)v7,
          (int)v19);
      v8 = *((_QWORD *)this + 6);
      v9 = *(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v8 + 48LL);
      v19 = 0LL;
      v10 = v9(v8, (unsigned int)v20, &v19);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x208,
          (unsigned int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
          (const char *)(unsigned int)v10,
          (int)v19);
    }
    else
    {
      v22 = 0LL;
      v23 = 0LL;
      v24 = 0LL;
      v12 = *(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationView **))(*(_QWORD *)a2 + 136LL);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v22);
      v23 = -1LL;
      v24 = -1LL;
      v13 = v12(a2, &v22);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x20D,
          (unsigned int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
          (const char *)(unsigned int)v13,
          (int)v19);
      v14 = *((_QWORD *)this + 6);
      v15 = *(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v14 + 56LL);
      v19 = 0LL;
      v20 = v22;
      v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v25, &v20);
      v17 = v15(v14, *(_QWORD *)(v16 + 24), &v19);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x20E,
          (unsigned int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
          (const char *)(unsigned int)v17,
          (int)v19);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v22);
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v21);
  }
  v11 = (*(__int64 (__fastcall **)(const struct _GUID *, void *))(*(_QWORD *)&a3->Data1 + 96LL))(a3, v19);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x212,
      (unsigned int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
      (const char *)(unsigned int)v11,
      (int)v19);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v19);
}
