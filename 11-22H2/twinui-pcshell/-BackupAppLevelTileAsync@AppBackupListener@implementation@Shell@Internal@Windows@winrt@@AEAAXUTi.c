/*
 * XREFs of ?BackupAppLevelTileAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUTileId@StartScreen@UI@WindowsUdk@6@Uhstring@6@@Z @ 0x1806F19C8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_ResumeCoro$1 @ 0x18025AD50 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileAdded$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged$_ResumeCoro$1 @ 0x18025B3D0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileChanged$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved$_ResumeCoro$1 @ 0x18025B8B0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileRemoved$_ResumeCoro$1.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800C2AB0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ToString@?$consume_Windows_Foundation_IStringable@UTileId@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1803E46A8 (-ToString@-$consume_Windows_Foundation_IStringable@UTileId@StartScreen@UI@WindowsUdk@winrt@@@imp.c)
 *     ?GetTile@?$consume_WindowsUdk_UI_StartScreen_ITileCollection@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUTileId@StartScreen@UI@WindowsUdk@3@@Z @ 0x1805E30CC (-GetTile@-$consume_WindowsUdk_UI_StartScreen_ITileCollection@UITileCollection@StartScreen@UI@Win.c)
 *     ??$AttemptAppLevelTileBackup@PEAGPEBG@CAppBackupListenerTelemetry@@SAX$$QEAPEAG$$QEAPEBG@Z @ 0x1806EE484 (--$AttemptAppLevelTileBackup@PEAGPEBG@CAppBackupListenerTelemetry@@SAX$$QEAPEAG$$QEAPEBG@Z.c)
 *     ??$NullFactory_Error@AEAY0FI@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0FI@$$CBG@Z @ 0x1806EEF84 (--$NullFactory_Error@AEAY0FI@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0FI@$$CBG@Z.c)
 *     ??$call@AEAV_lambda_7b7c9298bfeaa6f21443744179c3c395_@@@?$factory_cache_entry@UExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIExtensionFactoryStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_7b7c9298bfeaa6f21443744179c3c395_@@@Z @ 0x1806EFDD8 (--$call@AEAV_lambda_7b7c9298bfeaa6f21443744179c3c395_@@@-$factory_cache_entry@UExtensionFactory@.c)
 *     ?AppLifecycleProperties@?$consume_WindowsUdk_UI_StartScreen_ITile@UITile@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806F0EA8 (-AppLifecycleProperties@-$consume_WindowsUdk_UI_StartScreen_ITile@UITile@StartScreen@UI@WindowsU.c)
 *     ?BackupTileAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics6@UIAppListBackupExtensionStatics6@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUTileCollection@StartScreen@UI@WindowsUdk@3@AEBUTileId@5673@AEBUhstring@param@3@@Z @ 0x1806F1F9C (-BackupTileAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics6@UIAppLi.c)
 *     ?GetDateTime@?$consume_Windows_Foundation_IPropertyValue@U?$IReference@V?$time_point@Uclock@winrt@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@chrono@std@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806F3408 (-GetDateTime@-$consume_Windows_Foundation_IPropertyValue@U-$IReference@V-$time_point@Uclock@winr.c)
 *     ?GetFactory@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics@UIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x1806F34B4 (-GetFactory@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactorySt_ea_1806F34B4.c)
 *     ?InstalledDate@?$consume_WindowsUdk_UI_StartScreen_IAppLifecycleProperties@UIAppLifecycleProperties@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806F3EA0 (-InstalledDate@-$consume_WindowsUdk_UI_StartScreen_IAppLifecycleProperties@UIAppLifecyclePropert.c)
 */

// Hidden C++ exception states: #wind=10 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppLevelTileAsync(
        __int64 a1,
        __int64 *a2,
        winrt::hstring *a3)
{
  int v6; // ebx
  winrt::hstring *v7; // rax
  const WCHAR *v8; // rdi
  const char *v9; // r9
  char *FileNameW; // rax
  int v11; // r13d
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax
  char v16; // di
  void (__fastcall ***v17)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v18; // rcx
  void (__fastcall ***v19)(_QWORD, void *, _QWORD *); // rbx
  __int64 v20; // rdi
  __int64 v21; // r15
  void *v22; // rbx
  __int64 v23; // [rsp+30h] [rbp-F8h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v25; // [rsp+40h] [rbp-E8h] BYREF
  const unsigned __int16 *v26; // [rsp+48h] [rbp-E0h] BYREF
  LPVOID v27; // [rsp+50h] [rbp-D8h] BYREF
  void (__fastcall ***v28)(_QWORD, void *, __int64 *); // [rsp+58h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD v30[2]; // [rsp+68h] [rbp-C0h] BYREF
  _BYTE v31[8]; // [rsp+78h] [rbp-B0h] BYREF
  __int64 *v32; // [rsp+80h] [rbp-A8h]
  _BYTE v33[32]; // [rsp+90h] [rbp-98h] BYREF
  _BYTE v34[32]; // [rsp+B0h] [rbp-78h] BYREF
  _QWORD v35[11]; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v36; // [rsp+130h] [rbp+8h] BYREF
  __int64 *v37; // [rsp+138h] [rbp+10h]
  winrt::hstring *v38; // [rsp+140h] [rbp+18h]
  __int64 v39; // [rsp+148h] [rbp+20h] BYREF

  v38 = a3;
  v37 = a2;
  v6 = 0;
  LODWORD(v36) = 0;
  v7 = (winrt::hstring *)winrt::impl::consume_Windows_Foundation_IStringable<winrt::WindowsUdk::UI::StartScreen::TileId>::ToString(
                           a2,
                           &v26);
  v8 = winrt::hstring::c_str(v7);
  FileNameW = 0LL;
  if ( v8 )
  {
    if ( PathIsFileSpecW(v8) )
      FileNameW = (char *)v8;
    else
      FileNameW = (char *)PathFindFileNameW(v8);
  }
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &pv,
    FileNameW,
    0xFFFFFFFFFFFFFFFFuLL,
    v9);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v26);
  v11 = a1 + 152;
  winrt::impl::consume_WindowsUdk_UI_StartScreen_ITileCollection<winrt::WindowsUdk::UI::StartScreen::ITileCollection>::GetTile(
    (__int64 *)(a1 + 152),
    &v39,
    a2);
  if ( !v39 )
    goto LABEL_9;
  v12 = winrt::impl::consume_WindowsUdk_UI_StartScreen_ITile<winrt::WindowsUdk::UI::StartScreen::ITile>::AppLifecycleProperties(
          &v39,
          &v23);
  LODWORD(v36) = 1;
  v13 = (_QWORD *)winrt::impl::consume_WindowsUdk_UI_StartScreen_IAppLifecycleProperties<winrt::WindowsUdk::UI::StartScreen::IAppLifecycleProperties>::InstalledDate(
                    v12,
                    &v25);
  v6 = 3;
  LODWORD(v36) = 3;
  if ( !*v13 )
    goto LABEL_8;
  v14 = winrt::impl::consume_WindowsUdk_UI_StartScreen_ITile<winrt::WindowsUdk::UI::StartScreen::ITile>::AppLifecycleProperties(
          &v39,
          &v27);
  LODWORD(v36) = 7;
  v15 = winrt::impl::consume_WindowsUdk_UI_StartScreen_IAppLifecycleProperties<winrt::WindowsUdk::UI::StartScreen::IAppLifecycleProperties>::InstalledDate(
          v14,
          &v29);
  v6 = 15;
  LODWORD(v36) = 15;
  if ( *(_QWORD *)winrt::impl::consume_Windows_Foundation_IPropertyValue<winrt::Windows::Foundation::IReference<std::chrono::time_point<winrt::clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>>::GetDateTime(
                    v15,
                    v31) )
LABEL_9:
    v16 = 0;
  else
LABEL_8:
    v16 = 1;
  if ( (v6 & 8) != 0 )
  {
    v6 &= ~8u;
    LODWORD(v36) = v6;
    if ( v29 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v29);
  }
  if ( (v6 & 4) != 0 )
  {
    v6 &= ~4u;
    LODWORD(v36) = v6;
    if ( v27 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v27);
  }
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    LODWORD(v36) = v6;
    if ( v25 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v25);
  }
  if ( (v6 & 1) != 0 && v23 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v23);
  if ( v16 )
  {
    if ( v39 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v39);
    if ( pv )
      CoTaskMemFree(pv);
    if ( *a2 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a2);
  }
  else
  {
    winrt::param::hstring::create_string_reference(
      (winrt::param::hstring *)v33,
      L"WindowsUdk.System.UserProfile.AppListBackupExtension",
      52);
    winrt::param::hstring::create_string_reference(
      (winrt::param::hstring *)v34,
      L"com.microsoft.windows.extension.applistbackup",
      45);
    v30[0] = v34;
    v30[1] = v33;
    v32 = &qword_18098E288;
    _InterlockedIncrement64(&qword_18098E288);
    if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics> )
    {
      winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>::GetFactory(
        &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>,
        &v28,
        v34,
        v33);
      _InterlockedDecrement64(&qword_18098E288);
    }
    else
    {
      _InterlockedDecrement64(&qword_18098E288);
      winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>::call<_lambda_7b7c9298bfeaa6f21443744179c3c395_ &>(
        v17,
        (__int64)&v28,
        v30);
    }
    v19 = v28;
    if ( v28 )
    {
      v23 = 0LL;
      (**v28)(v28, &winrt::impl::guid_v<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics6>, &v23);
      v20 = v23;
      v36 = v23;
      v21 = v23;
    }
    else
    {
      v20 = 0LL;
      v36 = 0LL;
      v21 = 0LL;
    }
    if ( v19 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v28);
    if ( v21 )
    {
      v26 = winrt::hstring::c_str(a3);
      v22 = pv;
      v27 = pv;
      CAppBackupListenerTelemetry::AttemptAppLevelTileBackup<unsigned short *,unsigned short const *>(
        (__int64 *)&v27,
        (__int64 *)&v26);
      v35[0] = *(_QWORD *)a3;
      winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics6<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics6>::BackupTileAsync(
        (unsigned int)&v36,
        (unsigned int)&v25,
        v11,
        (_DWORD)a2,
        (__int64)v35);
      if ( v25 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v25);
    }
    else
    {
      CAppBackupListenerTelemetry::NullFactory_Error<unsigned short const (&)[88]>(v18);
      v22 = pv;
    }
    if ( v20 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v36);
    if ( v39 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v39);
    if ( v22 )
      CoTaskMemFree(v22);
    if ( *a2 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a2);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a3);
}
