/*
 * XREFs of ?shim@?$produce_base@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@X@impl@winrt@@QEAAAEAUProcessTracker@factory_implementation@Shell@Internal@Windows@3@XZ @ 0x18027F18C
 * Callers:
 *     ?ActivateInstance@?$produce@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18027E1F0 (-ActivateInstance@-$produce@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Foundation::IActivationFactory,void>::shim(
        __int64 a1)
{
  return (a1 - 16) & -(__int64)(a1 != 0);
}
