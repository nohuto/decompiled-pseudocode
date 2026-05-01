/*
 * XREFs of ??1?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18052134C
 * Callers:
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$26 @ 0x1802BD208 (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$26.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveWindowTabDataModel_::_1_::dtor$0 @ 0x1802BE358 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--RemoveWindowTabDataModel_--_1_-.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateTabsForWindow_::_1_::dtor$1 @ 0x1802BE3AE (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--UpdateTabsForWindow_--_1_--dtor.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateTabsForWindow_::_1_::dtor$2 @ 0x1802BE3C0 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--UpdateTabsForWindo_ea_1802BE3C0.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowData::SyncWindowTabDataModel_::_1_::dtor$2 @ 0x1802BE56A (_winrt--Windows--Internal--Shell--implementation--WindowData--SyncWindowTabDataMode_ea_1802BE56A.c)
 *     _KeyboardHosting::TabTipAdapter::InvokeInputAppRequestedShow_::_1_::dtor$1 @ 0x180524D4D (_KeyboardHosting--TabTipAdapter--InvokeInputAppRequestedShow_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::OnTabsChanged_::_1_::dtor$1 @ 0x180637B84 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--OnTabsChanged_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::OnTabsChanged_::_1_::dtor$2 @ 0x180637B90 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--OnTabsChanged_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<winrt::Windows::Foundation::Rect>::~vector<winrt::Windows::Foundation::Rect>(__int64 a1)
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
