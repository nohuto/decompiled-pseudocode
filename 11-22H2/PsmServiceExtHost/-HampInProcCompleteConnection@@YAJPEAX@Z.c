/*
 * XREFs of ?HampInProcCompleteConnection@@YAJPEAX@Z @ 0x18004AEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HampInProcCompleteConnection(struct _HAM_CLIENT_CONTEXT *a1)
{
  return HamSrvCompleteConnect(a1);
}
