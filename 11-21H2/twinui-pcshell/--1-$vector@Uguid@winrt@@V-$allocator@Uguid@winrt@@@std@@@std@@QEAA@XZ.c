/*
 * XREFs of ??1?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA@XZ @ 0x180577C70
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateTabsForWindow_::_1_::dtor$1 @ 0x180214186 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--UpdateTabsForWindow_--_1_--dtor.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateTabsForWindow_::_1_::dtor$2 @ 0x180214198 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--UpdateTabsForWindo_ea_180214198.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveWindowTabDataModel_::_1_::dtor$0 @ 0x1802143FD (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--RemoveWindowTabDataModel_--_1_-.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowData::SyncWindowTabDataModel_::_1_::dtor$2 @ 0x1802144F9 (_winrt--Windows--Internal--Shell--implementation--WindowData--SyncWindowTabDataMode_ea_1802144F9.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::OnTabsChanged_::_1_::dtor$1 @ 0x180578B04 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--OnTabsChanged_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::OnTabsChanged_::_1_::dtor$2 @ 0x180578B10 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--OnTabsChanged_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<winrt::guid>::~vector<winrt::guid>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
