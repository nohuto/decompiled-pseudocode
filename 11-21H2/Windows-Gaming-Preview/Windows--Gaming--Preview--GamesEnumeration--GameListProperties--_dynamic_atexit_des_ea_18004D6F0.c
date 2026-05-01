/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__MFURank__ @ 0x18004D6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__MFURank__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_180062ED0);
  qword_180062ED0 = 0LL;
  return result;
}
