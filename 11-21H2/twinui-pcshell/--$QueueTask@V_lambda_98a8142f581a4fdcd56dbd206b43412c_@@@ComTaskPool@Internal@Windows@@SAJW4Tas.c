/*
 * XREFs of ??$QueueTask@V_lambda_98a8142f581a4fdcd56dbd206b43412c_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_98a8142f581a4fdcd56dbd206b43412c_@@@Z @ 0x18053E27C
 * Callers:
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@II$$ZV?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@56@II@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@II@ZV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@II@std@@@Z @ 0x18053E8F0 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@II$$.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0V_lambda_98a8142f581a4fdcd56dbd206b43412c_@@@?$CTaskWrapper@V_lambda_98a8142f581a4fdcd56dbd206b43412c_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_98a8142f581a4fdcd56dbd206b43412c_@@@Z @ 0x18053D854 (--$-0V_lambda_98a8142f581a4fdcd56dbd206b43412c_@@@-$CTaskWrapper@V_lambda_98a8142f581a4fdcd56dbd.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask<_lambda_98a8142f581a4fdcd56dbd206b43412c_>(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_98a8142f581a4fdcd56dbd206b43412c_>::CTaskWrapper<_lambda_98a8142f581a4fdcd56dbd206b43412c_>(
           v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
