/*
 * XREFs of ?resume_apartment@impl@winrt@@YAXAEBUresume_apartment_context@12@U?$coroutine_handle@X@experimental@std@@@Z @ 0x1800296A4
 * Callers:
 *     ??1disconnect_aware_handler@impl@winrt@@QEAA@XZ @ 0x180023118 (--1disconnect_aware_handler@impl@winrt@@QEAA@XZ.c)
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_5631fd495d09b515f200478214f04faf_@@@impl@winrt@@UEAAHPEAXH@Z @ 0x180029670 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Stora.c)
 *     ?await_suspend@apartment_context@winrt@@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180350FE8 (-await_suspend@apartment_context@winrt@@QEBAXU-$coroutine_handle@X@experimental@std@@@Z.c)
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@I@Foundation@Windows@winrt@@V_lambda_e810b03a6e5f5a022cc95ca4940e8036_@@@impl@winrt@@UEAAHPEAXH@Z @ 0x18049A870 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@I@Foundation@Windows@winrt@@V_lambda_e810b0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??$try_capture@UIContextCallback@impl@winrt@@P6AHAEBUguid@3@PEAPEAX@_E$$V@winrt@@YA?AU?$com_ptr@UIContextCallback@impl@winrt@@@0@P6AHAEBUguid@0@PEAPEAX@_E@Z @ 0x1801019D4 (--$try_capture@UIContextCallback@impl@winrt@@P6AHAEBUguid@3@PEAPEAX@_E$$V@winrt@@YA-AU-$com_ptr@.c)
 *     ?get_apartment_type@impl@winrt@@YA?AU?$pair@HH@std@@XZ @ 0x180101A10 (-get_apartment_type@impl@winrt@@YA-AU-$pair@HH@std@@XZ.c)
 *     TrySubmitThreadpoolCallback_0 @ 0x18018F6DF (TrySubmitThreadpoolCallback_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x18033DC7C (-throw_last_error@winrt@@YAXXZ.c)
 *     ?resume_apartment_on_threadpool@impl@winrt@@YAXAEBU?$com_ptr@UIContextCallback@impl@winrt@@@2@U?$coroutine_handle@X@experimental@std@@@Z @ 0x1803517B0 (-resume_apartment_on_threadpool@impl@winrt@@YAXAEBU-$com_ptr@UIContextCallback@impl@winrt@@@2@U-.c)
 *     ?resume_apartment_sync@impl@winrt@@YAXAEBU?$com_ptr@UIContextCallback@impl@winrt@@@2@U?$coroutine_handle@X@experimental@std@@@Z @ 0x180351844 (-resume_apartment_sync@impl@winrt@@YAXAEBU-$com_ptr@UIContextCallback@impl@winrt@@@2@U-$coroutin.c)
 */

int __fastcall winrt::impl::resume_apartment(__int64 a1, __int64 (__fastcall **a2)(_QWORD))
{
  char v4; // cl
  _QWORD *v5; // rax
  char v6; // si
  int result; // eax
  winrt *v8; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  LODWORD(v9) = 0;
  if ( *(_QWORD *)a1
    && (v5 = (_QWORD *)___try_capture_UIContextCallback_impl_winrt__P6AHAEBUguid_3_PEAPEAX__E__V_winrt__YA_AU__com_ptr_UIContextCallback_impl_winrt___0_P6AHAEBUguid_0_PEAPEAX__E_Z(&v9),
        v4 = 1,
        *(_QWORD *)a1 != *v5) )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    if ( (v4 & 1) == 0 )
      return (*a2)(a2);
  }
  if ( v9 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v9);
  if ( v6 )
    return (*a2)(a2);
  if ( *(_DWORD *)(a1 + 8) != 1 )
  {
    if ( *(_DWORD *)(a1 + 8) == 2 )
    {
      winrt::impl::get_apartment_type(&v9);
      if ( (_DWORD)v9 )
      {
        if ( (_DWORD)v9 == 2 )
        {
          if ( ((HIDWORD(v9) - 3) & 0xFFFFFFFD) != 0 )
            return winrt::impl::resume_apartment_sync(a1, a2);
        }
        else if ( (_DWORD)v9 != 3 )
        {
          return winrt::impl::resume_apartment_sync(a1, a2);
        }
      }
      return winrt::impl::resume_apartment_on_threadpool(a1, a2);
    }
    return winrt::impl::resume_apartment_sync(a1, a2);
  }
  result = TrySubmitThreadpoolCallback_0(winrt::impl::resume_background_callback, a2, 0LL);
  if ( !result )
    winrt::throw_last_error(v8);
  return result;
}
