/*
 * XREFs of ??$_Find_lower_bound@VHString@Wrappers@WRL@Microsoft@@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@std@@@1@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18000FA4C
 * Callers:
 *     ?find@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@@std@@@2@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18000C410 (-find@-$_Tree@V-$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V-$ComPtr@VGameListEntryServer@Ga.c)
 *     ??$emplace@VHString@Wrappers@WRL@Microsoft@@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@@std@@@std@@_N@1@$$QEAVHString@Wrappers@WRL@Microsoft@@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@56@@Z @ 0x18000D890 (--$emplace@VHString@Wrappers@WRL@Microsoft@@AEAV-$ComPtr@VGameListEntryServer@GamesEnumeration@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Find_lower_bound<Microsoft::WRL::Wrappers::HString>(
        __int64 *a1,
        __int64 a2,
        HSTRING *a3)
{
  __int64 v3; // rax
  __int64 *v6; // rdi
  HSTRING v7; // rcx
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v9; // rax
  int v10; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v6 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v6;
  while ( !*((_BYTE *)v6 + 25) )
  {
    v7 = *a3;
    *(_QWORD *)a2 = v6;
    StringRawBuffer = WindowsGetStringRawBuffer(v7, 0LL);
    v9 = WindowsGetStringRawBuffer((HSTRING)v6[4], 0LL);
    if ( CompareStringOrdinal(v9, -1, StringRawBuffer, -1, 1) == 1 )
    {
      v6 = (__int64 *)v6[2];
      v10 = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 16) = v6;
      v10 = 1;
      v6 = (__int64 *)*v6;
    }
    *(_DWORD *)(a2 + 8) = v10;
  }
  return a2;
}
