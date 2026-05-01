/*
 * XREFs of ?resume_apartment_sync@impl@winrt@@YAXAEBU?$com_ptr@UIContextCallback@impl@winrt@@@2@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x1800DB720
 * Callers:
 *     ?resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x1800DB58C (-resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U-$coroutine_handle@X@experimen.c)
 *     ?fallback_submit_threadpool_callback@impl@winrt@@YAXPEAX0@Z @ 0x18040ADF0 (-fallback_submit_threadpool_callback@impl@winrt@@YAXPEAX0@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::resume_apartment_sync(__int64 *a1, __int64 (__fastcall **a2)(_QWORD), _DWORD *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = *a1;
  v7[0] = 0LL;
  v7[1] = a2;
  result = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(winrt::impl *__hidden, struct winrt::impl::com_callback_args *), _QWORD *, void *, int, _QWORD))(*(_QWORD *)v3 + 24LL))(
             v3,
             winrt::impl::resume_apartment_callback,
             v7,
             &winrt::impl::guid_v<winrt::impl::ICallbackWithNoReentrancyToApplicationSTA>,
             5,
             0LL);
  if ( (int)result < 0 )
  {
    *a3 = result;
    return (*a2)(a2);
  }
  return result;
}
