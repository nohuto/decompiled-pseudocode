/*
 * XREFs of _dynamic_initializer_for__gTraceLevelsTraceInit__ @ 0x180003630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_initializer_for__gTraceLevelsTraceInit__()
{
  Trace::LevelSettingsWrapper::InitIfNecessary((Trace::LevelSettingsWrapper *)&gTraceLevelsTrace);
}
