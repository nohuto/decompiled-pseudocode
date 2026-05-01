/*
 * XREFs of ??$QueueTask@V_lambda_28273f6668f79f5db2d6a9fae521721a_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_28273f6668f79f5db2d6a9fae521721a_@@@Z @ 0x18048AFFC
 * Callers:
 *     ??$RunAsync@V_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@CreationThreadDispatcher@@QEAAJV_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@K@Z @ 0x18048B09C (--$RunAsync@V_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@CreationThreadDispatcher@@QEAAJV_lambda.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0V_lambda_28273f6668f79f5db2d6a9fae521721a_@@@?$CTaskWrapper@V_lambda_28273f6668f79f5db2d6a9fae521721a_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_28273f6668f79f5db2d6a9fae521721a_@@@Z @ 0x18048AF88 (--$-0V_lambda_28273f6668f79f5db2d6a9fae521721a_@@@-$CTaskWrapper@V_lambda_28273f6668f79f5db2d6a9.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask<_lambda_28273f6668f79f5db2d6a9fae521721a_>(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  void *v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // edi

  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v8 = Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_28273f6668f79f5db2d6a9fae521721a_>::CTaskWrapper<_lambda_28273f6668f79f5db2d6a9fae521721a_>(
           (__int64)v7,
           a4);
  else
    v8 = 0LL;
  v9 = SHTaskPoolQueueTask(3LL, a2, a3);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return v9;
}
