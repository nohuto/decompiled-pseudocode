/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_b97f6338922ac33e763b003ae07478e0___ @ 0x1805B71B8
 * Callers:
 *     ?NotifyAppLayoutChanged@TabletModePositionerManager@@AEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z @ 0x1802E61AE (-NotifyAppLayoutChanged@TabletModePositionerManager@@AEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutO.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b97f6338922ac33e763b003ae07478e0___::CTaskWrapper__lambda_b97f6338922ac33e763b003ae07478e0_____lambda_b97f6338922ac33e763b003ae07478e0___ @ 0x1805B7148 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b97f6338922ac33e763b003ae07478e0___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_b97f6338922ac33e763b003ae07478e0___(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b97f6338922ac33e763b003ae07478e0___::CTaskWrapper__lambda_b97f6338922ac33e763b003ae07478e0_____lambda_b97f6338922ac33e763b003ae07478e0___(
           v3,
           a2);
  else
    v4 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v6;
}
