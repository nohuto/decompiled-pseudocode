/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__GameModeSystemDefaults__ @ 0x18004D7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__GameModeSystemDefaults__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_180062EF8);
  qword_180062EF8 = 0LL;
  return result;
}
