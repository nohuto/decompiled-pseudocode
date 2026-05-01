/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_0a86a8a614d8e8ff7c8dda79fd41643f___ @ 0x180566AC0
 * Callers:
 *     ?UpdateAppView@Win32AppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x180568E70 (-UpdateAppView@Win32AppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafe.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0a86a8a614d8e8ff7c8dda79fd41643f___::CTaskWrapper__lambda_0a86a8a614d8e8ff7c8dda79fd41643f_____lambda_0a86a8a614d8e8ff7c8dda79fd41643f___ @ 0x18056668C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0a86a8a614d8e8ff7c8dda79fd41643f___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_0a86a8a614d8e8ff7c8dda79fd41643f___(
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
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0a86a8a614d8e8ff7c8dda79fd41643f___::CTaskWrapper__lambda_0a86a8a614d8e8ff7c8dda79fd41643f_____lambda_0a86a8a614d8e8ff7c8dda79fd41643f___(
           (__int64)v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
