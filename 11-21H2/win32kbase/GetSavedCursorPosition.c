/*
 * XREFs of GetSavedCursorPosition @ 0x1C01E7C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GetSavedCursorPosition()
{
  return *(&InputDelegation::CInputDelegationInfo::gInstance + 1);
}
