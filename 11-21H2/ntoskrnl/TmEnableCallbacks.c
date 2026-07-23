/*
 * XREFs of TmEnableCallbacks @ 0x1403DFF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmEnableCallbacks(
        PKRESOURCEMANAGER ResourceManager,
        PTM_RM_NOTIFICATION CallbackRoutine,
        PVOID RMKey)
{
  return TmEnableCallbacks_0(ResourceManager, CallbackRoutine, RMKey);
}
