/*
 * XREFs of _dynamic_initializer_for__gTraceLevelsSmartThrowInit__ @ 0x180003610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_initializer_for__gTraceLevelsSmartThrowInit__()
{
  Trace::LevelSettingsWrapper::InitIfNecessary((Trace::LevelSettingsWrapper *)&gTraceLevelsSmartThrow);
}
