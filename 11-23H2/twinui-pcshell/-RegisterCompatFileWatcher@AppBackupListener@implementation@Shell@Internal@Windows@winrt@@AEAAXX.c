/*
 * XREFs of ?RegisterCompatFileWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F4774
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$1 @ 0x18025A570 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBa_ea_18025A570.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x180187750 (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUfolder_change_reader_state@23@@Z @ 0x1801BD1EC (-reset@-$unique_storage@U-$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU1.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$ExpandEnvironmentStringsW@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1802E78DC (--$ExpandEnvironmentStringsW@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0BAA.c)
 *     ??_Gfolder_change_reader_state@details@wil@@QEAAPEAXI@Z @ 0x18063E9A0 (--_Gfolder_change_reader_state@details@wil@@QEAAPEAXI@Z.c)
 *     ??$NullAlloc_Error@AEAY0BH@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0BH@$$CBG@Z @ 0x1806EEE1C (--$NullAlloc_Error@AEAY0BH@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0BH@$$CBG@Z.c)
 *     ?create_common@?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEBG_NW4FolderChangeEvents@2@$$QEAV?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@@Z @ 0x1806F6C4C (-create_common@-$folder_change_reader_t@V-$unique_storage@U-$resource_policy@PEAUfo_ea_1806F6C4C.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterCompatFileWatcher(
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *this)
{
  __int64 v2; // rsi
  _OWORD *v3; // rbx
  wil::details::folder_change_reader_state **v4; // r14
  wil::details::folder_change_reader_state *v5; // rcx
  __int64 v6; // rcx
  const char *v7; // r9
  wil::details::folder_change_reader_state *v8; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v9[40]; // [rsp+38h] [rbp-C0h] BYREF
  _BYTE v10[8]; // [rsp+60h] [rbp-98h] BYREF
  _QWORD v11[15]; // [rsp+68h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  try
  {
    v2 = wil::ExpandEnvironmentStringsW<std::wstring,256>((__int64)v9, (__int64)L"%windir%\\appcompat");
    v3 = (_OWORD *)((char *)this + 472);
    if ( (winrt::Windows::Internal::Shell::implementation::AppBackupListener *)((char *)this + 472) != (winrt::Windows::Internal::Shell::implementation::AppBackupListener *)v2 )
    {
      std::wstring::_Tidy_deallocate((__int64)this + 472);
      *v3 = *(_OWORD *)v2;
      *(_OWORD *)((char *)this + 488) = *(_OWORD *)(v2 + 16);
      *(_QWORD *)(v2 + 16) = 0LL;
      *(_QWORD *)(v2 + 24) = 7LL;
      *(_WORD *)v2 = 0;
    }
    std::wstring::_Tidy_deallocate((__int64)v9);
    v11[0] = off_1807CA7A8;
    v11[1] = this;
    v11[13] = v11;
    if ( *((_QWORD *)this + 62) >= 8uLL )
      v3 = *(_OWORD **)v3;
    v8 = 0LL;
    wil::folder_change_reader_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create_common(
      &v8,
      v3);
    v4 = (wil::details::folder_change_reader_state **)((char *)this + 400);
    if ( v4 == &v8 )
    {
      v5 = v8;
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>::reset(
        v4,
        v8);
      v5 = 0LL;
    }
    if ( v5 )
      wil::details::folder_change_reader_state::`scalar deleting destructor'(v5);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v10);
    if ( !*v4 )
      CAppBackupListenerTelemetry::NullAlloc_Error<unsigned short const (&)[23]>(v6);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x3FD,
      (int)"pcshell\\twinui\\appbackuplistener\\lib\\appbackuplistener.cpp",
      v7);
  }
}
