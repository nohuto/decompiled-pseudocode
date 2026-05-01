/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_44086093bbdca45fc7a1a4ab785b676b___ @ 0x18040EE7C
 * Callers:
 *     ?ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ @ 0x180415F54 (-ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_44086093bbdca45fc7a1a4ab785b676b___::CTaskWrapper__lambda_44086093bbdca45fc7a1a4ab785b676b_____lambda_44086093bbdca45fc7a1a4ab785b676b___ @ 0x18040E5B8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_44086093bbdca45fc7a1a4ab785b676b___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_44086093bbdca45fc7a1a4ab785b676b___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x170uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_44086093bbdca45fc7a1a4ab785b676b___::CTaskWrapper__lambda_44086093bbdca45fc7a1a4ab785b676b_____lambda_44086093bbdca45fc7a1a4ab785b676b___(
           (__int64)v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
