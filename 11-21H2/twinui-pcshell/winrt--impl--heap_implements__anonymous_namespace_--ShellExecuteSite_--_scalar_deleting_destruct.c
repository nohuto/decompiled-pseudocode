/*
 * XREFs of winrt::impl::heap_implements__anonymous_namespace_::ShellExecuteSite_::_scalar_deleting_destructor_ @ 0x1805D03E8
 * Callers:
 *     sub_18020FF50 @ 0x18020FF50 (sub_18020FF50.c)
 * Callees:
 *     ??1?$root_implements@VSnapLayoutProvider@@UIInspectable@@@impl@winrt@@MEAA@XZ @ 0x18001D7E4 (--1-$root_implements@VSnapLayoutProvider@@UIInspectable@@@impl@winrt@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall winrt::impl::heap_implements__anonymous_namespace_::ShellExecuteSite_::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  winrt::impl::root_implements<SnapLayoutProvider,IInspectable>::~root_implements<SnapLayoutProvider,IInspectable>((__int64)a1 + 16);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
