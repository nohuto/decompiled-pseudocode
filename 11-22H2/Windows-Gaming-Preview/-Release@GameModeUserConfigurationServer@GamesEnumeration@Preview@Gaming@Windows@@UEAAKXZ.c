/*
 * XREFs of ?Release@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x180034B60
 * Callers:
 *     ?Release@?$SimpleKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@W7EAAKXZ @ 0x18003CEE0 (-Release@-$SimpleKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultLifetimeTraits@PEAUHSTR.c)
 *     ?Release@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ @ 0x18003D200 (-Release@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::Release(
        Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::Release(this);
}
