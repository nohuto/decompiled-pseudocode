/*
 * XREFs of ??1?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@QEAA@XZ @ 0x180682C68
 * Callers:
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::GetSnappableWindowList_::_1_::dtor$3 @ 0x180684360 (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutM_ea_180684360.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::GetSnappableWindowSuggestions_::_1_::dtor$0 @ 0x180684665 (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutM_ea_180684665.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::vector<winrt::com_ptr<IApplicationView>>::~vector<winrt::com_ptr<IApplicationView>>()
{
  return std::vector<winrt::com_ptr<IApplicationView>>::_Tidy();
}
