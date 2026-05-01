/*
 * XREFs of ??_G?$heap_implements@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1805B3980
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$root_implements@VSnapLayoutProvider@@UIInspectable@@@impl@winrt@@MEAA@XZ @ 0x18001D7E4 (--1-$root_implements@VSnapLayoutProvider@@UIInspectable@@@impl@winrt@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  winrt::impl::root_implements<SnapLayoutProvider,IInspectable>::~root_implements<SnapLayoutProvider,IInspectable>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
