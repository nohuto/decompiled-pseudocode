/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__AumId__ @ 0x18004D6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__AumId__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_180062EC8);
  qword_180062EC8 = 0LL;
  return result;
}
