/*
 * XREFs of RmGameModeSrvUnregisterProcess @ 0x180085CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RmGameModeSrvUnregisterProcess(struct _RM_SERVICE_GLOBALS *a1, void *a2)
{
  return RmSrvGameModeUnregisterProcess(a1, a2);
}
