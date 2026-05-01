/*
 * XREFs of ?put_PercentGpuMemoryAllocatedToSystemCompositor@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAU?$IReference@H@Foundation@5@@Z @ 0x18003F730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::put_PercentGpuMemoryAllocatedToSystemCompositor(
        __int64 a1,
        __int64 a2)
{
  return Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_ValidateAndSetNumericValue(
           a1,
           a2,
           0x64u,
           (__int64 *)(a1 + 128));
}
