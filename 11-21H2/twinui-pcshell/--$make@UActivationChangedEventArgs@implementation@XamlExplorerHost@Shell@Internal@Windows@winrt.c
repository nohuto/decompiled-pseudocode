/*
 * XREFs of ??$make@UActivationChangedEventArgs@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEB_NAEBQEAUHWND__@@@winrt@@YA?AUActivationChangedEventArgs@XamlExplorerHost@Shell@Internal@Windows@0@AEB_NAEBQEAUHWND__@@@Z @ 0x18001F4CC
 * Callers:
 *     ?MessageHandler@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAA_JI_K_J@Z @ 0x18001F354 (-MessageHandler@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@wi.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::ActivationChangedEventArgs,bool const &,HWND__ * const &>(
        _QWORD *a1,
        char *a2,
        __int64 *a3)
{
  __int64 v6; // r9
  char v7; // r8
  _QWORD *result; // rax
  _QWORD *v9; // [rsp+30h] [rbp+8h]

  v9 = operator new(0x28uLL);
  v6 = *a3;
  v7 = *a2;
  v9[2] = &winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::ActivationChangedEventArgs,winrt::Windows::Internal::Shell::XamlExplorerHost::IActivationChangedEventArgs>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  v9[1] = 1LL;
  *v9 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::ActivationChangedEventArgs>::`vftable';
  *((_BYTE *)v9 + 24) = v7;
  v9[4] = v6;
  result = a1;
  *a1 = v9 + 2;
  return result;
}
