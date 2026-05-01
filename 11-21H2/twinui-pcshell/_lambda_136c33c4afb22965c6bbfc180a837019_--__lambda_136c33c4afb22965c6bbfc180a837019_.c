/*
 * XREFs of _lambda_136c33c4afb22965c6bbfc180a837019_::__lambda_136c33c4afb22965c6bbfc180a837019_ @ 0x180447A40
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_136c33c4afb22965c6bbfc180a837019___::_scalar_deleting_destructor_ @ 0x180447C60 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_136c33c4afb22965c6bbfc180a837019___--_scala.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs___lambda_abf37a923c4e39d61bd96b31f9d5bb1d___::Invoke @ 0x180447F00 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_180447F00.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x180033140 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_136c33c4afb22965c6bbfc180a837019_::__lambda_136c33c4afb22965c6bbfc180a837019_(
        Platform::WeakReference *this)
{
  winrt::Windows::Foundation::IUnknown *v2; // rcx

  v2 = (Platform::WeakReference *)((char *)this + 8);
  if ( *(_QWORD *)v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v2);
  Platform::WeakReference::InternalRelease(this);
}
