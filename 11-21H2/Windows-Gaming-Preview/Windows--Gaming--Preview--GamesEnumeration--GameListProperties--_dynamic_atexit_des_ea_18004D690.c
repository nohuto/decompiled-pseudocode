/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__PackageFamilyName__ @ 0x18004D690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__PackageFamilyName__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_180062EC0);
  qword_180062EC0 = 0LL;
  return result;
}
