/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__LastLaunched__ @ 0x18004D7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__LastLaunched__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_180062EF0);
  qword_180062EF0 = 0LL;
  return result;
}
