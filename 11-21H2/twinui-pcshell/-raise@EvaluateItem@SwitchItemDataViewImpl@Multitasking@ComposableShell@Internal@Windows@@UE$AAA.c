/*
 * XREFs of ?raise@EvaluateItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItemDataView@3456@PE$AAUIEvaluateItemEventArgs@3456@@Z @ 0x18043FA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::EvaluateItem::raise(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  Platform::EventSource::InvokeVoid<Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>,Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>(
    (Platform::Details **)(a1 + 64),
    (RTL_SRWLOCK *)(a1 + 136),
    a2,
    a3);
}
