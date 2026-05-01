/*
 * XREFs of ?RmpActivityHostCleanupModule@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180086B14
 * Callers:
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180083618 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpObjectTableCleanup@@YAXPEAU_RM_OBJECT_TABLE@@@Z @ 0x18008CBCC (-RmpObjectTableCleanup@@YAXPEAU_RM_OBJECT_TABLE@@@Z.c)
 */

void __fastcall RmpActivityHostCleanupModule(struct _RM_SERVICE_GLOBALS *a1)
{
  void *v2; // r8
  void *v3; // r8

  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 16));
  if ( *((_QWORD *)a1 + 384) )
    TpReleasePool();
  v2 = (void *)*((_QWORD *)a1 + 381);
  if ( v2 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  v3 = (void *)*((_QWORD *)a1 + 383);
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
}
