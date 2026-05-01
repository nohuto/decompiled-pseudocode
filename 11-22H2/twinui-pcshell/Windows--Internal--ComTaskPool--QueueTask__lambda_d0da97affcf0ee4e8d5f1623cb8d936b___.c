/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_d0da97affcf0ee4e8d5f1623cb8d936b___ @ 0x18001FBD0
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_3299b7567c8e16a49084b1350d61b7f6___ @ 0x1800209B4 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_3299b7567c8e16a49084b1350d61b7f6___.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d0da97affcf0ee4e8d5f1623cb8d936b___::CTaskWrapper__lambda_d0da97affcf0ee4e8d5f1623cb8d936b_____lambda_d0da97affcf0ee4e8d5f1623cb8d936b___ @ 0x18001FF2C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d0da97affcf0ee4e8d5f1623cb8d936b___--CTaskW.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_d0da97affcf0ee4e8d5f1623cb8d936b___(
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
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d0da97affcf0ee4e8d5f1623cb8d936b___::CTaskWrapper__lambda_d0da97affcf0ee4e8d5f1623cb8d936b_____lambda_d0da97affcf0ee4e8d5f1623cb8d936b___(
           v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
