/*
 * XREFs of ?IsStartSearchAvailable@TaskbarSearchAppPositionerConfig@@UEAA_NXZ @ 0x180035C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
bool __fastcall TaskbarSearchAppPositionerConfig::IsStartSearchAvailable(TaskbarSearchAppPositionerConfig *this)
{
  return StartSearchSharedUtils::IsSearchBoxExtensionAvailable(this);
}
