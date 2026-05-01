/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_bfcda2f4b09e169516dee7a5816294eb___ @ 0x180624494
 * Callers:
 *     ?UpdateAppView@Win32AppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x180626A30 (-UpdateAppView@Win32AppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafe.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bfcda2f4b09e169516dee7a5816294eb___::CTaskWrapper__lambda_bfcda2f4b09e169516dee7a5816294eb_____lambda_bfcda2f4b09e169516dee7a5816294eb___ @ 0x180624028 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_bfcda2f4b09e169516dee7a5816294eb___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_bfcda2f4b09e169516dee7a5816294eb___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bfcda2f4b09e169516dee7a5816294eb___::CTaskWrapper__lambda_bfcda2f4b09e169516dee7a5816294eb_____lambda_bfcda2f4b09e169516dee7a5816294eb___(
           (__int64)v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
