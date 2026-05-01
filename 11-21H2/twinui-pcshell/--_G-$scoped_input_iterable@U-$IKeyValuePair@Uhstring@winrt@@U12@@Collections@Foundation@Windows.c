/*
 * XREFs of ??_G?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@UEAAPEAXI@Z @ 0x180040D60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$root_implements@VSnapLayoutProvider@@UIInspectable@@@impl@winrt@@MEAA@XZ @ 0x18001D7E4 (--1-$root_implements@VSnapLayoutProvider@@UIInspectable@@@impl@winrt@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  winrt::impl::root_implements<SnapLayoutProvider,IInspectable>::~root_implements<SnapLayoutProvider,IInspectable>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x30uLL);
  return a1;
}
