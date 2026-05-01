/*
 * XREFs of ?resume_apartment_on_threadpool@impl@winrt@@YAXAEBU?$com_ptr@UIContextCallback@impl@winrt@@@2@U?$coroutine_handle@X@experimental@std@@@Z @ 0x1803517B0
 * Callers:
 *     ?resume_apartment@impl@winrt@@YAXAEBUresume_apartment_context@12@U?$coroutine_handle@X@experimental@std@@@Z @ 0x1800296A4 (-resume_apartment@impl@winrt@@YAXAEBUresume_apartment_context@12@U-$coroutine_handle@X@experimen.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     TrySubmitThreadpoolCallback_0 @ 0x18018F6DF (TrySubmitThreadpoolCallback_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x18033DC7C (-throw_last_error@winrt@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
BOOL __fastcall winrt::impl::resume_apartment_on_threadpool(__int64 *a1, __int64 a2)
{
  __int64 *v4; // rsi
  __int64 v5; // rcx
  BOOL result; // eax
  winrt *v7; // rcx

  v4 = (__int64 *)operator new(0x10uLL);
  v5 = *a1;
  *v4 = *a1;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v4[1] = a2;
  result = TrySubmitThreadpoolCallback_0(
             (PTP_SIMPLE_CALLBACK)_lambda_25ebd5c53626aa9093297295a22b60c6_::_lambda_invoker_cdecl_,
             v4,
             0LL);
  if ( !result )
    winrt::throw_last_error(v7);
  return result;
}
