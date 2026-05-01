/*
 * XREFs of ?fallback_submit_threadpool_callback@impl@winrt@@YAXPEAX0@Z @ 0x18040ADF0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?resume_apartment_sync@impl@winrt@@YAXAEBU?$com_ptr@UIContextCallback@impl@winrt@@@2@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x1800DB720 (-resume_apartment_sync@impl@winrt@@YAXAEBU-$com_ptr@UIContextCallback@impl@winrt@@@2@U-$coroutin.c)
 */

void __fastcall winrt::impl::fallback_submit_threadpool_callback(PTP_CALLBACK_INSTANCE Instance, __int64 *Context)
{
  winrt::impl::resume_apartment_sync(Context, (__int64 (__fastcall **)(_QWORD))Context[1], (_DWORD *)Context[2]);
  if ( *Context )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(Context);
  operator delete(Context);
}
