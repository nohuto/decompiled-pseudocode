/*
 * XREFs of ?await_suspend@?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@U?$coroutine_handle@X@experimental@std@@@Z @ 0x1806A9428
 * Callers:
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@@?$notify_awaiter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@@experimental@std@@@Z @ 0x18069BFFC (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@_ea_18069BFFC.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x1800DB690 (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$?0U?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@@?$AsyncOperationCompletedHandler@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@U?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@impl@3@@Z @ 0x180699988 (--$-0U-$disconnect_aware_handler@U-$await_adapter@U-$IAsyncOperation@U-$IReference@_N@Foundation.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::await_suspend(
        __int64 a1,
        void (__fastcall **a2)(_QWORD))
{
  __int64 v4; // rbp
  __int64 **v5; // rdi
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  signed int v9; // eax
  char v10; // al
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v13[16]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]
  void (__fastcall **v15)(_QWORD); // [rsp+48h] [rbp-10h]

  v4 = **(_QWORD **)(a1 + 8);
  v12 = v4;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  v5 = *(__int64 ***)(a1 + 8);
  winrt::impl::resume_apartment_context::resume_apartment_context((winrt::impl::resume_apartment_context *)v13);
  v14 = a1;
  v15 = a2;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::IReference<bool>>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::IReference<bool>>(
    &v11,
    (__int64)v13);
  v6 = *v5;
  v7 = **v5;
  v8 = v11;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v7 + 48))(v6, v11);
  if ( v9 < 0 )
    winrt::throw_hresult(v9);
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  v10 = *(_BYTE *)(a1 + 24);
  *(_BYTE *)(a1 + 24) = 0;
  if ( !v10 )
    (*a2)(a2);
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
}
