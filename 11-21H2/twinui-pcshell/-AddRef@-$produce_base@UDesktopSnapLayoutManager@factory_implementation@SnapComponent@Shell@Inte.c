/*
 * XREFs of ?AddRef@?$produce_base@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@X@impl@winrt@@UEAAIXZ @ 0x1803535B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Foundation::IActivationFactory,void>::AddRef(
        __int64 a1)
{
  __int64 v1; // rdx

  v1 = a1 - 8;
  if ( !a1 )
    v1 = 8LL;
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v1);
}
