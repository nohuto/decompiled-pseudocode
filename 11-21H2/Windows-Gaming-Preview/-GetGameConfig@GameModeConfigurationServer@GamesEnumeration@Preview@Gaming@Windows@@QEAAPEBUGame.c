/*
 * XREFs of ?GetGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAPEBUGameConfig@ExecutionModel@@U_GUID@@@Z @ 0x18003E36C
 * Callers:
 *     ?_InitializePackageFamilyName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002C17C (-_InitializePackageFamilyName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJ.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18002CD3C (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 * Callees:
 *     memcmp_0 @ 0x18004BF77 (memcmp_0.c)
 */

const struct ExecutionModel::GameConfig *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetGameConfig(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this,
        struct _GUID *a2)
{
  __int64 v2; // rdi
  __int64 *v6; // rbx
  __int64 *v7; // r15
  __int64 *v8; // rsi
  bool v9; // sf
  char v10; // al

  v2 = 0LL;
  if ( *(_OWORD *)a2 == 0LL && *((_QWORD *)this + 11) )
    return *(const struct ExecutionModel::GameConfig **)(**((_QWORD **)this + 10) + 48LL);
  v6 = (__int64 *)*((_QWORD *)this + 10);
  v7 = v6;
  v8 = (__int64 *)v6[1];
  if ( !*((_BYTE *)v8 + 25) )
  {
    do
    {
      if ( memcmp_0(v8 + 4, a2, 0x10uLL) >= 0 )
      {
        v6 = v8;
        v8 = (__int64 *)*v8;
      }
      else
      {
        v8 = (__int64 *)v8[2];
      }
    }
    while ( !*((_BYTE *)v8 + 25) );
    v7 = (__int64 *)*((_QWORD *)this + 10);
  }
  if ( *((_BYTE *)v6 + 25) || (v9 = memcmp_0(a2, v6 + 4, 0x10uLL) < 0, v10 = 1, v9) )
    v10 = 0;
  if ( !v10 )
    v6 = v7;
  if ( v6 != v7 )
    return (const struct ExecutionModel::GameConfig *)v6[6];
  return (const struct ExecutionModel::GameConfig *)v2;
}
