/*
 * XREFs of _dynamic_initializer_for__gTraceLevelsShaderManagerInit__ @ 0x1800097C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_initializer_for__gTraceLevelsShaderManagerInit__()
{
  Trace::LevelSettingsWrapper::InitIfNecessary((Trace::LevelSettingsWrapper *)&gTraceLevelsShaderManager);
}
