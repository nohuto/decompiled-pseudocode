/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_e77611733156e07a25f619698f3ee1ef___ @ 0x1800239C0
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___ @ 0x180023CB0 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef___::CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef_____lambda_e77611733156e07a25f619698f3ee1ef___ @ 0x180023B70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef___--CTaskW.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_e77611733156e07a25f619698f3ee1ef___(
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
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef___::CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef_____lambda_e77611733156e07a25f619698f3ee1ef___(
           v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
