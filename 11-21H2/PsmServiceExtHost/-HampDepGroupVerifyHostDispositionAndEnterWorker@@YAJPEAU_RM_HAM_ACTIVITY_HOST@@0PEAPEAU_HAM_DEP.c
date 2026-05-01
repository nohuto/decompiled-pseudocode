/*
 * XREFs of ?HampDepGroupVerifyHostDispositionAndEnterWorker@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180076BB4
 * Callers:
 *     ?HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z @ 0x180075D8C (-HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z.c)
 * Callees:
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180074C90 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007616C (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180076CA8 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostGetDepGroupDisposition@@YA?AW4_HAM_HOST_DEPENDENCY_GROUP_DISPOSITION@@PEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180076D64 (-HampHostGetDepGroupDisposition@@YA-AW4_HAM_HOST_DEPENDENCY_GROUP_DISPOSITION@@PEAU_RM_HAM_ACTIV.c)
 *     ?HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x1800794DC (-HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 */

__int64 __fastcall HampDepGroupVerifyHostDispositionAndEnterWorker(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_DEPENDENCY_GROUP **a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rbx

  HampHostAcquireTwoLocksExclusive(a1, a2);
  v6 = 0;
  if ( (unsigned int)HampHostGetDepGroupDisposition(a1, a2) )
  {
    v6 = -1073740007;
  }
  else
  {
    while ( 1 )
    {
      v7 = *((_QWORD *)a1 + 88);
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 96)) <= 1 )
        __fastfail(0xEu);
      HampHostReleaseLockExclusiveEx(a1);
      HampHostReleaseLockExclusiveEx(a2);
      HampDepGroupWaitEnterStateChange((struct _HAM_DEPENDENCY_GROUP *)v7);
      HampHostAcquireTwoLocksExclusive(a1, a2);
      if ( *((_QWORD *)a1 + 88) == v7 )
        break;
      HampHostReleaseLockExclusiveEx(a1);
      HampHostReleaseLockExclusiveEx(a2);
      HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v7);
      HampDepGroupDereference((struct _HAM_DEPENDENCY_GROUP *)v7);
      HampHostAcquireTwoLocksExclusive(a1, a2);
    }
    *a3 = (struct _HAM_DEPENDENCY_GROUP *)v7;
  }
  HampHostReleaseLockExclusiveEx(a1);
  HampHostReleaseLockExclusiveEx(a2);
  return v6;
}
