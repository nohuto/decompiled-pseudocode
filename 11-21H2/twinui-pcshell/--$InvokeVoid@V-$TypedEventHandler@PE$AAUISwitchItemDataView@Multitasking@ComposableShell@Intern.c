/*
 * XREFs of ??$InvokeVoid@V?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@Foundation@Windows@@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@3@PE$AAUIEvaluateItemEventArgs@5673@@EventSource@Platform@@QEAAXPEAUEventLock@Details@1@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@5678@@Z @ 0x18042B480
 * Callers:
 *     ?raise@EvaluateItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItemDataView@3456@PE$AAUIEvaluateItemEventArgs@3456@@Z @ 0x18043FA40 (-raise@EvaluateItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAA.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$DoInvokeVoid@V?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@Foundation@Windows@@V_lambda_ded30c34a5b946bc18cf9caf8a4ec53d_@@@EventSource@Platform@@AEAAXPEAUEventLock@Details@1@V_lambda_ded30c34a5b946bc18cf9caf8a4ec53d_@@@Z @ 0x18042AAD0 (--$DoInvokeVoid@V-$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Inte.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Platform::EventSource::InvokeVoid<Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>,Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>(
        Platform::Details **a1,
        RTL_SRWLOCK *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // r14
  __int64 v8; // rbx
  _QWORD v9[6]; // [rsp+28h] [rbp-30h] BYREF

  v7 = __abi_winrt_ptr_ctor(a3);
  v8 = __abi_winrt_ptr_ctor(a4);
  v9[0] = __abi_winrt_ptr_ctor(v7);
  v9[1] = __abi_winrt_ptr_ctor(v8);
  Platform::EventSource::DoInvokeVoid<Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>,_lambda_ded30c34a5b946bc18cf9caf8a4ec53d_>(
    a1,
    a2,
    v9);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
}
