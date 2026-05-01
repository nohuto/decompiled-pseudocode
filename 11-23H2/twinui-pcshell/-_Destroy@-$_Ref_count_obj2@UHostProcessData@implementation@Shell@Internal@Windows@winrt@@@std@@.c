/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@EEAAXXZ @ 0x18071A560
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::HostProcessData>::_Destroy(
        __int64 a1)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 32));
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 24));
}
