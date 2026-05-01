/*
 * XREFs of ?resume_apartment_sync@impl@winrt@@YAXAEBU?$com_ptr@UIContextCallback@impl@winrt@@@2@U?$coroutine_handle@X@experimental@std@@@Z @ 0x180351844
 * Callers:
 *     ?resume_apartment@impl@winrt@@YAXAEBUresume_apartment_context@12@U?$coroutine_handle@X@experimental@std@@@Z @ 0x1800296A4 (-resume_apartment@impl@winrt@@YAXAEBUresume_apartment_context@12@U-$coroutine_handle@X@experimen.c)
 *     ?_lambda_invoker_cdecl_@_lambda_25ebd5c53626aa9093297295a22b60c6_@@CAXPEAX0@Z @ 0x1803459E0 (-_lambda_invoker_cdecl_@_lambda_25ebd5c53626aa9093297295a22b60c6_@@CAXPEAX0@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::resume_apartment_sync(__int64 *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = *a1;
  v4[0] = 0LL;
  v4[1] = a2;
  result = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(winrt::impl *, struct winrt::impl::com_callback_args *), _QWORD *, void *, int, _QWORD))(*(_QWORD *)v2 + 24LL))(
             v2,
             winrt::impl::resume_apartment_callback,
             v4,
             &winrt::impl::guid_v<winrt::impl::ICallbackWithNoReentrancyToApplicationSTA>,
             5,
             0LL);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
