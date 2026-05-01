/*
 * XREFs of ?HampHostCheckQueueDependencyWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006EDBC
 * Callers:
 *     ?HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18007B038 (-HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 * Callees:
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BB3C (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BF50 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003DB38 (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

void __fastcall HampHostCheckQueueDependencyWorker(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  struct _HAM_DEPENDENCY_GROUP *v1; // rbx

  v1 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)a1 + 88);
  if ( v1 )
  {
    HampDepGroupAcquireLockExclusive(*((struct _HAM_DEPENDENCY_GROUP **)a1 + 88));
    HampDepGroupQueueWorker(v1);
    HampDepGroupReleaseLockExclusive(v1);
  }
}
