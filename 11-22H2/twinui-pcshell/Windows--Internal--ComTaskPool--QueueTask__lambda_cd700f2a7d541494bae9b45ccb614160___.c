/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_cd700f2a7d541494bae9b45ccb614160___ @ 0x1800556B8
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_7bc44750849f411daf11246e0ad82942___ @ 0x180055600 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_7bc44750849f411daf11246e0ad82942___.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cd700f2a7d541494bae9b45ccb614160___::CTaskWrapper__lambda_cd700f2a7d541494bae9b45ccb614160_____lambda_cd700f2a7d541494bae9b45ccb614160___ @ 0x18005574C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_cd700f2a7d541494bae9b45ccb614160___--CTaskW.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_cd700f2a7d541494bae9b45ccb614160___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cd700f2a7d541494bae9b45ccb614160___::CTaskWrapper__lambda_cd700f2a7d541494bae9b45ccb614160_____lambda_cd700f2a7d541494bae9b45ccb614160___(
           v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
