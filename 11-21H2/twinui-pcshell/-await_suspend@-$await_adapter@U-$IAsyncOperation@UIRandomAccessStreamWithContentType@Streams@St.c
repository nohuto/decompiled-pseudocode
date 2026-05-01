/*
 * XREFs of ?await_suspend@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180022E64
 * Callers:
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUMeetAndChatFallbackProp@implementation@Shell@Internal@34@@experimental@std@@@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUMeetAndChatFallbackProp@implementation@Shell@Internal@34@@experimental@std@@@experimental@std@@@Z @ 0x180022E58 (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUMe.c)
 * Callees:
 *     ??$?0V_lambda_221c2fd13a07a77425ee53efb520030b_@@@?$AsyncOperationCompletedHandler@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@V_lambda_221c2fd13a07a77425ee53efb520030b_@@@Z @ 0x180023000 (--$-0V_lambda_221c2fd13a07a77425ee53efb520030b_@@@-$AsyncOperationCompletedHandler@UIRandomAcces.c)
 *     ??1disconnect_aware_handler@impl@winrt@@QEAA@XZ @ 0x180023118 (--1disconnect_aware_handler@impl@winrt@@QEAA@XZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x180101988 (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_suspend(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r14
  _QWORD *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // [rsp+20h] [rbp-40h] BYREF
  int v10; // [rsp+28h] [rbp-38h]
  __int64 v11; // [rsp+30h] [rbp-30h]
  _QWORD v12[2]; // [rsp+38h] [rbp-28h] BYREF
  int v13; // [rsp+48h] [rbp-18h]
  __int64 v14; // [rsp+50h] [rbp-10h]
  __int64 v15; // [rsp+80h] [rbp+20h] BYREF
  __int64 v16; // [rsp+88h] [rbp+28h] BYREF

  v4 = **(_QWORD **)(a1 + 8);
  v16 = v4;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  v5 = *(_QWORD **)(a1 + 8);
  winrt::impl::resume_apartment_context::resume_apartment_context((winrt::impl::resume_apartment_context *)&v9);
  v12[0] = a1;
  v6 = v9;
  v9 = 0LL;
  v12[1] = v6;
  v13 = v10;
  v14 = a2;
  v11 = 0LL;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>::AsyncOperationCompletedHandler<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>(
    &v15,
    v12);
  v7 = v15;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v5 + 48LL))(*v5, v15);
  if ( v8 < 0 )
    winrt::throw_hresult((unsigned int)v8);
  if ( v7 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
  winrt::impl::disconnect_aware_handler::~disconnect_aware_handler((winrt::impl::disconnect_aware_handler *)&v9);
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
}
