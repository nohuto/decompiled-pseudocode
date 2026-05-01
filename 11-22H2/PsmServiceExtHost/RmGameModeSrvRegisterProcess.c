/*
 * XREFs of RmGameModeSrvRegisterProcess @ 0x180085CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RmGameModeSrvRegisterProcess(
        struct _RM_SERVICE_GLOBALS *a1,
        void *a2,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a3,
        int a4)
{
  return RmSrvGameModeRegisterProcess(a1, a2, a3, a4);
}
