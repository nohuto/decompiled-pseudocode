/*
 * XREFs of ?RmpObjectTableCleanup@@YAXPEAU_RM_OBJECT_TABLE@@@Z @ 0x18008CBCC
 * Callers:
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180083618 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpActivityHostCleanupModule@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180086B14 (-RmpActivityHostCleanupModule@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpObjectTableCleanup(struct _RM_OBJECT_TABLE *a1)
{
  char *v1; // rbx
  void *v3; // rdi

  v1 = (char *)a1 + 16;
  RtlAcquireSRWLockExclusive((char *)a1 + 16);
  v3 = (void *)*((_QWORD *)a1 + 1);
  RtlReleaseSRWLockExclusive(v1);
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
}
