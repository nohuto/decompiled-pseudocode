/*
 * XREFs of _lambda_fd92b21980b3dabee44eae3597b927cc_::__lambda_fd92b21980b3dabee44eae3597b927cc_ @ 0x1805FE374
 * Callers:
 *     _TaskViewHost::RuntimeClassInitialize_::_1_::dtor$11 @ 0x18021AC9D (_TaskViewHost--RuntimeClassInitialize_--_1_--dtor$11.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_fd92b21980b3dabee44eae3597b927cc____::_1_::dtor$0 @ 0x18021AEA2 (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--Composable_ea_18021AEA2.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall lambda_fd92b21980b3dabee44eae3597b927cc_::__lambda_fd92b21980b3dabee44eae3597b927cc_(
        winrt::Windows::Foundation::IUnknown *this)
{
  winrt::Windows::Foundation::IUnknown *v2; // rcx

  v2 = (winrt::Windows::Foundation::IUnknown *)((char *)this + 8);
  if ( *(_QWORD *)v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v2);
  if ( *(_QWORD *)this )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(this);
}
