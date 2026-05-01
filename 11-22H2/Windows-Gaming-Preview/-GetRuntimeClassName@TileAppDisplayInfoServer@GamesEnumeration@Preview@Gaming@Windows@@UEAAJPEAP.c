/*
 * XREFs of ?GetRuntimeClassName@TileAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18003DF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Gaming::Preview::GamesEnumeration::TileAppDisplayInfoServer::GetRuntimeClassName(
        Windows::Gaming::Preview::GamesEnumeration::TileAppDisplayInfoServer *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Gaming.Preview.GamesEnumeration.TileAppDisplayInfoServer", 0x40u, a2);
}
