/*
 * XREFs of _dynamic_initializer_for__gTraceLevelsThreadPoolInit__ @ 0x18000AA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_initializer_for__gTraceLevelsThreadPoolInit__()
{
  Trace::LevelSettingsWrapper::InitIfNecessary((Trace::LevelSettingsWrapper *)&gTraceLevelsThreadPool);
}
