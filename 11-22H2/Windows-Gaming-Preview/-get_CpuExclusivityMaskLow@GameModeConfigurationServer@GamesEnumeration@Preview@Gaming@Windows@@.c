/*
 * XREFs of ?get_CpuExclusivityMaskLow@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IReference@H@Foundation@5@@Z @ 0x180040620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::get_CpuExclusivityMaskLow(
        __int64 a1,
        _QWORD *a2)
{
  return Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_GetNullableNumericValue(
           a1,
           (_QWORD *)(a1 + 144),
           a2);
}
