/*
 * XREFs of ??$QueueTask@V_lambda_2982927e39568cdd3df99df702aa65a9_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_2982927e39568cdd3df99df702aa65a9_@@@Z @ 0x18002D7DC
 * Callers:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18002D5C0 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 * Callees:
 *     ??$?0V_lambda_2982927e39568cdd3df99df702aa65a9_@@@?$CTaskWrapper@V_lambda_2982927e39568cdd3df99df702aa65a9_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_2982927e39568cdd3df99df702aa65a9_@@@Z @ 0x18002D878 (--$-0V_lambda_2982927e39568cdd3df99df702aa65a9_@@@-$CTaskWrapper@V_lambda_2982927e39568cdd3df99d.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask<_lambda_2982927e39568cdd3df99df702aa65a9_>(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rax
  __int64 v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_2982927e39568cdd3df99df702aa65a9_>::CTaskWrapper<_lambda_2982927e39568cdd3df99df702aa65a9_>(
           v3,
           a2);
  else
    v4 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
