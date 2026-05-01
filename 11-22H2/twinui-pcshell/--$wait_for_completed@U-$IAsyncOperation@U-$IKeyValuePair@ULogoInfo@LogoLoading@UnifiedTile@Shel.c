/*
 * XREFs of ??$wait_for_completed@U?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x18069D908
 * Callers:
 *     ??$wait_get@U?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@1@@Z @ 0x18069DA14 (--$wait_get@U-$IAsyncOperation@U-$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsI.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     WaitForSingleObject_0 @ 0x1801C78F0 (WaitForSingleObject_0.c)
 *     WINRT_IMPL_CreateEventW @ 0x1801C7FD1 (WINRT_IMPL_CreateEventW.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1803925DC (-throw_last_error@winrt@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoInfo,winrt::Windows::Storage::Streams::IRandomAccessStream>>>(
        _QWORD *a1)
{
  winrt *v2; // rcx
  HANDLE EventW; // rdi
  signed int v4; // eax
  unsigned int v5; // ebx
  char *v7; // [rsp+20h] [rbp-38h]
  _QWORD v8[2]; // [rsp+30h] [rbp-28h] BYREF

  EventW = WINRT_IMPL_CreateEventW(0LL, 1, 0, 0LL);
  if ( !EventW )
    winrt::throw_last_error(v2);
  v7 = (char *)operator new(0x20uLL);
  *((_QWORD *)v7 + 1) = EventW;
  *((_DWORD *)v7 + 4) = 0;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v7 + 6) = 1;
  *(_QWORD *)v7 = ___7__delegate_U__AsyncOperationCompletedHandler_U__IKeyValuePair_ULogoInfo_LogoLoading_UnifiedTile_Shell_WindowsInternal_winrt__UIRandomAccessStream_Streams_Storage_Windows_6__Collections_Foundation_Windows_winrt___Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperation_U__IKeyValuePair_ULogoInfo_LogoLoading_UnifiedTile_Shell_WindowsInternal_winrt__UIRandomAccessStream_Streams_Storage_Windows_6__Collections_Foundation_Windows_winrt___Foundation_Windows_winrt___impl_4_YA_A_PAEBU__IAsyncOperation_U__IKeyValuePair_ULogoInfo_LogoLoading_UnifiedTile_Shell_WindowsInternal_winrt__UIRandomAccessStream_Streams_Storage_Windows_6__Collections_Foundation_Windows_winrt___234_I_Z__impl_winrt__6B_;
  v8[0] = v7;
  v8[1] = v7 + 8;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 48LL))(*a1);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  WaitForSingleObject_0(*((HANDLE *)v7 + 1), 0xFFFFFFFF);
  v5 = *((_DWORD *)v7 + 4);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v8);
  return v5;
}
