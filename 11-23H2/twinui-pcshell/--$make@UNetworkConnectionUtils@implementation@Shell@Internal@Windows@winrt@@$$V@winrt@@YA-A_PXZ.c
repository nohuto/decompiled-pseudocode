/*
 * XREFs of ??$make@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1807340C0
 * Callers:
 *     ??$make_factory@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x18073414C (--$make_factory@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@@im.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils,>(_QWORD *a1)
{
  _QWORD *v2; // rbx
  _QWORD *result; // rax

  v2 = operator new(0x40uLL);
  memset_0(v2, 0, 0x40uLL);
  v2[2] = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils,winrt::Windows::Internal::Shell::INetworkConnectionUtils>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  v2[1] = 1LL;
  v2[3] = 0LL;
  v2[4] = 0LL;
  v2[5] = 0LL;
  v2[6] = 0LL;
  v2[7] = 0LL;
  *v2 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils>::`vftable';
  result = a1;
  *a1 = v2 + 2;
  return result;
}
