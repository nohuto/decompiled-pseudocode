/*
 * XREFs of ?resume_apartment_on_threadpool@impl@winrt@@YAXAEBU?$com_ptr@UIContextCallback@impl@winrt@@@2@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x18040B864
 * Callers:
 *     ?resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x1800DB58C (-resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U-$coroutine_handle@X@experimen.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     TrySubmitThreadpoolCallback_0 @ 0x1801CEFC5 (TrySubmitThreadpoolCallback_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1803925DC (-throw_last_error@winrt@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
BOOL __fastcall winrt::impl::resume_apartment_on_threadpool(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // rsi
  __int64 v7; // rcx
  BOOL result; // eax
  winrt *v9; // rcx

  v6 = (__int64 *)operator new(0x18uLL);
  v7 = *a1;
  *v6 = *a1;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v6[1] = a2;
  v6[2] = a3;
  result = TrySubmitThreadpoolCallback_0((PTP_SIMPLE_CALLBACK)winrt::impl::fallback_submit_threadpool_callback, v6, 0LL);
  if ( !result )
    winrt::throw_last_error(v9);
  return result;
}
