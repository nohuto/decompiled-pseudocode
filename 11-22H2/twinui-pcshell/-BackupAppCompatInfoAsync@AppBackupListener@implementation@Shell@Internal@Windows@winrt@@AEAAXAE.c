/*
 * XREFs of ?BackupAppCompatInfoAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1806F0FC8
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F121C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 *     ?CompatFolderChangeCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBW4FolderChangeEvent@wil@@PEBG@Z @ 0x1806F24EC (-CompatFolderChangeCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$AttemptCompatInfoBackup@PEBG@CAppBackupListenerTelemetry@@SAX$$QEAPEBG@Z @ 0x1806EE514 (--$AttemptCompatInfoBackup@PEBG@CAppBackupListenerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$NullFactory_Error@AEAY0FF@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0FF@$$CBG@Z @ 0x1806EEF0C (--$NullFactory_Error@AEAY0FF@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0FF@$$CBG@Z.c)
 *     ??$call@AEAV_lambda_7b7c9298bfeaa6f21443744179c3c395_@@@?$factory_cache_entry@UExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIExtensionFactoryStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_7b7c9298bfeaa6f21443744179c3c395_@@@Z @ 0x1806EFDD8 (--$call@AEAV_lambda_7b7c9298bfeaa6f21443744179c3c395_@@@-$factory_cache_entry@UExtensionFactory@.c)
 *     ?BackupAppCompatInfoAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics4@UIAppListBackupExtensionStatics4@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1806F0F70 (-BackupAppCompatInfoAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?GetFactory@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics@UIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x1806F34B4 (-GetFactory@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactorySt_ea_1806F34B4.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoAsync(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v2; // rsi
  void (__fastcall ***v3)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v4; // rcx
  __int64 v5; // r14
  void (__fastcall ***v6)(_QWORD, void *, __int64 *); // rbx
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+28h] [rbp-C0h] BYREF
  _QWORD v13[3]; // [rsp+30h] [rbp-B8h] BYREF
  const winrt::hresult_error *v14; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v15[32]; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v16[32]; // [rsp+70h] [rbp-78h] BYREF
  _QWORD v17[11]; // [rsp+90h] [rbp-58h] BYREF
  __int64 v18; // [rsp+F0h] [rbp+8h] BYREF
  __int64 *v19; // [rsp+F8h] [rbp+10h]
  void (__fastcall ***v20)(_QWORD, void *, __int64 *); // [rsp+100h] [rbp+18h] BYREF
  __int64 v21; // [rsp+108h] [rbp+20h] BYREF

  v19 = a2;
  v18 = a1;
  v2 = a2;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v15,
    L"WindowsUdk.System.UserProfile.AppListBackupExtension",
    52);
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v16,
    L"com.microsoft.windows.extension.applistbackup",
    45);
  try
  {
    v13[0] = v16;
    v13[1] = v15;
    v13[2] = &qword_18098E288;
    _InterlockedIncrement64(&qword_18098E288);
    if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics> )
    {
      winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>::GetFactory(
        &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>,
        &v20,
        v16,
        v15);
      v5 = -1LL;
      _InterlockedAdd64(&qword_18098E288, 0xFFFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v5 = -1LL;
      _InterlockedAdd64(&qword_18098E288, 0xFFFFFFFFFFFFFFFFuLL);
      winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>::call<_lambda_7b7c9298bfeaa6f21443744179c3c395_ &>(
        v3,
        (__int64)&v20,
        v13);
    }
    v6 = v20;
    if ( v20 )
    {
      v21 = 0LL;
      (**v20)(v20, &winrt::impl::guid_v<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics4>, &v21);
      v7 = v21;
      v18 = v21;
      v8 = v21;
    }
    else
    {
      v7 = 0LL;
      v18 = 0LL;
      v8 = 0LL;
    }
    if ( v6 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
    if ( v8 )
    {
      v9 = (__int64)v2;
      if ( (unsigned __int64)v2[3] >= 8 )
        v9 = *v2;
      v12 = v9;
      CAppBackupListenerTelemetry::AttemptCompatInfoBackup<unsigned short const *>(&v12);
      if ( (unsigned __int64)v2[3] >= 8 )
        v2 = (__int64 *)*v2;
      do
        ++v5;
      while ( *((_WORD *)v2 + v5) );
      winrt::param::hstring::create_string_reference(
        (winrt::param::hstring *)v17,
        (const unsigned __int16 *const)v2,
        v5);
      winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics4<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics4>::BackupAppCompatInfoAsync(
        &v18,
        &v11,
        v17);
      if ( v11 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
    }
    else
    {
      CAppBackupListenerTelemetry::NullFactory_Error<unsigned short const (&)[85]>(v4);
    }
    if ( v7 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
  }
  catch ( const winrt::hresult_error *v14 )
  {
    v10 = (__int64)v19;
    if ( (unsigned __int64)v19[3] >= 8 )
      v10 = *v19;
    v21 = v10;
    LODWORD(v18) = *((_DWORD *)v14 + 3);
    CAppBackupListenerTelemetry::CompatInfoBackup_Error<unsigned short const (&)[38],int,unsigned short const *>(
      (unsigned int)v18,
      &v18,
      &v21);
  }
}
