/*
 * XREFs of ??$make@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@$$V@winrt@@YA?AUSearchAppHost@Shell@UI@WindowsUdk@0@XZ @ 0x18019A488
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActivationMode@Shell@UI@WindowsUdk@3@PEBG@Z @ 0x18019D9F4 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActiv.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 */

_QWORD *__fastcall winrt::make<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,>(_QWORD *a1)
{
  _QWORD *v2; // rbx
  _QWORD *result; // rax

  v2 = operator new(0x78uLL);
  memset_0(v2, 0, 0x78uLL);
  v2[2] = &winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost>::`vftable';
  v2[3] = &winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost2>::`vftable';
  v2[4] = &winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost3>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  v2[1] = 1LL;
  v2[5] = 0LL;
  v2[6] = 0LL;
  v2[7] = 0LL;
  v2[8] = 0LL;
  v2[9] = 0LL;
  v2[10] = 0LL;
  v2[11] = 0LL;
  v2[12] = 0LL;
  v2[13] = 0LL;
  v2[14] = 0LL;
  *v2 = &winrt::impl::heap_implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost>::`vftable';
  result = a1;
  *a1 = v2 + 2;
  return result;
}
