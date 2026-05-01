/*
 * XREFs of ?HampInProcStartActivityAsync@@YAJPEAX_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18004AF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HampInProcStartActivityAsync(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  return HamSrvStartActivityAsync(a1, a2, a3, a4);
}
