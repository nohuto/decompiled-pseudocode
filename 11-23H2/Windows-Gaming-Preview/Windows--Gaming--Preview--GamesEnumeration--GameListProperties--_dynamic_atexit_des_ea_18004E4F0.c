/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__TileId__ @ 0x18004E4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__TileId__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_180064EC8);
  qword_180064EC8 = 0LL;
  return result;
}
