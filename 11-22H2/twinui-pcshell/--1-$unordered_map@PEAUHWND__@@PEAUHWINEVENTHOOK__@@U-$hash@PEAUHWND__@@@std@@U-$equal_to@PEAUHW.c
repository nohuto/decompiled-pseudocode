/*
 * XREFs of ??1?$unordered_map@PEAUHWND__@@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@4@V?$allocator@U?$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@std@@@4@@std@@QEAA@XZ @ 0x1806366CC
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowsTracker::WindowsTracker_::_1_::dtor$3 @ 0x1802B9281 (_winrt--Windows--Internal--Shell--implementation--WindowsTracker--WindowsTracker_--_1_--dtor$3.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncGlobalTabOrder_::_1_::dtor$1 @ 0x1802BE292 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--SyncGlobalTabOrder_ea_1802BE292.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowData::SyncWindowTabDataModel_::_1_::dtor$1 @ 0x1802BE558 (_winrt--Windows--Internal--Shell--implementation--WindowData--SyncWindowTabDataMode_ea_1802BE558.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowData::GetPendingTabChanges_::_1_::dtor$1 @ 0x1802BE5A9 (_winrt--Windows--Internal--Shell--implementation--WindowData--GetPendingTabChanges_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@Uguid@winrt@@PEAX@std@@@std@@@?$_List_node@Uguid@winrt@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@Uguid@winrt@@PEAX@std@@@1@PEAU01@@Z @ 0x180035490 (--$_Free_non_head@V-$allocator@U-$_List_node@Uguid@winrt@@PEAX@std@@@std@@@-$_List_node@Uguid@wi.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::unordered_map<HWND__ *,HWINEVENTHOOK__ *>::~unordered_map<HWND__ *,HWINEVENTHOOK__ *>(__int64 a1)
{
  __int64 v2; // rcx

  std::_Deallocate<16,0>(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::_List_node<winrt::guid,void *>::_Free_non_head<std::allocator<std::_List_node<winrt::guid,void *>>>(
    v2,
    *(_QWORD *)(a1 + 8));
  std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x20uLL);
}
