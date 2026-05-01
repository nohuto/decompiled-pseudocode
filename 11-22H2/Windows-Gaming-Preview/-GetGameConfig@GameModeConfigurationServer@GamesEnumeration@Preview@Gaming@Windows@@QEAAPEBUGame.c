/*
 * XREFs of ?GetGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAPEBUGameConfig@ExecutionModel@@U_GUID@@@Z @ 0x18003F13C
 * Callers:
 *     ?_InitializePackageFamilyName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002CABC (-_InitializePackageFamilyName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJ.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18002D68C (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 * Callees:
 *     memcmp_0 @ 0x18004CE64 (memcmp_0.c)
 */

const struct ExecutionModel::GameConfig *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetGameConfig(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this,
        struct _GUID *a2)
{
  __int64 v2; // rdi
  __int64 *v5; // rbp
  __int64 *v6; // rbx
  __int64 *v7; // rsi
  bool v8; // sf
  char v9; // al

  v2 = 0LL;
  if ( !*(_QWORD *)&a2->Data1 && !*(_QWORD *)a2->Data4 && *((_QWORD *)this + 11) )
    return *(const struct ExecutionModel::GameConfig **)(**((_QWORD **)this + 10) + 48LL);
  v5 = (__int64 *)*((_QWORD *)this + 10);
  v6 = v5;
  v7 = (__int64 *)v5[1];
  while ( !*((_BYTE *)v7 + 25) )
  {
    if ( memcmp_0(v7 + 4, a2, 0x10uLL) >= 0 )
    {
      v6 = v7;
      v7 = (__int64 *)*v7;
    }
    else
    {
      v7 = (__int64 *)v7[2];
    }
  }
  if ( *((_BYTE *)v6 + 25) || (v8 = memcmp_0(a2, v6 + 4, 0x10uLL) < 0, v9 = 1, v8) )
    v9 = 0;
  if ( !v9 )
    v6 = v5;
  if ( v6 != v5 )
    return (const struct ExecutionModel::GameConfig *)v6[6];
  return (const struct ExecutionModel::GameConfig *)v2;
}
