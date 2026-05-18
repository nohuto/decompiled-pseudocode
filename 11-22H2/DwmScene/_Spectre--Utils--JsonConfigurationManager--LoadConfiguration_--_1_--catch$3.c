/*
 * XREFs of _Spectre::Utils::JsonConfigurationManager::LoadConfiguration_::_1_::catch$3 @ 0x1800F1F3C
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 */

void __noreturn Spectre::Utils::JsonConfigurationManager::LoadConfiguration_::_1_::catch_3()
{
  Trace::LevelSettingsWrapper::Output(
    &gTraceLevelsConfigurationManager,
    3,
    "Failed to deserialise the JSON configuration. Check the configuration format.");
  throw;
}
