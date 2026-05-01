/*
 * XREFs of ??$make_agile_delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@@impl@winrt@@YA?AUAsyncActionCompletedHandler@Foundation@Windows@1@AEBU2341@@Z @ 0x180179160
 * Callers:
 *     ?put_Completed@?$produce@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVXamlExplorerHostShellComponent@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@UEAAHPEAX@Z @ 0x1800FC460 (-put_Completed@-$produce@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt.c)
 *     ?Completed@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXAEBUAsyncActionCompletedHandler@Foundation@Windows@3@@Z @ 0x1801C5EE0 (-Completed@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winr.c)
 *     ?Completed@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXAEBUAsyncActionCompletedHandler@Foundation@Windows@3@@Z @ 0x1801C5FAC (-Completed@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation_ea_1801C5FAC.c)
 *     ?Completed@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@AEBURect@234@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@4@_JAEBVCorrelationVector@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXAEBUAsyncActionCompletedHandler@Foundation@Windows@3@@Z @ 0x1801D3E70 (-Completed@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation_ea_1801D3E70.c)
 *     ?Completed@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@PEAUHWND__@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXAEBUAsyncActionCompletedHandler@Foundation@Windows@3@@Z @ 0x1801D3F3C (-Completed@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation_ea_1801D3F3C.c)
 *     ?Completed@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVApplicationFlyoutView@@AEBURect@234@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@4@_JAEBVCorrelationVector@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXAEBUAsyncActionCompletedHandler@Foundation@Windows@3@@Z @ 0x1801D4C68 (-Completed@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation_ea_1801D4C68.c)
 *     ?Completed@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVApplicationFlyoutView@@PEAUHWND__@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXAEBUAsyncActionCompletedHandler@Foundation@Windows@3@@Z @ 0x1801D4D34 (-Completed@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation_ea_1801D4D34.c)
 *     ?Completed@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUMeetAndChatFallbackProp@implementation@Shell@Internal@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXAEBUAsyncActionCompletedHandler@Foundation@Windows@3@@Z @ 0x1805D6958 (-Completed@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation_ea_1805D6958.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?get_agile_reference@impl@winrt@@YA?AUhresult@2@AEBUguid@2@PEAXPEAPEAX@Z @ 0x180344D78 (-get_agile_reference@impl@winrt@@YA-AUhresult@2@AEBUguid@2@PEAXPEAPEAX@Z.c)
 *     ??$?0V_lambda_cc934bcfcfb2415fd654dddf326e340e_@@@AsyncActionCompletedHandler@Foundation@Windows@winrt@@QEAA@V_lambda_cc934bcfcfb2415fd654dddf326e340e_@@@Z @ 0x18041C59C (--$-0V_lambda_cc934bcfcfb2415fd654dddf326e340e_@@@AsyncActionCompletedHandler@Foundation@Windows.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::impl::make_agile_delegate<winrt::Windows::Foundation::AsyncActionCompletedHandler>(
        winrt::Windows::Foundation::IUnknown *this,
        void (__fastcall ****a2)(_QWORD, __int64 *, __int64 *))
{
  void (__fastcall ***v4)(_QWORD, __int64 *, __int64 *); // rcx
  void (__fastcall ***v5)(_QWORD, __int64 *, __int64 *); // r8
  __int64 v7; // rax
  char v8; // si
  __int64 v9; // rax
  __int64 v10; // [rsp+48h] [rbp+28h] BYREF
  __int64 v11; // [rsp+50h] [rbp+30h] BYREF

  v4 = *a2;
  if ( !*a2 )
  {
    v7 = 0LL;
    v10 = 0LL;
LABEL_9:
    v8 = 0;
    goto LABEL_3;
  }
  v10 = 0LL;
  (**v4)(v4, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v10);
  v7 = v10;
  if ( !v10 )
    goto LABEL_9;
  v8 = 1;
LABEL_3:
  if ( v7 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v10);
  v5 = *a2;
  if ( v8 )
  {
    *(_QWORD *)this = v5;
    winrt::Windows::Foundation::IUnknown::add_ref(this);
  }
  else
  {
    v11 = 0LL;
    winrt::impl::get_agile_reference(
      &v10,
      winrt::impl::guid_v<winrt::Windows::Foundation::AsyncActionCompletedHandler>,
      v5,
      &v11);
    v9 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      v10 = v9;
      winrt::Windows::Foundation::AsyncActionCompletedHandler::AsyncActionCompletedHandler(this, &v10);
    }
    else
    {
      *(_QWORD *)this = *a2;
      winrt::Windows::Foundation::IUnknown::add_ref(this);
    }
    if ( v11 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v11);
  }
  return this;
}
