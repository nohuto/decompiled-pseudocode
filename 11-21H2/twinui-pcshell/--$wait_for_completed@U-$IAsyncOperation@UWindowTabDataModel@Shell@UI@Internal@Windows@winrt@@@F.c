/*
 * XREFs of ??$wait_for_completed@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA@AEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x18001AD00
 * Callers:
 *     ??$wait_get@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUWindowTabDataModel@Shell@UI@Internal@Windows@1@AEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@61@@Z @ 0x18001AAA0 (--$wait_get@U-$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     WaitForSingleObject_0 @ 0x1801892F0 (WaitForSingleObject_0.c)
 *     WINRT_IMPL_CreateEventW @ 0x18018A087 (WINRT_IMPL_CreateEventW.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x18033DC7C (-throw_last_error@winrt@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Internal::UI::Shell::WindowTabDataModel>>(
        _QWORD *a1)
{
  HANDLE EventW; // rax
  winrt *v3; // rcx
  HANDLE v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  _QWORD v8[3]; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+38h] [rbp-10h]
  char *v10; // [rsp+60h] [rbp+18h]

  EventW = WINRT_IMPL_CreateEventW(0LL, 1, 0, 0LL);
  v4 = EventW;
  if ( !EventW )
    winrt::throw_last_error(v3);
  v8[2] = EventW;
  v9 = 0;
  v10 = (char *)operator new(0x20uLL);
  *((_QWORD *)v10 + 1) = v4;
  *((_DWORD *)v10 + 4) = 0;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v10 + 6) = 1;
  *(_QWORD *)v10 = ___7__delegate_U__AsyncOperationCompletedHandler_UWindowTabDataModel_Shell_UI_Internal_Windows_winrt___Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperation_UWindowTabDataModel_Shell_UI_Internal_Windows_winrt___Foundation_Windows_winrt___impl_4_YA_AEBU__IAsyncOperation_UWindowTabDataModel_Shell_UI_Internal_Windows_winrt___234_I_Z__impl_winrt__6B_;
  v8[0] = v10;
  v8[1] = v10 + 8;
  v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 48LL))(*a1);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  WaitForSingleObject_0(*((HANDLE *)v10 + 1), 0xFFFFFFFF);
  v6 = *((_DWORD *)v10 + 4);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v8);
  return v6;
}
