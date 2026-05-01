/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__KglGameModeDefaults__ @ 0x18004E730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__KglGameModeDefaults__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_180064F28);
  qword_180064F28 = 0LL;
  return result;
}
