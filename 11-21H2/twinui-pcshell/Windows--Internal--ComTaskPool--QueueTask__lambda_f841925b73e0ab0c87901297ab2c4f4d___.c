/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_f841925b73e0ab0c87901297ab2c4f4d___ @ 0x180035FBC
 * Callers:
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x18008F924 (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f841925b73e0ab0c87901297ab2c4f4d___::CTaskWrapper__lambda_f841925b73e0ab0c87901297ab2c4f4d_____lambda_f841925b73e0ab0c87901297ab2c4f4d___ @ 0x180036050 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f841925b73e0ab0c87901297ab2c4f4d___--CTaskW.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_f841925b73e0ab0c87901297ab2c4f4d___(
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
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f841925b73e0ab0c87901297ab2c4f4d___::CTaskWrapper__lambda_f841925b73e0ab0c87901297ab2c4f4d_____lambda_f841925b73e0ab0c87901297ab2c4f4d___(
           v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
