/*
 * XREFs of ??$QueueTask@V_lambda_4a1cc2f9c280bc637b058ad40df178d7_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_4a1cc2f9c280bc637b058ad40df178d7_@@@Z @ 0x18053E1E8
 * Callers:
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@PEAU3@$$ZV?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@56@V756@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@ZV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@V423@@std@@@Z @ 0x18053EA14 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@PEAU.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0V_lambda_4a1cc2f9c280bc637b058ad40df178d7_@@@?$CTaskWrapper@V_lambda_4a1cc2f9c280bc637b058ad40df178d7_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_4a1cc2f9c280bc637b058ad40df178d7_@@@Z @ 0x18053D7F0 (--$-0V_lambda_4a1cc2f9c280bc637b058ad40df178d7_@@@-$CTaskWrapper@V_lambda_4a1cc2f9c280bc637b058a.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask<_lambda_4a1cc2f9c280bc637b058ad40df178d7_>(
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
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_4a1cc2f9c280bc637b058ad40df178d7_>::CTaskWrapper<_lambda_4a1cc2f9c280bc637b058ad40df178d7_>(
           v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
