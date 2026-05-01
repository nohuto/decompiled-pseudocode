/*
 * XREFs of ?EnsureLockWidgetCanvasRegistryPath@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18023930C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180246660 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x180045EC4 (-start@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18008EED8 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@DashboardManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B2564 (-Provider@DashboardManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800C4F00 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800C4F5C (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??$call_factory@USecurityDescriptorManager@Authorization@Security@WindowsUdk@winrt@@UISecurityDescriptorManagerStatics@2345@V_lambda_854d82a1e74abb924a7f571a93c2e7c9_@@@impl@winrt@@YA?A_P$$QEAV_lambda_854d82a1e74abb924a7f571a93c2e7c9_@@@Z @ 0x18022FD94 (--$call_factory@USecurityDescriptorManager@Authorization@Security@WindowsUdk@winrt@@UISecurityDe.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802350A8 (--1-$com_ptr_t@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180235758 (--1-$test_data_control@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@detai.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@1@XZ @ 0x180235D6C (--C-$tip_test@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@.c)
 *     ?create_key@?$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@QEBAXPEBGPEAPEAUHKEY__@@W4key_access@34@@Z @ 0x1802496C8 (-create_key@-$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@QEBAXPEBGPEAPEAUH.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180249CAC (-ensure_data@-$tip_test@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@deta.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::EnsureLockWidgetCanvasRegistryPath(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  _QWORD *v1; // rax
  __int64 v2; // rcx
  const struct _tlgProvider_t *v3; // rax
  const char *v4; // r9
  __int128 v5; // [rsp+20h] [rbp-48h] BYREF
  winrt::Windows::Internal::Shell::implementation::DashboardManager **v6; // [rsp+30h] [rbp-38h]
  __int64 v7; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  winrt::Windows::Internal::Shell::implementation::DashboardManager *v9; // [rsp+70h] [rbp+8h] BYREF
  void *v10; // [rsp+78h] [rbp+10h] BYREF
  void *v11; // [rsp+80h] [rbp+18h] BYREF
  void *v12; // [rsp+88h] [rbp+20h] BYREF

  v9 = this;
  LODWORD(v10) = 0;
  v11 = 0LL;
  v1 = (_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::ensure_data(&v11);
  tip2::details::shared_data<1,0,0>::start(*v1 + 8LL, &v5);
  *(_QWORD *)&v5 = -2147483647LL;
  v12 = 0LL;
  LODWORD(v10) = 1;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    (HKEY *)&v12,
    0LL);
  try
  {
    wil::reg::reg_view_details::reg_view_t<wil::err_exception_policy>::create_key();
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>((HKEY *)&v12);
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::operator->(
                  (__int64)&v11,
                  (__int64 *)&v10)
             + 264) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::~test_data_control<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>(&v10);
    LODWORD(v9) = (unsigned int)v9 | 1;
    v7 = *(_QWORD *)winrt::hstring::hstring(
                      (winrt::hstring *)&v12,
                      L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\DSH\\Widgets");
    LODWORD(v10) = 1;
    *(_QWORD *)&v5 = &v10;
    *((_QWORD *)&v5 + 1) = &v7;
    v6 = &v9;
    winrt::impl::call_factory<winrt::WindowsUdk::Security::Authorization::SecurityDescriptorManager,winrt::WindowsUdk::Security::Authorization::ISecurityDescriptorManagerStatics,_lambda_854d82a1e74abb924a7f571a93c2e7c9_>((unsigned int **)&v5);
    winrt::hstring::~hstring(&v12);
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::operator->(
                  (__int64)&v11,
                  (__int64 *)&v10)
             + 265) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::~test_data_control<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>(&v10);
    v3 = DashboardManagerTelemetry::Provider(v2);
    if ( *(_DWORD *)v3 > 5u )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        (int)v3,
        (int)&unk_18087672A,
        0);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x925,
      (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      v4);
  }
  wil::com_ptr_t<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>,wil::err_returncode_policy>(&v11);
}
