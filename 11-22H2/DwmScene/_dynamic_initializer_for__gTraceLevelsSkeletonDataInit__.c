/*
 * XREFs of _dynamic_initializer_for__gTraceLevelsSkeletonDataInit__ @ 0x18000ADE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_initializer_for__gTraceLevelsSkeletonDataInit__()
{
  Trace::LevelSettingsWrapper::InitIfNecessary((Trace::LevelSettingsWrapper *)&gTraceLevelsSkeletonData);
}
