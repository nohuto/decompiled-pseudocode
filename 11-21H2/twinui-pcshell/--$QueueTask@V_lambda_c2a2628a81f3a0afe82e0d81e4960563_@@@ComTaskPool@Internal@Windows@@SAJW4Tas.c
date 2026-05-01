/*
 * XREFs of ??$QueueTask@V_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@@Z @ 0x1804C5BC4
 * Callers:
 *     ??$CallControllerAsync@UISwitchItemController@@UISwitchItem@@UIVirtualDesktopItem@@@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@P8ISwitchItemController@@EAAXPEAUISwitchItem@@PEAUIVirtualDesktopItem@@@ZV?$ComPtr@UISwitchItem@@@23@V?$ComPtr@UIVirtualDesktopItem@@@23@@Z @ 0x1804C58A0 (--$CallControllerAsync@UISwitchItemController@@UISwitchItem@@UIVirtualDesktopItem@@@AsyncControl.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0V_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@@?$CTaskWrapper@V_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@@Z @ 0x1804C56EC (--$-0V_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@@-$CTaskWrapper@V_lambda_c2a2628a81f3a0afe82e0d.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask<_lambda_c2a2628a81f3a0afe82e0d81e4960563_>(
        unsigned int a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v7; // edi

  v4 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
    v5 = Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2a2628a81f3a0afe82e0d81e4960563_>::CTaskWrapper<_lambda_c2a2628a81f3a0afe82e0d81e4960563_>(
           v4,
           a2);
  else
    v5 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v7 = SHTaskPoolQueueTask(a1, 0LL, CurrentThreadId, 0LL, v5, 0LL);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  return v7;
}
