/*
 * XREFs of _lambda_ac11a78ed3d60abcb52a125606654bab_::__lambda_ac11a78ed3d60abcb52a125606654bab_ @ 0x1805FE358
 * Callers:
 *     _TaskViewHost::RuntimeClassInitialize_::_1_::dtor$15 @ 0x18021ACAF (_TaskViewHost--RuntimeClassInitialize_--_1_--dtor$15.c)
 *     _TaskViewHost::RuntimeClassInitialize_::_1_::dtor$19 @ 0x18021ACC1 (_TaskViewHost--RuntimeClassInitialize_--_1_--dtor$19.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs___lambda_ac11a78ed3d60abcb52a125606654bab____::_1_::dtor$0 @ 0x18021AE90 (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--ComposableShell--Multit.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall lambda_ac11a78ed3d60abcb52a125606654bab_::__lambda_ac11a78ed3d60abcb52a125606654bab_(
        winrt::Windows::Foundation::IUnknown *a1)
{
  if ( *(_QWORD *)a1 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a1);
}
