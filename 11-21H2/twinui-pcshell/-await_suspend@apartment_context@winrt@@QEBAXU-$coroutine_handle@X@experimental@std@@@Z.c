/*
 * XREFs of ?await_suspend@apartment_context@winrt@@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180350FE8
 * Callers:
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@experimental@std@@@Z @ 0x1801D7260 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewM.c)
 * Callees:
 *     ?resume_apartment@impl@winrt@@YAXAEBUresume_apartment_context@12@U?$coroutine_handle@X@experimental@std@@@Z @ 0x1800296A4 (-resume_apartment@impl@winrt@@YAXAEBUresume_apartment_context@12@U-$coroutine_handle@X@experimen.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@AEBU012@@Z @ 0x18034C634 (--0resume_apartment_context@impl@winrt@@QEAA@AEBU012@@Z.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall winrt::apartment_context::await_suspend(
        struct winrt::impl::resume_apartment_context *a1,
        __int64 (__fastcall **a2)(_QWORD))
{
  int result; // eax
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  winrt::impl::resume_apartment_context::resume_apartment_context((winrt::impl::resume_apartment_context *)v4, a1);
  result = winrt::impl::resume_apartment((__int64)v4, a2);
  if ( v4[0] )
    return winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v4);
  return result;
}
