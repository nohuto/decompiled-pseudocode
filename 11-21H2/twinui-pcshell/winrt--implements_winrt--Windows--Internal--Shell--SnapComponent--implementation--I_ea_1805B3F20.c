/*
 * XREFs of winrt::implements_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_4820608d764e205befb540f09a70bd1e____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::GetRuntimeClassName @ 0x1805B3F20
 * Callers:
 *     <none>
 * Callees:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x180024BE0 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::implements_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_4820608d764e205befb540f09a70bd1e____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::GetRuntimeClassName(
        __int64 a1,
        struct winrt::impl::hstring_header **a2)
{
  *a2 = winrt::impl::create_hstring_on_heap(
          (winrt::impl *)L"Windows.Internal.Shell.SnapComponent.IImmersiveShellThreadDispatcherCallback",
          (winrt::impl *)0x4C);
  return a2;
}
