/*
 * XREFs of ?HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003B4BC
 * Callers:
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x180026E30 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     ?HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006F574 (-HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B534 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B5E4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BCA4 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

struct _HAM_DEPENDENCY_GROUP *__fastcall HampHostCheckWaitEnterDependencyStateChange(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 i; // rbx

  for ( i = *((_QWORD *)a1 + 88); i; i = *((_QWORD *)a1 + 88) )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(i + 96)) <= 1 )
      __fastfail(0xEu);
    HampHostReleaseLockExclusiveEx(a1);
    HampDepGroupWaitEnterStateChange((struct _HAM_DEPENDENCY_GROUP *)i);
    HampDepGroupDereference((PVOID)i);
    HampHostAcquireLockExclusiveEx(a1, 0);
    if ( *((_QWORD *)a1 + 88) == i )
      break;
    HampHostReleaseLockExclusiveEx(a1);
    HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)i);
    HampHostAcquireLockExclusiveEx(a1, 0);
  }
  return (struct _HAM_DEPENDENCY_GROUP *)i;
}
