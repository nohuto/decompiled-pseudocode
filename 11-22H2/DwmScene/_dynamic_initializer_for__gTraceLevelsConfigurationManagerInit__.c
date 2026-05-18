/*
 * XREFs of _dynamic_initializer_for__gTraceLevelsConfigurationManagerInit__ @ 0x18000AA70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_initializer_for__gTraceLevelsConfigurationManagerInit__()
{
  Trace::LevelSettingsWrapper::InitIfNecessary((Trace::LevelSettingsWrapper *)&gTraceLevelsConfigurationManager);
}
