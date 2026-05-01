/*
 * XREFs of ?resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x1800DB58C
 * Callers:
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienceManager@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienceManager@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@experimental@std@@@Z @ 0x180072C04 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienc.c)
 *     ?Complete@?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@AEAAXXZ @ 0x1800DB3B0 (-Complete@-$disconnect_aware_handler@U-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamWit.c)
 *     ?Complete@?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@AEAAXXZ @ 0x1802383D4 (-Complete@-$disconnect_aware_handler@U-$await_adapter@U-$IAsyncOperationWithProgress@II@Foundati.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?get_apartment_type@impl@winrt@@YA?AU?$pair@HH@std@@XZ @ 0x1800DB6DC (-get_apartment_type@impl@winrt@@YA-AU-$pair@HH@std@@XZ.c)
 *     ?resume_apartment_sync@impl@winrt@@YAXAEBU?$com_ptr@UIContextCallback@impl@winrt@@@2@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x1800DB720 (-resume_apartment_sync@impl@winrt@@YAXAEBU-$com_ptr@UIContextCallback@impl@winrt@@@2@U-$coroutin.c)
 *     TrySubmitThreadpoolCallback_0 @ 0x1801CEFC5 (TrySubmitThreadpoolCallback_0.c)
 *     WINRT_IMPL_CoGetObjectContext @ 0x1801CEFD1 (WINRT_IMPL_CoGetObjectContext.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1803925DC (-throw_last_error@winrt@@YAXXZ.c)
 *     ?resume_apartment_on_threadpool@impl@winrt@@YAXAEBU?$com_ptr@UIContextCallback@impl@winrt@@@2@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x18040B864 (-resume_apartment_on_threadpool@impl@winrt@@YAXAEBU-$com_ptr@UIContextCallback@impl@winrt@@@2@U-.c)
 */

int __fastcall winrt::impl::resume_apartment(__int64 a1, __int64 (__fastcall **a2)(_QWORD), __int64 a3)
{
  char v5; // cl
  LPVOID v7; // rax
  char v8; // si
  int result; // eax
  winrt *v11; // rcx
  LPVOID v12; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  LODWORD(v12) = 0;
  if ( *(_QWORD *)a1 )
  {
    v12 = 0LL;
    WINRT_IMPL_CoGetObjectContext(&winrt::impl::guid_v<winrt::impl::IContextCallback>, &v12);
    v7 = v12;
    v5 = 3;
    if ( *(LPVOID *)a1 != v12 )
    {
      v8 = 0;
      goto LABEL_5;
    }
  }
  else
  {
    v7 = v12;
  }
  v8 = 1;
  if ( (v5 & 1) == 0 )
    return (*a2)(a2);
LABEL_5:
  if ( v7 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)&v12);
  if ( v8 )
    return (*a2)(a2);
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    result = TrySubmitThreadpoolCallback_0(winrt::impl::resume_background_callback, a2, 0LL);
    if ( !result )
      winrt::throw_last_error(v11);
  }
  else
  {
    winrt::impl::get_apartment_type(&v12);
    if ( !(_DWORD)v12 )
      return winrt::impl::resume_apartment_on_threadpool(a1, a2, a3);
    if ( (_DWORD)v12 == 2 ? ((HIDWORD(v12) - 3) & 0xFFFFFFFD) == 0 : (_DWORD)v12 == 3 )
      return winrt::impl::resume_apartment_on_threadpool(a1, a2, a3);
    else
      return winrt::impl::resume_apartment_sync(a1, a2, a3);
  }
  return result;
}
