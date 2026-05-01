/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@PEAX@1@@Z @ 0x18065E724
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@PEAX@1@@Z @ 0x18065E724 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapCompon.c)
 *     ??1?$map@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@@9@@std@@QEAA@XZ @ 0x18065EF18 (--1-$map@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@U-$less.c)
 *     ??1SnapFlyoutHost@@UEAA@XZ @ 0x18065F4D8 (--1SnapFlyoutHost@@UEAA@XZ.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@@9@$0A@@std@@@std@@QEAAXXZ @ 0x18067DE88 (-clear@-$_Tree@V-$_Tmap_traits@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@PEAX@1@@Z @ 0x18065E724 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapCompon.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<HMONITOR__ * const,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<HMONITOR__ * const,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 *v6; // rdi

  v3 = a3;
  while ( !*((_BYTE *)v3 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<HMONITOR__ * const,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<HMONITOR__ * const,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>,void *>>>(
      a1,
      a2,
      v3[2]);
    v6 = v3;
    v3 = (__int64 *)*v3;
    if ( v6[5] )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(v6 + 5));
    std::_Deallocate<16,0>(v6, 0x30uLL);
  }
}
