/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_00240b7ecf0f21591ff2c0aa4694bf15___ @ 0x1805B2668
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_6016a4952a1cba8173ba454c267c23ee___ @ 0x1805B2708 (CreationThreadDispatcher--RunAsync__lambda_6016a4952a1cba8173ba454c267c23ee___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_00240b7ecf0f21591ff2c0aa4694bf15___::CTaskWrapper__lambda_00240b7ecf0f21591ff2c0aa4694bf15_____lambda_00240b7ecf0f21591ff2c0aa4694bf15___ @ 0x1805B2580 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_00240b7ecf0f21591ff2c0aa4694bf15___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_00240b7ecf0f21591ff2c0aa4694bf15___(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  unsigned int v9; // edi

  v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v8 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_00240b7ecf0f21591ff2c0aa4694bf15___::CTaskWrapper__lambda_00240b7ecf0f21591ff2c0aa4694bf15_____lambda_00240b7ecf0f21591ff2c0aa4694bf15___(
           v7,
           a4);
  else
    v8 = 0LL;
  v9 = SHTaskPoolQueueTask(3LL, a2, a3, 0LL, v8, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  return v9;
}
