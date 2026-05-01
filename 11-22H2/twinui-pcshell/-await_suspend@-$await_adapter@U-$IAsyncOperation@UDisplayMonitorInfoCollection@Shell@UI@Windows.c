/*
 * XREFs of ?await_suspend@?$await_adapter@U?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@U?$coroutine_handle@X@experimental@std@@@Z @ 0x1800DB4B8
 * Callers:
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVTaskViewFrame@@PEAUIImmersiveMonitor@@@experimental@std@@@?$notify_awaiter@U?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVTaskViewFrame@@PEAUIImmersiveMonitor@@@experimental@std@@@experimental@std@@@Z @ 0x180073E04 (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVTa.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@2@@experimental@std@@@?$notify_awaiter@U?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x1801BF890 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUPenMenuSystemTrayM.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x1800DB690 (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ??$?0U?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@@?$AsyncOperationCompletedHandler@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@U?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@impl@3@@Z @ 0x1800DB790 (--$-0U-$disconnect_aware_handler@U-$await_adapter@U-$IAsyncOperation@UDisplayMonitorInfoCollecti.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection>>::await_suspend(
        __int64 a1,
        void (__fastcall **a2)(_QWORD))
{
  __int64 v4; // rbp
  __int64 **v5; // rdi
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // eax
  char v10; // al
  _BYTE v11[16]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]
  void (__fastcall **v13)(_QWORD); // [rsp+38h] [rbp-20h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  v4 = **(_QWORD **)(a1 + 8);
  v15 = v4;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v15);
  v5 = *(__int64 ***)(a1 + 8);
  winrt::impl::resume_apartment_context::resume_apartment_context((winrt::impl::resume_apartment_context *)v11);
  v12 = a1;
  v13 = a2;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection>::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection>(
    &v14,
    v11);
  v6 = *v5;
  v7 = **v5;
  v8 = v14;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v7 + 48))(v6, v14);
  if ( v9 < 0 )
    winrt::throw_hresult((unsigned int)v9);
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
  v10 = *(_BYTE *)(a1 + 24);
  *(_BYTE *)(a1 + 24) = 0;
  if ( !v10 )
    (*a2)(a2);
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
}
