/*
 * XREFs of ?LoadDataFromStateRepository@@YAJPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x18011E200
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f57164c75fe082189e2647ffb9ef0fb___::Run @ 0x18011E1E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8f57164c75fe082189e2647ffb9ef0fb___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLocalizedDisplayNameForApp@@YAJPEAUIApplication@StateRepository@Internal@Windows@@PEAPEAUHSTRING__@@@Z @ 0x18011E344 (-GetLocalizedDisplayNameForApp@@YAJPEAUIApplication@StateRepository@Internal@Windows@@PEAPEAUHST.c)
 *     ??$GetActivationFactory@UIApplicationStatics@StateRepository@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIApplicationStatics@StateRepository@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18011E488 (--$GetActivationFactory@UIApplicationStatics@StateRepository@Internal@Windows@@@wil@@YA-AV-$com_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x18013B958 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall LoadDataFromStateRepository(const unsigned __int16 *a1, HSTRING *a2)
{
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, _QWORD, _QWORD, struct Windows::Internal::StateRepository::IApplication **); // rdi
  unsigned int v5; // r8d
  __int64 v6; // rax
  int v7; // eax
  int LocalizedDisplayNameForApp; // eax
  int v9; // eax
  int v11; // eax
  int v12; // [rsp+20h] [rbp-68h]
  _BYTE v13[8]; // [rsp+30h] [rbp-58h] BYREF
  struct Windows::Internal::StateRepository::IApplication *v14; // [rsp+38h] [rbp-50h] BYREF
  const WCHAR *v15; // [rsp+40h] [rbp-48h] BYREF
  __int64 v16; // [rsp+48h] [rbp-40h] BYREF
  _BYTE v17[32]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v15 = a1;
  wil::GetActivationFactory<Windows::Internal::StateRepository::IApplicationStatics>(&v16);
  v14 = 0LL;
  v3 = v16;
  v4 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct Windows::Internal::StateRepository::IApplication **))(*(_QWORD *)v16 + 240LL);
  v14 = 0LL;
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v17, &v15, v5);
  v7 = v4(v3, 0LL, *(_QWORD *)(v6 + 24), &v14);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x6A,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v7,
      v12);
  WindowsDeleteString(*a2);
  *a2 = 0LL;
  LocalizedDisplayNameForApp = GetLocalizedDisplayNameForApp(v14, a2);
  if ( LocalizedDisplayNameForApp < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6C,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)LocalizedDisplayNameForApp);
    v11 = Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(a2);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6F,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v11);
  }
  v9 = (*(__int64 (__fastcall **)(struct Windows::Internal::StateRepository::IApplication *, _BYTE *))(*(_QWORD *)v14 + 160LL))(
         v14,
         v13);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x73,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v9);
  else
    *((_BYTE *)a2 + 26) = v13[0] != 0;
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v14);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v16);
  return 0LL;
}
