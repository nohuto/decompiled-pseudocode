/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$1 @ 0x180258B90
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_InitCoro$2 @ 0x180258A6C (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync$_InitCoro$2.c)
 * Callees:
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x180072F74 (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180087AA4 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1800B3E54 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@XZ @ 0x1801BA18C (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@X.c)
 *     ?release_ref@?$com_ptr@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1801BCF98 (-release_ref@-$com_ptr@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAX.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x1802D2E70 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@U-$IAsyncOperation@UIR.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@implementation@Shell@Internal@Windows@2@UTile@StartScreen@UI@WindowsUdk@2@UTileChangedEventArgs@9UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1802D3764 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@imp.c)
 *     ??$AttemptEventDrivenAppBackup@PEBGPEBGPEBGAEAI@CAppBackupListenerTelemetry@@SAX$$QEAPEBG00AEAI@Z @ 0x1806EE588 (--$AttemptEventDrivenAppBackup@PEBGPEBGPEBGAEAI@CAppBackupListenerTelemetry@@SAX$$QEAPEBG00AEAI@.c)
 *     ??$NullFactory_Error@AEAY0FK@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0FK@$$CBG@Z @ 0x1806EEFFC (--$NullFactory_Error@AEAY0FK@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0FK@$$CBG@Z.c)
 *     ??$try_as@UIAppListBackupExtensionStatics2@UserProfile@System@WindowsUdk@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1806F032C (--$try_as@UIAppListBackupExtensionStatics2@UserProfile@System@WindowsUdk@winrt@@@IUnknown@Founda.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync_::_10_::_parameters_::__parameters_ @ 0x1806F081C (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync_ea_1806F081C.c)
 *     ?BackupAppAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics2@UIAppListBackupExtensionStatics2@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@00@Z @ 0x1806F0EFC (-BackupAppAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics2@UIAppLis.c)
 *     ?GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@0@Z @ 0x1806F351C (-GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AE_ea_1806F351C.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync__ResumeCoro_1(
        __int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rcx
  __int64 Factory; // rax
  const unsigned __int16 *v4; // rax
  const unsigned __int16 **v5; // r8
  const unsigned __int16 *v6; // rax
  const unsigned __int16 **v7; // rdx
  const unsigned __int16 *v8; // rax
  const unsigned __int16 **v9; // r10
  __int64 v10; // rdx
  __int64 v11; // r8
  const unsigned __int16 *v12; // rax
  __int64 v13; // rdx
  const unsigned __int16 *v14; // rax
  __int64 v15; // rdx
  const unsigned __int16 *v16; // rax
  __int64 v17; // rdx
  int v18; // ecx
  const winrt::hresult_error *v19; // [rsp+38h] [rbp-40h] BYREF

  v1 = a1;
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 3:
      goto LABEL_11;
    case 2:
      winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
        *(_QWORD *)(a1 + 294),
        (__int64 *)(a1 + 16));
      *(_BYTE *)(v1 + 24) = 0;
      *(_QWORD *)(v1 + 32) = v1 + 24;
      if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
        goto LABEL_5;
      *(_WORD *)(v1 + 8) = 4;
      ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_2__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_2__experimental_std___experimental_std___Z(
        v2,
        v1);
      return;
    case 4:
LABEL_5:
      _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_XZ();
      *(_QWORD *)(v1 + 72) = L"WindowsUdk.System.UserProfile.AppListBackupExtension";
      *(_QWORD *)(v1 + 80) = 52LL;
      winrt::param::hstring::hstring((winrt::param::hstring *)(v1 + 40), v1 + 72);
      winrt::param::hstring::hstring(
        (winrt::param::hstring *)(v1 + 88),
        L"com.microsoft.windows.extension.applistbackup");
      try
      {
        Factory = winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory::GetFactory(
                    (const struct winrt::param::hstring *)(v1 + 120),
                    (const struct winrt::param::hstring *)(v1 + 88));
        winrt::Windows::Foundation::IUnknown::try_as<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics2>(
          Factory,
          v1 + 128);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(v1 + 120));
        if ( *(_QWORD *)(v1 + 128) )
        {
          v4 = winrt::hstring::c_str((winrt::hstring *)(v1 + 318));
          *v5 = v4;
          v6 = winrt::hstring::c_str((winrt::hstring *)(v1 + 310));
          *v7 = v6;
          v8 = winrt::hstring::c_str((winrt::hstring *)(v1 + 302));
          *v9 = v8;
          CAppBackupListenerTelemetry::AttemptEventDrivenAppBackup<unsigned short const *,unsigned short const *,unsigned short const *,unsigned int &>(
            v9,
            v10,
            v11,
            v1 + 326);
          *(_QWORD *)(v1 + 160) = *(_QWORD *)(v1 + 318);
          *(_QWORD *)(v1 + 192) = *(_QWORD *)(v1 + 310);
          *(_QWORD *)(v1 + 224) = *(_QWORD *)(v1 + 302);
          winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics2<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics2>::BackupAppAsync(
            v1 + 128,
            v1 + 256,
            v1 + 224,
            v1 + 192,
            v1 + 160);
          winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(v1 + 256));
        }
        else
        {
          CAppBackupListenerTelemetry::NullFactory_Error<unsigned short const (&)[90]>();
        }
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(v1 + 128));
      }
      catch ( const winrt::hresult_error *v19 )
      {
        v12 = winrt::hstring::c_str((winrt::hstring *)(a1 + 318));
        *(_QWORD *)(v13 + 264) = v12;
        v14 = winrt::hstring::c_str((winrt::hstring *)(v13 + 310));
        *(_QWORD *)(v15 + 272) = v14;
        v16 = winrt::hstring::c_str((winrt::hstring *)(v15 + 302));
        *(_QWORD *)(v17 + 280) = v16;
        v18 = *((_DWORD *)v19 + 3);
        *(_DWORD *)(v17 + 288) = v18;
        CAppBackupListenerTelemetry::AppBackup_Error<unsigned short const (&)[43],int,unsigned short const *,unsigned short const *,unsigned short const *>(
          v18,
          v17 + 288,
          v17 + 280,
          v17 + 272,
          v17 + 264);
        v1 = a1;
      }
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::release_ref((__int64 *)(v1 + 16));
      std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::AppBackupListener *,winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>::promise_type::final_suspend(
        v1,
        v1 + 292);
      goto LABEL_11;
    case 5:
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::release_ref((__int64 *)(a1 + 16));
LABEL_11:
      winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync_::_10_::_parameters_::__parameters_(v1 + 294);
      if ( *(_WORD *)(v1 + 10) )
        operator delete((void *)v1);
      break;
    default:
      __debugbreak();
      break;
  }
}
