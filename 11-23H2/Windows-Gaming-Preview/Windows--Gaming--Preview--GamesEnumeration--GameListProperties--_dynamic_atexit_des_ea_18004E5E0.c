/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__AumId__ @ 0x18004E5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__AumId__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_180064EF0);
  qword_180064EF0 = 0LL;
  return result;
}
