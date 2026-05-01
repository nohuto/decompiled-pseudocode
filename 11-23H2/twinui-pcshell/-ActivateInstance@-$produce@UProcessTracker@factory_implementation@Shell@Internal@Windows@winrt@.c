/*
 * XREFs of ?ActivateInstance@?$produce@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18027E1F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0abi_guard@?$root_implements@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@UIProcessTrackerStatics@3456@Ustatic_lifetime@6@@impl@winrt@@QEAA@AEAUProcessTracker@factory_implementation@Shell@Internal@Windows@3@@Z @ 0x18027DEE8 (--0abi_guard@-$root_implements@UProcessTracker@factory_implementation@Shell@Internal@Windows@win.c)
 *     ?ActivateInstance@?$ProcessTrackerT@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@U1implementation@3456@Ustatic_lifetime@6@@factory_implementation@Shell@Internal@Windows@winrt@@QEBA?AUIInspectable@Foundation@56@XZ @ 0x18027E1BC (-ActivateInstance@-$ProcessTrackerT@UProcessTracker@factory_implementation@Shell@Internal@Window.c)
 *     ?shim@?$produce_base@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@X@impl@winrt@@QEAAAEAUProcessTracker@factory_implementation@Shell@Internal@Windows@3@XZ @ 0x18027F18C (-shim@-$produce_base@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIActi.c)
 */

void __fastcall __noreturn winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Foundation::IActivationFactory>::ActivateInstance(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  __int64 *v3; // rdx
  __int64 v4; // [rsp+0h] [rbp-28h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v2 = winrt::impl::produce_base<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Foundation::IActivationFactory,void>::shim();
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::IProcessTrackerStatics,winrt::static_lifetime>::abi_guard::abi_guard(
    &v5,
    v2);
  try
  {
    winrt::Windows::Internal::Shell::factory_implementation::ProcessTrackerT<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Internal::Shell::implementation::ProcessTracker,winrt::static_lifetime>::ActivateInstance();
  }
  catch ( ... )
  {
    v3 = &v4;
    *((_DWORD *)v3 + 14) = *(_DWORD *)winrt::to_hresult(v3 + 7);
  }
}
