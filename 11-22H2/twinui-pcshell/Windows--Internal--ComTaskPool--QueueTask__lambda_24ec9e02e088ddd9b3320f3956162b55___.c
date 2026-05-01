/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_24ec9e02e088ddd9b3320f3956162b55___ @ 0x18065D0CC
 * Callers:
 *     ?_FireWindowSnappingEvent@CShellSnapComponent@@AEAAXPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1806659BC (-_FireWindowSnappingEvent@CShellSnapComponent@@AEAAXPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_24ec9e02e088ddd9b3320f3956162b55___::CTaskWrapper__lambda_24ec9e02e088ddd9b3320f3956162b55_____lambda_24ec9e02e088ddd9b3320f3956162b55___ @ 0x18065CC80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_24ec9e02e088ddd9b3320f3956162b55___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_24ec9e02e088ddd9b3320f3956162b55___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_24ec9e02e088ddd9b3320f3956162b55___::CTaskWrapper__lambda_24ec9e02e088ddd9b3320f3956162b55_____lambda_24ec9e02e088ddd9b3320f3956162b55___(
           (__int64)v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(2LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
