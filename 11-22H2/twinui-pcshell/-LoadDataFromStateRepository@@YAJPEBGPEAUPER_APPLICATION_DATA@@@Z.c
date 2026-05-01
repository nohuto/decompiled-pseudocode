/*
 * XREFs of ?LoadDataFromStateRepository@@YAJPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x1800537D0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f57164c75fe082189e2647ffb9ef0fb___::Run @ 0x1800537B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8f57164c75fe082189e2647ffb9ef0fb___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetLocalizedDisplayNameForApp@@YAJPEAUIApplication@StateRepository@Internal@Windows@@PEAPEAUHSTRING__@@@Z @ 0x180053914 (-GetLocalizedDisplayNameForApp@@YAJPEAUIApplication@StateRepository@Internal@Windows@@PEAPEAUHST.c)
 *     ??$GetActivationFactory@UIApplicationStatics@StateRepository@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIApplicationStatics@StateRepository@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180099240 (--$GetActivationFactory@UIApplicationStatics@StateRepository@Internal@Windows@@@wil@@YA-AV-$com_.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x180192AE0 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall LoadDataFromStateRepository(const unsigned __int16 *a1, HSTRING *a2)
{
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, _QWORD, _QWORD, struct Windows::Internal::StateRepository::IApplication **); // rdi
  __int64 v5; // rax
  int v6; // eax
  int LocalizedDisplayNameForApp; // eax
  int v8; // eax
  int v10; // eax
  int v11; // [rsp+20h] [rbp-68h]
  _BYTE v12[8]; // [rsp+30h] [rbp-58h] BYREF
  struct Windows::Internal::StateRepository::IApplication *v13; // [rsp+38h] [rbp-50h] BYREF
  const unsigned __int16 *v14; // [rsp+40h] [rbp-48h] BYREF
  __int64 v15; // [rsp+48h] [rbp-40h] BYREF
  _BYTE v16[32]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v14 = a1;
  wil::GetActivationFactory<Windows::Internal::StateRepository::IApplicationStatics>(&v15);
  v13 = 0LL;
  v3 = v15;
  v4 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct Windows::Internal::StateRepository::IApplication **))(*(_QWORD *)v15 + 240LL);
  v13 = 0LL;
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v16, &v14);
  v6 = v4(v3, 0LL, *(_QWORD *)(v5 + 24), &v13);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x6C,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v6,
      v11);
  WindowsDeleteString(*a2);
  *a2 = 0LL;
  LocalizedDisplayNameForApp = GetLocalizedDisplayNameForApp(v13, a2);
  if ( LocalizedDisplayNameForApp < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6E,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)LocalizedDisplayNameForApp,
      v11);
    v10 = Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(a2, &v14);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x71,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v10,
        v11);
  }
  v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::StateRepository::IApplication *, _BYTE *))(*(_QWORD *)v13 + 160LL))(
         v13,
         v12);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x75,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v8,
      v11);
  else
    *((_BYTE *)a2 + 26) = v12[0] != 0;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v13);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
  return 0LL;
}
