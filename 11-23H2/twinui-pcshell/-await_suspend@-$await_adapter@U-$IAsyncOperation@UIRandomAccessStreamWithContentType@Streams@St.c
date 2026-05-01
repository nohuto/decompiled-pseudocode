/*
 * XREFs of ?await_suspend@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@U?$coroutine_handle@X@experimental@std@@@Z @ 0x180059164
 * Callers:
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x180059158 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@imp.c)
 * Callees:
 *     ?Completed@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@UIRandomAccessStreamReference@Streams@Storage@34@@impl@winrt@@QEBA@AEBU?$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x180058E50 (-Completed@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UIRandomAccessStreamR.c)
 *     ??$?0U?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@@?$AsyncOperationCompletedHandler@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@U?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@impl@3@@Z @ 0x18005920C (--$-0U-$disconnect_aware_handler@U-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamWithCon.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x1800DB690 (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_suspend(
        __int64 a1,
        void (__fastcall **a2)(_QWORD))
{
  __int64 v4; // r14
  _QWORD *v5; // rdi
  char v6; // al
  _BYTE v7[16]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-10h]
  void (__fastcall **v9)(_QWORD); // [rsp+38h] [rbp-8h]
  __int64 v10; // [rsp+60h] [rbp+20h] BYREF
  __int64 v11; // [rsp+70h] [rbp+30h] BYREF

  v4 = **(_QWORD **)(a1 + 8);
  v11 = v4;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  v5 = *(_QWORD **)(a1 + 8);
  winrt::impl::resume_apartment_context::resume_apartment_context((winrt::impl::resume_apartment_context *)v7);
  v8 = a1;
  v9 = a2;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>::AsyncOperationCompletedHandler<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>(
    &v10,
    v7);
  winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,winrt::Windows::Storage::Streams::IRandomAccessStreamReference>::Completed(
    v5,
    &v10);
  if ( v10 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  v6 = *(_BYTE *)(a1 + 24);
  *(_BYTE *)(a1 + 24) = 0;
  if ( !v6 )
    (*a2)(a2);
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
}
