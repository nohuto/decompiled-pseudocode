/*
 * XREFs of ?put_IsEnabled@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJE@Z @ 0x18003F4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::put_IsEnabled(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this,
        char a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  *((_BYTE *)this + 96) = a2 != 0;
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
