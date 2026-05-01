/*
 * XREFs of ?await_suspend@awaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4DispatcherQueuePriority@563@@Z@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1805B1830
 * Callers:
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@IPEAUHWND__@@W4ShowFlags@3@V?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4DispatcherQueuePriority@563@@Z@@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@IPEAUHWND__@@W4ShowFlags@3@V?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@@experimental@std@@@experimental@std@@@Z @ 0x1805ADBF0 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@IP.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall `winrt::resume_foreground'::`2'::awaitable::await_suspend(unsigned __int64 a1, unsigned __int64 a2)
{
  _QWORD *v3; // rbx
  char *v4; // rax
  signed int v5; // eax
  unsigned __int128 v7; // [rsp+30h] [rbp-18h]
  char *v8; // [rsp+50h] [rbp+8h] BYREF
  char *v9; // [rsp+58h] [rbp+10h] BYREF

  v3 = *(_QWORD **)a1;
  v7 = __PAIR128__(a1, a2);
  v4 = (char *)operator new(0x20uLL);
  v8 = v4;
  *(_OWORD *)(v4 + 8) = v7;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v4 + 6) = 1;
  *(_QWORD *)v4 = &winrt::impl::delegate<winrt::Windows::System::DispatcherQueueHandler,_lambda_f475742c0de8d0f2b24fd9d946f0a567_>::`vftable';
  v9 = v4;
  LOBYTE(v8) = 0;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, char **))(*(_QWORD *)*v3 + 64LL))(
         *v3,
         *(unsigned int *)(a1 + 8),
         v4,
         &v8);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  return (char)v8;
}
