/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@QEAA@XZ @ 0x1800221BC
 * Callers:
 *     ??1FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x180021AAC (--1FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ.c)
 *     ??1?$map@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@@std@@QEAA@XZ @ 0x180021BB8 (--1-$map@VHString@Wrappers@WRL@Microsoft@@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Previe.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800131B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013750 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180013750.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@1@@Z @ 0x180022EAC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V-$ComPtr.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::~_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>(
        __int64 *a1)
{
  __int64 v2; // rcx
  char *v3; // rbx
  char *v4; // rsi
  volatile signed __int64 *v5; // rcx

  v2 = *a1;
  v3 = *(char **)(v2 + 8);
  if ( !v3[25] )
  {
    do
    {
      std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>,void *>>>(
        a1,
        a1,
        *((_QWORD *)v3 + 2));
      v4 = v3;
      v3 = *(char **)v3;
      v5 = (volatile signed __int64 *)*((_QWORD *)v4 + 5);
      if ( v5 )
      {
        *((_QWORD *)v4 + 5) = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v5);
      }
      WindowsDeleteString(*((HSTRING *)v4 + 4));
      *((_QWORD *)v4 + 4) = 0LL;
      std::_Deallocate<16,0>(v4, 0x30uLL);
    }
    while ( !v3[25] );
    v2 = *a1;
  }
  std::_Deallocate<16,0>((char *)v2, 0x30uLL);
}
