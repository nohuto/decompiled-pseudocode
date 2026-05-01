/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__GameConfigIds__ @ 0x18004E550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__GameConfigIds__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_180064ED8);
  qword_180064ED8 = 0LL;
  return result;
}
