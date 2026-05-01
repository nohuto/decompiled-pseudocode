/*
 * XREFs of ?IsStartSearchAvailable@SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA_NXZ @ 0x18005F3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
bool __fastcall SearchBoxOnTaskbarSearchAppPositionerConfig::IsStartSearchAvailable(
        SearchBoxOnTaskbarSearchAppPositionerConfig *this)
{
  return StartSearchSharedUtils::IsSearchBoxExtensionAvailable(this);
}
