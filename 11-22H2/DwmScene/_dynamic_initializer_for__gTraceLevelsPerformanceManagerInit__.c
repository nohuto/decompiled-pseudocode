/*
 * XREFs of _dynamic_initializer_for__gTraceLevelsPerformanceManagerInit__ @ 0x180009880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_initializer_for__gTraceLevelsPerformanceManagerInit__()
{
  Trace::LevelSettingsWrapper::InitIfNecessary((Trace::LevelSettingsWrapper *)&gTraceLevelsPerformanceManager);
}
