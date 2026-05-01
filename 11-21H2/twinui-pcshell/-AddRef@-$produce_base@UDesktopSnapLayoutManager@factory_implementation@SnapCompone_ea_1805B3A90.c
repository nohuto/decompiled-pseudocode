/*
 * XREFs of ?AddRef@?$produce_base@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManagerFactory@34567@X@impl@winrt@@UEAAIXZ @ 0x1805B3A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerFactory,void>::AddRef(
        __int64 a1)
{
  __int64 v1; // rdx

  v1 = a1 - 16;
  if ( !a1 )
    v1 = 8LL;
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v1);
}
