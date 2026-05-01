/*
 * XREFs of ??$wait_for_completed@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@1@I@Z @ 0x1806F03DC
 * Callers:
 *     ??$wait_get@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@1@@Z @ 0x1806F04B0 (--$wait_get@U-$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Wind.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     WaitForSingleObject_0 @ 0x1801C78F0 (WaitForSingleObject_0.c)
 *     WINRT_IMPL_CreateEventW @ 0x1801C7FD1 (WINRT_IMPL_CreateEventW.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1803925DC (-throw_last_error@winrt@@YAXXZ.c)
 *     ?Completed@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@UTileCollection@StartScreen@UI@WindowsUdk@4@@impl@winrt@@QEBA@AEBU?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@3@@Z @ 0x18054DA28 (-Completed@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UTileCollection@Start.c)
 */

__int64 __fastcall winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>>(
        _QWORD *a1)
{
  HANDLE EventW; // rax
  winrt *v3; // rcx
  HANDLE v4; // rdi
  unsigned int v5; // ebx
  _QWORD v7[3]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-10h]
  char *v9; // [rsp+60h] [rbp+18h]

  EventW = WINRT_IMPL_CreateEventW(0LL, 1, 0, 0LL);
  v4 = EventW;
  if ( !EventW )
    winrt::throw_last_error(v3);
  v7[2] = EventW;
  v8 = 0;
  v9 = (char *)operator new(0x20uLL);
  *((_QWORD *)v9 + 1) = v4;
  *((_DWORD *)v9 + 4) = 0;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v9 + 6) = 1;
  *(_QWORD *)v9 = ___7__delegate_U__AsyncOperationCompletedHandler_UTileCollection_StartScreen_UI_WindowsUdk_winrt___Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperation_UTileCollection_StartScreen_UI_WindowsUdk_winrt___Foundation_Windows_winrt___impl_4_YA_A_PAEBU__IAsyncOperation_UTileCollection_StartScreen_UI_WindowsUdk_winrt___234_I_Z__impl_winrt__6B_;
  v7[0] = v9;
  v7[1] = v9 + 8;
  winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,winrt::WindowsUdk::UI::StartScreen::TileCollection>::Completed(
    a1,
    v7);
  WaitForSingleObject_0(*((HANDLE *)v9 + 1), 0xFFFFFFFF);
  v5 = *((_DWORD *)v9 + 4);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v7);
  return v5;
}
