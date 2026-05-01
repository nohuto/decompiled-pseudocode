/*
 * XREFs of ??$make_agile_delegate@U?$AsyncOperationCompletedHandler@I@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$AsyncOperationCompletedHandler@I@Foundation@Windows@1@AEBU2341@@Z @ 0x18056BF14
 * Callers:
 *     ?Completed@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXAEBU?$AsyncOperationCompletedHandler@I@Foundation@Windows@3@@Z @ 0x18056C9BC (-Completed@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Foundation@Windo.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?get_agile_reference@impl@winrt@@YA?AUhresult@2@AEBUguid@2@PEAXPEAPEAX@Z @ 0x180344D78 (-get_agile_reference@impl@winrt@@YA-AUhresult@2@AEBUguid@2@PEAXPEAPEAX@Z.c)
 *     ??$?0V_lambda_2c0233b8eff337f44babb0a39eb13a06_@@@?$AsyncOperationCompletedHandler@I@Foundation@Windows@winrt@@QEAA@V_lambda_2c0233b8eff337f44babb0a39eb13a06_@@@Z @ 0x18056B57C (--$-0V_lambda_2c0233b8eff337f44babb0a39eb13a06_@@@-$AsyncOperationCompletedHandler@I@Foundation@.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::impl::make_agile_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<unsigned int>>(
        winrt::Windows::Foundation::IUnknown *this,
        __int64 *a2)
{
  void (__fastcall ***v4)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v5; // rax
  char v6; // si
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v10; // [rsp+48h] [rbp+28h] BYREF
  __int64 v11; // [rsp+50h] [rbp+30h] BYREF

  v4 = (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))*a2;
  if ( !*a2 )
  {
    v5 = 0LL;
    v10 = 0LL;
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  v10 = 0LL;
  (**v4)(v4, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v10);
  v5 = v10;
  if ( !v10 )
    goto LABEL_3;
  v6 = 1;
LABEL_4:
  if ( v5 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v10);
  v7 = *a2;
  if ( v6 )
  {
    *(_QWORD *)this = v7;
    winrt::Windows::Foundation::IUnknown::add_ref(this);
  }
  else
  {
    v11 = 0LL;
    winrt::impl::get_agile_reference(
      &v10,
      (__int64)&winrt::impl::guid_v<winrt::Windows::Foundation::AsyncOperationCompletedHandler<unsigned int>>,
      v7,
      (__int64)&v11);
    v8 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      v10 = v8;
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<unsigned int>::AsyncOperationCompletedHandler<unsigned int>(
        this,
        &v10);
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
