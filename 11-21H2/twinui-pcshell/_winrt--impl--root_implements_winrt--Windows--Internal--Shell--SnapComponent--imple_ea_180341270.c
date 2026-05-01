/*
 * XREFs of _winrt::impl::root_implements_winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance_winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance_::get_weak_winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance__::_1_::dtor$1 @ 0x180341270
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1801A3CC0 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::root_implements_winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance_winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance_::get_weak_winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(*(__int64 **)(a2 + 88));
  }
  return result;
}
