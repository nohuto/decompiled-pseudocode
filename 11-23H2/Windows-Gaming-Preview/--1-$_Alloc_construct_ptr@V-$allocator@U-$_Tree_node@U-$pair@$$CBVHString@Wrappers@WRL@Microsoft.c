/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800103AC
 * Callers:
 *     _std::_Tree_std::_Tmap_traits_Microsoft::WRL::Wrappers::HString_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase_std::allocator_std::pair_Microsoft::WRL::Wrappers::HString_const__Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer______0___::emplace_Microsoft::WRL::Wrappers::HString_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__&__::_1_::dtor$2 @ 0x18004D5A4 (_std--_Tree_std--_Tmap_traits_Microsoft--WRL--Wrappers--HString_Microsoft--WRL--ComPtr_Windows--.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004BB68 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    operator delete(v1, 0x30uLL);
}
