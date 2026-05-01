/*
 * XREFs of ??$QueueTask@V_lambda_08bdecb53d2454d61d2a3b3bfe9078f8_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_08bdecb53d2454d61d2a3b3bfe9078f8_@@@Z @ 0x180562CAC
 * Callers:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ @ 0x180563110 (-DismissView@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0V_lambda_08bdecb53d2454d61d2a3b3bfe9078f8_@@@?$CTaskWrapper@V_lambda_08bdecb53d2454d61d2a3b3bfe9078f8_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_08bdecb53d2454d61d2a3b3bfe9078f8_@@@Z @ 0x180562A00 (--$-0V_lambda_08bdecb53d2454d61d2a3b3bfe9078f8_@@@-$CTaskWrapper@V_lambda_08bdecb53d2454d61d2a3b.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask<_lambda_08bdecb53d2454d61d2a3b3bfe9078f8_>(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_08bdecb53d2454d61d2a3b3bfe9078f8_>::CTaskWrapper<_lambda_08bdecb53d2454d61d2a3b3bfe9078f8_>(
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
