/*
 * XREFs of ?await_suspend@?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180143190
 * Callers:
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@@?$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x1801C2314 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@i.c)
 * Callees:
 *     ??1disconnect_aware_handler@impl@winrt@@QEAA@XZ @ 0x180023118 (--1disconnect_aware_handler@impl@winrt@@QEAA@XZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x180101988 (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ?Completed@?$consume_Windows_Foundation_IAsyncAction@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEBAXAEBUAsyncActionCompletedHandler@Foundation@Windows@3@@Z @ 0x18014322C (-Completed@-$consume_Windows_Foundation_IAsyncAction@UIAsyncAction@Foundation@Windows@winrt@@@im.c)
 *     ??$?0V_lambda_fcf98652dc0cd937c818a0b0ee1f275d_@@@AsyncActionCompletedHandler@Foundation@Windows@winrt@@QEAA@V_lambda_fcf98652dc0cd937c818a0b0ee1f275d_@@@Z @ 0x180143268 (--$-0V_lambda_fcf98652dc0cd937c818a0b0ee1f275d_@@@AsyncActionCompletedHandler@Foundation@Windows.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction>::await_suspend(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // [rsp+20h] [rbp-40h] BYREF
  int v8; // [rsp+28h] [rbp-38h]
  __int64 v9; // [rsp+30h] [rbp-30h]
  _QWORD v10[2]; // [rsp+38h] [rbp-28h] BYREF
  int v11; // [rsp+48h] [rbp-18h]
  __int64 v12; // [rsp+50h] [rbp-10h]
  __int64 v13; // [rsp+80h] [rbp+20h] BYREF
  __int64 v14; // [rsp+88h] [rbp+28h] BYREF

  v4 = **(_QWORD **)(a1 + 8);
  v14 = v4;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v14);
  v5 = *(_QWORD *)(a1 + 8);
  winrt::impl::resume_apartment_context::resume_apartment_context((winrt::impl::resume_apartment_context *)&v7);
  v10[0] = a1;
  v6 = v7;
  v7 = 0LL;
  v10[1] = v6;
  v11 = v8;
  v12 = a2;
  v9 = 0LL;
  winrt::Windows::Foundation::AsyncActionCompletedHandler::AsyncActionCompletedHandler(&v13, v10);
  winrt::impl::consume_Windows_Foundation_IAsyncAction<winrt::Windows::Foundation::IAsyncAction>::Completed(v5, &v13);
  if ( v13 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
  winrt::impl::disconnect_aware_handler::~disconnect_aware_handler((winrt::impl::disconnect_aware_handler *)&v7);
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
}
