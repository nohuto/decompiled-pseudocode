/*
 * XREFs of ??$QueueTask@V_lambda_52ee436932253a320c8b1bf838bed70e_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_52ee436932253a320c8b1bf838bed70e_@@@Z @ 0x180580410
 * Callers:
 *     ??$CallControllerAsync@UISwitchItemController@@UISwitchItem@@@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@P8ISwitchItemController@@EAAXPEAUISwitchItem@@@ZV?$ComPtr@UISwitchItem@@@23@@Z @ 0x18058017C (--$CallControllerAsync@UISwitchItemController@@UISwitchItem@@@AsyncControllerHelpers@@YAXAEAV-$C.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0V_lambda_52ee436932253a320c8b1bf838bed70e_@@@?$CTaskWrapper@V_lambda_52ee436932253a320c8b1bf838bed70e_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_52ee436932253a320c8b1bf838bed70e_@@@Z @ 0x18057FF94 (--$-0V_lambda_52ee436932253a320c8b1bf838bed70e_@@@-$CTaskWrapper@V_lambda_52ee436932253a320c8b1b.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask<_lambda_52ee436932253a320c8b1bf838bed70e_>(
        unsigned int a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v7; // edi

  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
    v5 = Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_52ee436932253a320c8b1bf838bed70e_>::CTaskWrapper<_lambda_52ee436932253a320c8b1bf838bed70e_>(
           v4,
           a2);
  else
    v5 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v7 = SHTaskPoolQueueTask(a1, 0LL, CurrentThreadId);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  return v7;
}
