/*
 * XREFs of ??1?$pair@$$CBUhstring@winrt@@U12@@std@@QEAA@XZ @ 0x180040DA0
 * Callers:
 *     _CControlCenterExperienceManager::Show_::_1_::dtor$0 @ 0x180212A32 (_CControlCenterExperienceManager--Show_--_1_--dtor$0.c)
 *     _CControlCenterExperienceManager::Show_::_1_::dtor$1 @ 0x180212A44 (_CControlCenterExperienceManager--Show_--_1_--dtor$1.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall std::pair<winrt::hstring const,winrt::hstring>::~pair<winrt::hstring const,winrt::hstring>(char *a1)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(a1 + 8);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a1);
}
