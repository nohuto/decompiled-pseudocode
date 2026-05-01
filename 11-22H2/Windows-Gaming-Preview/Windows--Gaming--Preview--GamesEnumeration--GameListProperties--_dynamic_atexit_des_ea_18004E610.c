/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__MFURank__ @ 0x18004E610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__MFURank__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_180064EF8);
  qword_180064EF8 = 0LL;
  return result;
}
