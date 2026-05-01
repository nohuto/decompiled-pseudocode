/*
 * XREFs of ?HampRmContextStartActivityAsync@@YAJPEAX_K@Z @ 0x18004EBE0
 * Callers:
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180025260 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HampRmContextStartActivityAsync(struct HAM_ACTIVITY_RM_CONTEXT *a1, __int64 a2)
{
  return HampRmContextAcquireResourceSet(a1, a2);
}
