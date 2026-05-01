/*
 * XREFs of ?IsBackedByGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA_NXZ @ 0x18002FAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::IsBackedByGameConfig(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 31) )
    return *((_QWORD *)this + 32) != 0LL;
  return result;
}
