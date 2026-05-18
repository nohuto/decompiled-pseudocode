/*
 * XREFs of _dynamic_initializer_for__gTraceLevelsLoaderBaseInit__ @ 0x18000A870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_initializer_for__gTraceLevelsLoaderBaseInit__()
{
  Trace::LevelSettingsWrapper::InitIfNecessary((Trace::LevelSettingsWrapper *)&gTraceLevelsLoaderBase);
}
