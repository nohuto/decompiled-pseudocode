/*
 * XREFs of ?HampInProcIsHostBeingDebugged@@YAJPEAXPEBGPEAEKKK_K2@Z @ 0x18004AEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall HampInProcIsHostBeingDebugged(
        struct _HAM_CLIENT_CONTEXT *a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7,
        unsigned __int8 *a8)
{
  return HamSrvIsHostBeingDebugged(a1, a2, a3, a4, a5, a6, a7, a8);
}
