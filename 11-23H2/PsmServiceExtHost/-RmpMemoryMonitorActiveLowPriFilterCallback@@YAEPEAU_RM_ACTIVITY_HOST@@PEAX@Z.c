/*
 * XREFs of ?RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18008C5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002D3D0 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18002D438 (-RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 */

bool __fastcall RmpMemoryMonitorActiveLowPriFilterCallback(struct _RM_ACTIVITY_HOST *a1, void *a2)
{
  struct _RM_ACTIVITY_HOST *v2; // rcx

  return (unsigned int)RmpActivityHostIsRunnable(a1, 1) && RmpActivityHostIsRevocable(v2);
}
