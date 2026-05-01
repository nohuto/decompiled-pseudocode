/*
 * XREFs of ?deallocate@?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@QEAAXQEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@_K@Z @ 0x18000E4F4
 * Callers:
 *     _std::vector_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__std::allocator_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__const_&__::_1_::catch$0 @ 0x18004C70B (_std--vector_Microsoft--WRL--ComPtr_Windows--Gaming--Preview--GamesEnumeration--GameListEntrySer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::deallocate(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return std::_Deallocate<16,0>(a2, 8 * a3);
}
