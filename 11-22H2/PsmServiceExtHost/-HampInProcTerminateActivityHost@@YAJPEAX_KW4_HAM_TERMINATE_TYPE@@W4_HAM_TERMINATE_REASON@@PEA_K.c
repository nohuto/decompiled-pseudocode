/*
 * XREFs of ?HampInProcTerminateActivityHost@@YAJPEAX_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x18004AFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HampInProcTerminateActivityHost(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 *a5,
        int a6,
        int a7)
{
  return HamSrvTerminateActivityHost(a1, a2, a3, a4, a5, a6, a7);
}
