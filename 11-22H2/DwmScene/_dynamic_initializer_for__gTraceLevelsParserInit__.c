/*
 * XREFs of _dynamic_initializer_for__gTraceLevelsParserInit__ @ 0x18000AAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_initializer_for__gTraceLevelsParserInit__()
{
  Trace::LevelSettingsWrapper::InitIfNecessary((Trace::LevelSettingsWrapper *)&gTraceLevelsParser);
}
