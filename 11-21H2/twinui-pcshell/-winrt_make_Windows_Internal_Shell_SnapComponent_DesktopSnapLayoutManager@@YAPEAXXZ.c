/*
 * XREFs of ?winrt_make_Windows_Internal_Shell_SnapComponent_DesktopSnapLayoutManager@@YAPEAXXZ @ 0x1805B5490
 * Callers:
 *     ?WINRT_GetActivationFactory@@YAHPEAUHSTRING__@@PEAPEAX@Z @ 0x1800FC02C (-WINRT_GetActivationFactory@@YAHPEAUHSTRING__@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

char *winrt_make_Windows_Internal_Shell_SnapComponent_DesktopSnapLayoutManager(void)
{
  _QWORD *v0; // rax

  v0 = operator new(0x28uLL);
  v0[2] = &winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Foundation::IActivationFactory>::`vftable';
  v0[3] = &winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerFactory>::`vftable';
  v0[4] = &winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v0 + 2) = 1;
  *v0 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager>::`vftable';
  return (char *)(v0 + 2);
}
