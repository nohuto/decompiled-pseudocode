/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_51a2f8a6ca084dc5a8b9443e2ed32d78___ @ 0x1804B3CA0
 * Callers:
 *     ?_OnItemInvoked@CSnapAssistViewController@@AEAAJPEAUIApplicationView@@@Z @ 0x1804B47F8 (-_OnItemInvoked@CSnapAssistViewController@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_51a2f8a6ca084dc5a8b9443e2ed32d78___::CTaskWrapper__lambda_51a2f8a6ca084dc5a8b9443e2ed32d78_____lambda_51a2f8a6ca084dc5a8b9443e2ed32d78___ @ 0x1804B3B0C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_51a2f8a6ca084dc5a8b9443e2ed32d78___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_51a2f8a6ca084dc5a8b9443e2ed32d78___(
        __int64 a1,
        _OWORD *a2)
{
  void *v3; // rax
  __int64 v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_51a2f8a6ca084dc5a8b9443e2ed32d78___::CTaskWrapper__lambda_51a2f8a6ca084dc5a8b9443e2ed32d78_____lambda_51a2f8a6ca084dc5a8b9443e2ed32d78___(
           (__int64)v3,
           a2);
  else
    v4 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(1LL, 0LL, CurrentThreadId, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
