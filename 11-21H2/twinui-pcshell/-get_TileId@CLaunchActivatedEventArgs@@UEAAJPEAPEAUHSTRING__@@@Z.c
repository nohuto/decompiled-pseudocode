/*
 * XREFs of ?get_TileId@CLaunchActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180181950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CLaunchActivatedEventArgs::get_TileId(HSTRING *this, HSTRING *a2)
{
  return WindowsDuplicateString(this[8], a2);
}
