/*
 * XREFs of ??$QueueTask@V_lambda_7aa9acfd8aab90d02032eccdb335cb01_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_7aa9acfd8aab90d02032eccdb335cb01_@@@Z @ 0x1805F8DBC
 * Callers:
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@II$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@II@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@II@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@II@std@@@Z @ 0x1805F935C (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@II$$ZV-$ComPtr@UIVirtu.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0V_lambda_7aa9acfd8aab90d02032eccdb335cb01_@@@?$CTaskWrapper@V_lambda_7aa9acfd8aab90d02032eccdb335cb01_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_7aa9acfd8aab90d02032eccdb335cb01_@@@Z @ 0x1805F8570 (--$-0V_lambda_7aa9acfd8aab90d02032eccdb335cb01_@@@-$CTaskWrapper@V_lambda_7aa9acfd8aab90d02032ec.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask<_lambda_7aa9acfd8aab90d02032eccdb335cb01_>(
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
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_7aa9acfd8aab90d02032eccdb335cb01_>::CTaskWrapper<_lambda_7aa9acfd8aab90d02032eccdb335cb01_>(
           v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
