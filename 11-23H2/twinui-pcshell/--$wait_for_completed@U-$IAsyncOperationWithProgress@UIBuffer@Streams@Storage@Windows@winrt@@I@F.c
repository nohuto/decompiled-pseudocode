/*
 * XREFs of ??$wait_for_completed@U?$IAsyncOperationWithProgress@UIBuffer@Streams@Storage@Windows@winrt@@I@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperationWithProgress@UIBuffer@Streams@Storage@Windows@winrt@@I@Foundation@Windows@1@I@Z @ 0x18070E008
 * Callers:
 *     ??$wait_get@U?$IAsyncOperationWithProgress@UIBuffer@Streams@Storage@Windows@winrt@@I@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperationWithProgress@UIBuffer@Streams@Storage@Windows@winrt@@I@Foundation@Windows@1@@Z @ 0x18070E160 (--$wait_get@U-$IAsyncOperationWithProgress@UIBuffer@Streams@Storage@Windows@winrt@@I@Foundation@.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     WaitForSingleObject_0 @ 0x1801C78F0 (WaitForSingleObject_0.c)
 *     WINRT_IMPL_CreateEventW @ 0x1801C7FD1 (WINRT_IMPL_CreateEventW.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1803925DC (-throw_last_error@winrt@@YAXXZ.c)
 */

__int64 __fastcall winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Storage::Streams::IBuffer,unsigned int>>(
        _QWORD *a1)
{
  HANDLE EventW; // rax
  winrt *v3; // rcx
  HANDLE v4; // rdi
  signed int v5; // eax
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
  *(_QWORD *)v10 = ___7__delegate_U__AsyncOperationWithProgressCompletedHandler_UIBuffer_Streams_Storage_Windows_winrt__I_Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperationWithProgress_UIBuffer_Streams_Storage_Windows_winrt__I_Foundation_Windows_winrt___impl_4_YA_A_PAEBU__IAsyncOperationWithProgress_UIBuffer_Streams_Storage_Windows_winrt__I_234_I_Z__impl_winrt__6B_;
  v8[0] = v10;
  v8[1] = v10 + 8;
  v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 64LL))(*a1);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  WaitForSingleObject_0(*((HANDLE *)v10 + 1), 0xFFFFFFFF);
  v6 = *((_DWORD *)v10 + 4);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v8);
  return v6;
}
