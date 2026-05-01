/*
 * XREFs of ?HampInProcCloseActivity@@YAJPEAX_K@Z @ 0x18004AEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HampInProcCloseActivity(struct _HAM_CLIENT_CONTEXT *a1, unsigned __int64 a2)
{
  return HamSrvCloseActivity(a1, a2);
}
