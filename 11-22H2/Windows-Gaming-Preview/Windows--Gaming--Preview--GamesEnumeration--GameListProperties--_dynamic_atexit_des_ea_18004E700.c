/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__GameModeSystemDefaults__ @ 0x18004E700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__GameModeSystemDefaults__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_180064F20);
  qword_180064F20 = 0LL;
  return result;
}
