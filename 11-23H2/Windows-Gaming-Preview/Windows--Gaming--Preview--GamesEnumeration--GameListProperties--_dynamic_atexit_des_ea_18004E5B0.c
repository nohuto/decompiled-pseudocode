/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__PackageFamilyName__ @ 0x18004E5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__PackageFamilyName__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_180064EE8);
  qword_180064EE8 = 0LL;
  return result;
}
