/*
 * XREFs of ??$make@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?A_PXZ @ 0x18010AF24
 * Callers:
 *     ?RuntimeClassInitialize@CShellSnapComponent@@QEAAJXZ @ 0x18010AC10 (-RuntimeClassInitialize@CShellSnapComponent@@QEAAJXZ.c)
 * Callees:
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x1800EAB24 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,>(
        _QWORD *a1)
{
  char *v2; // rdi
  __int64 v3; // rcx

  v2 = (char *)operator new(0x30uLL);
  *(_OWORD *)v2 = 0LL;
  *((_OWORD *)v2 + 1) = 0LL;
  *((_OWORD *)v2 + 2) = 0LL;
  *((_QWORD *)v2 + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcher>::`vftable';
  v3 = (unsigned int)_InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)v2 + 1) = 1LL;
  *(_QWORD *)v2 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher>::`vftable';
  *((_DWORD *)v2 + 6) = SHTaskPoolGetUniqueContext(v3);
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>((CreationThreadDispatcher **)v2 + 4);
  *a1 = v2 + 16;
  *(_QWORD *)v2 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher>::`vftable';
  return a1;
}
