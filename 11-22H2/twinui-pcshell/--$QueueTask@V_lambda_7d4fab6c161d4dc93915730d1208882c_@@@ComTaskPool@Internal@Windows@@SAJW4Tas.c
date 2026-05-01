/*
 * XREFs of ??$QueueTask@V_lambda_7d4fab6c161d4dc93915730d1208882c_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_7d4fab6c161d4dc93915730d1208882c_@@@Z @ 0x180560B60
 * Callers:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x1802E0300 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0V_lambda_7d4fab6c161d4dc93915730d1208882c_@@@?$CTaskWrapper@V_lambda_7d4fab6c161d4dc93915730d1208882c_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_7d4fab6c161d4dc93915730d1208882c_@@@Z @ 0x18056076C (--$-0V_lambda_7d4fab6c161d4dc93915730d1208882c_@@@-$CTaskWrapper@V_lambda_7d4fab6c161d4dc9391573.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask<_lambda_7d4fab6c161d4dc93915730d1208882c_>(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_7d4fab6c161d4dc93915730d1208882c_>::CTaskWrapper<_lambda_7d4fab6c161d4dc93915730d1208882c_>(
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
