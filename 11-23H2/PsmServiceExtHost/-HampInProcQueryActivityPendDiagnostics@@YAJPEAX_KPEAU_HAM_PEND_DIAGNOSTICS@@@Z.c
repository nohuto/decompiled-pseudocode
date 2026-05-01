/*
 * XREFs of ?HampInProcQueryActivityPendDiagnostics@@YAJPEAX_KPEAU_HAM_PEND_DIAGNOSTICS@@@Z @ 0x18004AEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HampInProcQueryActivityPendDiagnostics(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        struct _HAM_PEND_DIAGNOSTICS *a3)
{
  return HamSrvQueryActivityPendDiagnostics(a1, a2, a3);
}
