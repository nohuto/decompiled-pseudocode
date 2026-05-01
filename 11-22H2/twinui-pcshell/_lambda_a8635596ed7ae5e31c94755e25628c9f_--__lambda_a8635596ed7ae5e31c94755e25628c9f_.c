/*
 * XREFs of _lambda_a8635596ed7ae5e31c94755e25628c9f_::__lambda_a8635596ed7ae5e31c94755e25628c9f_ @ 0x18078CE68
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a8635596ed7ae5e31c94755e25628c9f___::_scalar_deleting_destructor_ @ 0x18078D000 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a8635596ed7ae5e31c94755e25628c9f___--_scala.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs___lambda_abf37a923c4e39d61bd96b31f9d5bb1d___::Invoke @ 0x18078D2E0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_18078D2E0.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x18005F490 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall lambda_a8635596ed7ae5e31c94755e25628c9f_::__lambda_a8635596ed7ae5e31c94755e25628c9f_(
        Platform::WeakReference *this)
{
  winrt::Windows::Foundation::IUnknown *v2; // rcx

  v2 = (Platform::WeakReference *)((char *)this + 8);
  if ( *(_QWORD *)v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v2);
  Platform::WeakReference::InternalRelease(this);
}
