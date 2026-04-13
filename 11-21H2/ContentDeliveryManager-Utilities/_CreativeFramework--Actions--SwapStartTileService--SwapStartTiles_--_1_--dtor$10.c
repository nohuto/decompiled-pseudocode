/*
 * XREFs of _CreativeFramework::Actions::SwapStartTileService::SwapStartTiles_::_1_::dtor$10 @ 0x1800F4F5C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::Actions::SwapStartTileService::SwapStartTiles_::_1_::dtor_10(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 96));
}
