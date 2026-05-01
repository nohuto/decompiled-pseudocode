/*
 * XREFs of ??$wait_for_completed@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA@AEBU?$IAsyncOperation@_N@Foundation@Windows@1@I@Z @ 0x180570E2C
 * Callers:
 *     ?ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4ActivationKind@Activation@ApplicationModel@Windows@@EURect@Foundation@7@H@Z @ 0x180571950 (-ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4A.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     WaitForSingleObject_0 @ 0x1801892F0 (WaitForSingleObject_0.c)
 *     WINRT_IMPL_CreateEventW @ 0x18018A087 (WINRT_IMPL_CreateEventW.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x18033DC7C (-throw_last_error@winrt@@YAXXZ.c)
 *     ?Completed@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@_N@impl@winrt@@QEBAXAEBU?$AsyncOperationCompletedHandler@_N@Foundation@Windows@3@@Z @ 0x18049A3D4 (-Completed@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<bool>>(_QWORD *a1)
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
  *(_QWORD *)v9 = ___7__delegate_U__AsyncOperationCompletedHandler__N_Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperation__N_Foundation_Windows_winrt___impl_4_YA_AEBU__IAsyncOperation__N_234_I_Z__impl_winrt__6B_;
  v7[0] = v9;
  v7[1] = v9 + 8;
  winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<bool>,bool>::Completed(
    a1,
    v7);
  WaitForSingleObject_0(*((HANDLE *)v9 + 1), 0xFFFFFFFF);
  v5 = *((_DWORD *)v9 + 4);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v7);
  return v5;
}
