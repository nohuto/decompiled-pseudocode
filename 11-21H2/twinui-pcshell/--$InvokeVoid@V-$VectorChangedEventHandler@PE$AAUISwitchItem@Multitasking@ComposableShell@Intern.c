/*
 * XREFs of ??$InvokeVoid@V?$VectorChangedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@PE$AAU?$IObservableVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@234@PE$AAUIVectorChangedEventArgs@234@@EventSource@Platform@@QEAAXPEAUEventLock@Details@1@PE$AAU?$IObservableVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@PE$AAUIVectorChangedEventArgs@567@@Z @ 0x18042B570
 * Callers:
 *     ?Notify@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@AE$AAAXW4CollectionChange@2Foundation@Windows@@I@Z @ 0x180436CCC (-Notify@-$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$equal_to@PE.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$DoInvokeVoid@V?$VectorChangedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@V_lambda_843a4523c4ce898f7fb4bb4d9e96aac5_@@@EventSource@Platform@@AEAAXPEAUEventLock@Details@1@V_lambda_843a4523c4ce898f7fb4bb4d9e96aac5_@@@Z @ 0x18042AD34 (--$DoInvokeVoid@V-$VectorChangedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Inte.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Platform::EventSource::InvokeVoid<Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,Windows::Foundation::Collections::IObservableVector<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *> __gc *,Windows::Foundation::Collections::IVectorChangedEventArgs __gc *>(
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
  Platform::EventSource::DoInvokeVoid<Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,_lambda_843a4523c4ce898f7fb4bb4d9e96aac5_>(
    a1,
    a2,
    v9);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
}
