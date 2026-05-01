/*
 * XREFs of ?HampActIsBoundToGeneration@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x180026CC0
 * Callers:
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180025260 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampActIsBoundToGeneration(struct _HAM_ACTIVITY *a1)
{
  return *((_QWORD *)a1 + 64) != 0LL;
}
