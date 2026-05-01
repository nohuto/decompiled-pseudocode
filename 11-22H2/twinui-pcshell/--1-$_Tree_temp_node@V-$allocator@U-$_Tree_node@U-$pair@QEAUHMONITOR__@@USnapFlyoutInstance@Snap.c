/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18067989C
 * Callers:
 *     ??$_Emplace@U?$pair@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@@9@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@_N@1@$$QEAU?$pair@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@1@@Z @ 0x1806789B4 (--$_Emplace@U-$pair@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@win.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HMONITOR__ * const,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HMONITOR__ * const,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  winrt::Windows::Foundation::IUnknown *v3; // rcx
  void *v4; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = (winrt::Windows::Foundation::IUnknown *)(v2 + 40);
    if ( *(_QWORD *)v3 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v3);
  }
  v4 = *(void **)(a1 + 8);
  if ( v4 )
    std::_Deallocate<16,0>(v4, 0x30uLL);
}
