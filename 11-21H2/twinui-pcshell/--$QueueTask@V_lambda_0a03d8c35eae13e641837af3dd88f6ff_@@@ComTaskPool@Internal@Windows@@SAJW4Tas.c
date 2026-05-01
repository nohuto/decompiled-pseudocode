/*
 * XREFs of ??$QueueTask@V_lambda_0a03d8c35eae13e641837af3dd88f6ff_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_0a03d8c35eae13e641837af3dd88f6ff_@@@Z @ 0x18053E030
 * Callers:
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAUHSTRING__@@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@56@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@std@@@Z @ 0x18053EB4C (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAUHSTRING__@@$$ZV-$C.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0V_lambda_0a03d8c35eae13e641837af3dd88f6ff_@@@?$CTaskWrapper@V_lambda_0a03d8c35eae13e641837af3dd88f6ff_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_0a03d8c35eae13e641837af3dd88f6ff_@@@Z @ 0x18053D6E8 (--$-0V_lambda_0a03d8c35eae13e641837af3dd88f6ff_@@@-$CTaskWrapper@V_lambda_0a03d8c35eae13e641837a.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask<_lambda_0a03d8c35eae13e641837af3dd88f6ff_>(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_0a03d8c35eae13e641837af3dd88f6ff_>::CTaskWrapper<_lambda_0a03d8c35eae13e641837af3dd88f6ff_>(
           v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
