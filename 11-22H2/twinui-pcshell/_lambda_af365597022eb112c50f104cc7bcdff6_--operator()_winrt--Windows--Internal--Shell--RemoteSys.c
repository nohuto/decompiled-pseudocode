/*
 * XREFs of _lambda_af365597022eb112c50f104cc7bcdff6_::operator()_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs_ @ 0x18027A5F4
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs___lambda_af365597022eb112c50f104cc7bcdff6___::Invoke @ 0x18027BD60 (winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_winrt--Windows--Inte_ea_18027BD60.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncAction@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800ADAB8 (-GetResults@-$consume_Windows_Foundation_IAsyncAction@UIAsyncAction@Foundation@Windows@winrt@@@i.c)
 *     ??$wait_for_completed@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBUIAsyncAction@Foundation@Windows@1@I@Z @ 0x1800AE5C4 (--$wait_for_completed@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@YA-A_PAEBUIAsyncActio.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800AEC0C (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@UStorageFile@Storage@Windows@.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@@QEAA_NXZ @ 0x180115CD0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@deta.c)
 *     ?GetCloudPCMode@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAIXZ @ 0x1801AD86C (-GetCloudPCMode@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAIXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1801BD9F8 (-unconditional_release_ref@-$com_ptr@URemoteSessionWindowManager@implementation@Shell@Internal@W.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801DBA20 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes@@@details@wil@@QEAA_NXZ @ 0x1802787F0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes@@@d.c)
 *     ?Current@ProcessTracker@Shell@Internal@Windows@winrt@@SA?AU12345@XZ @ 0x18027E390 (-Current@ProcessTracker@Shell@Internal@Windows@winrt@@SA-AU12345@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x1803E2DA0 (--0hresult_canceled@winrt@@QEAA@XZ.c)
 *     ?Id@?$consume_Windows_Internal_Shell_IRemoteSystemWindowAddedEventArgs@UIRemoteSystemWindowAddedEventArgs@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180400648 (-Id@-$consume_Windows_Internal_Shell_IRemoteSystemWindowAddedEventArgs@UIRemoteSystemWindowAdded.c)
 *     ??$ProviderWindowAdded@_K@CloudPCTelemetry@@SAX$$QEA_K@Z @ 0x18071E9E0 (--$ProviderWindowAdded@_K@CloudPCTelemetry@@SAX$$QEA_K@Z.c)
 *     ?Window@?$consume_Windows_Internal_Shell_IRemoteSystemWindowAddedEventArgs@UIRemoteSystemWindowAddedEventArgs@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1807239C0 (-Window@-$consume_Windows_Internal_Shell_IRemoteSystemWindowAddedEventArgs@UIRemoteSystemWindowA.c)
 *     ?get@?$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1807246EC (-get@-$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@.c)
 *     ?Current@WindowsTracker@Shell@Internal@Windows@winrt@@SA?AU12345@XZ @ 0x1807257BC (-Current@WindowsTracker@Shell@Internal@Windows@winrt@@SA-AU12345@XZ.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall lambda_af365597022eb112c50f104cc7bcdff6_::operator()_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs_(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  volatile signed __int64 *v10; // rbx
  HWND *v11; // rax
  DWORD WindowThreadProcessId; // eax
  _QWORD *v13; // rax
  int v14; // eax
  __int64 v15; // rsi
  void (__fastcall *v16)(__int64, __int64, __int64); // r15
  __int64 v17; // r14
  __int64 v18; // rax
  const char *v19; // r9
  volatile signed __int64 *v20; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v21[8]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE pExceptionObject[32]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 dwProcessId; // [rsp+78h] [rbp+10h] BYREF
  __int64 v25; // [rsp+88h] [rbp+20h] BYREF

  dwProcessId = a2;
  v5 = (_QWORD *)winrt::Windows::Internal::Shell::WindowsTracker::Current(&v20);
  v6 = (_QWORD *)winrt::impl::consume_Windows_Internal_Shell_IRemoteSystemWindowAddedEventArgs<winrt::Windows::Internal::Shell::IRemoteSystemWindowAddedEventArgs>::Window(
                   a3,
                   v21);
  dwProcessId = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)*v5 + 48LL))(*v5, *v6, &dwProcessId);
  if ( v7 < 0 )
    winrt::throw_hresult((unsigned int)v7);
  v25 = dwProcessId;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v20);
  v8 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::StorageFile>>::Status(&v25);
  if ( !v8 )
    v8 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncAction>(&v25);
  if ( v8 == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  winrt::impl::consume_Windows_Foundation_IAsyncAction<winrt::Windows::Foundation::IAsyncAction>::GetResults(&v25);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::GetImpl'::`2'::impl) )
  {
    v9 = winrt::impl::consume_Windows_Internal_Shell_IRemoteSystemWindowAddedEventArgs<winrt::Windows::Internal::Shell::IRemoteSystemWindowAddedEventArgs>::Window(
           a3,
           &dwProcessId);
    CloudPCTelemetry::ProviderWindowAdded<unsigned __int64>(v9);
  }
  winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::get(a1, &v20);
  v10 = v20;
  if ( v20 )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes>::GetImpl'::`2'::impl) )
    {
      if ( (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() == 1 )
      {
        v11 = (HWND *)winrt::impl::consume_Windows_Internal_Shell_IRemoteSystemWindowAddedEventArgs<winrt::Windows::Internal::Shell::IRemoteSystemWindowAddedEventArgs>::Window(
                        a3,
                        v21);
        WindowThreadProcessId = GetWindowThreadProcessId(*v11, (LPDWORD)&dwProcessId);
        if ( WindowThreadProcessId )
        {
          wil::details::in1diag3::_Log_Win32(
            retaddr,
            (void *)0xBC,
            (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionwindowmanager.cpp",
            (const char *)WindowThreadProcessId);
          v13 = (_QWORD *)winrt::Windows::Internal::Shell::ProcessTracker::Current(v21);
          v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v13 + 48LL))(*v13, (unsigned int)dwProcessId);
          if ( v14 < 0 )
            winrt::throw_hresult((unsigned int)v14);
          winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v21);
        }
      }
    }
    try
    {
      v15 = *((_QWORD *)v10 + 5);
      v16 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v15 + 112LL);
      v17 = *(_QWORD *)winrt::impl::consume_Windows_Internal_Shell_IRemoteSystemWindowAddedEventArgs<winrt::Windows::Internal::Shell::IRemoteSystemWindowAddedEventArgs>::Window(
                         a3,
                         v21);
      v18 = winrt::impl::consume_Windows_Internal_Shell_IRemoteSystemWindowAddedEventArgs<winrt::Windows::Internal::Shell::IRemoteSystemWindowAddedEventArgs>::Id(
              a3,
              &dwProcessId);
      v16(v15, v18, v17);
      winrt::hstring::~hstring((void **)&dwProcessId);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0xC6,
        (unsigned int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionwindowmanager.cpp",
        v19);
      v10 = v20;
    }
  }
  if ( v10 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::unconditional_release_ref(&v20);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v25);
}
