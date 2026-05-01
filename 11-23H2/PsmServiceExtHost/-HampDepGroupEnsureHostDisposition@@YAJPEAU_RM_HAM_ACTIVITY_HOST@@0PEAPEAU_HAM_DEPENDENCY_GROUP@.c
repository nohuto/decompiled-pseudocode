/*
 * XREFs of ?HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003CD58
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003C984 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 * Callees:
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003AFCC (-HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPE.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B534 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BCA4 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostGetDepGroupDisposition@@YA?AW4_HAM_HOST_DEPENDENCY_GROUP_DISPOSITION@@PEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x18003CE74 (-HampHostGetDepGroupDisposition@@YA-AW4_HAM_HOST_DEPENDENCY_GROUP_DISPOSITION@@PEAU_RM_HAM_ACTIV.c)
 *     ?HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x18003D000 (-HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007D124 (-HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007D21C (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

__int64 __fastcall HampDepGroupEnsureHostDisposition(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_DEPENDENCY_GROUP **a3)
{
  int DepGroupDisposition; // eax
  struct _RM_HAM_ACTIVITY_HOST *v7; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v8; // rcx
  volatile signed __int64 *v9; // rsi
  int v10; // r14d
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v15; // eax
  PVOID P[5]; // [rsp+20h] [rbp-28h] BYREF

  P[0] = 0LL;
  HampHostAcquireTwoLocksExclusive(a1, a2);
  do
  {
    DepGroupDisposition = HampHostGetDepGroupDisposition(a1, a2);
    if ( !DepGroupDisposition )
    {
      v9 = (volatile signed __int64 *)*((_QWORD *)a1 + 88);
      if ( _InterlockedIncrement64(v9 + 12) <= 1 )
        __fastfail(0xEu);
      HampHostReleaseLockExclusiveEx(a1);
      HampHostReleaseLockExclusiveEx(a2);
      v10 = 0;
      HampDepGroupWaitEnterStateChange((struct _HAM_DEPENDENCY_GROUP *)v9);
      v11 = 0;
      goto LABEL_9;
    }
    v12 = DepGroupDisposition - 1;
    if ( v12 )
    {
      v15 = v12 - 1;
      if ( v15 )
      {
        if ( v15 != 1 )
        {
          v9 = (volatile signed __int64 *)P[0];
          v11 = -1073741823;
          goto LABEL_14;
        }
        v13 = HampDepGroupTryMerge(v8, v7, (struct _HAM_DEPENDENCY_GROUP **)P);
      }
      else
      {
        v13 = HampDepGroupTryAddToExisting(v8, v7, (struct _HAM_DEPENDENCY_GROUP **)P);
      }
    }
    else
    {
      v13 = HampDepGroupCreate(
              (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99)
                                                                                                + 88LL)
                                                                                    + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                                       + 120)
                                                           + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                              - 392),
              a1,
              a2,
              (struct _HAM_DEPENDENCY_GROUP **)P);
    }
    v11 = v13;
    v10 = 1;
  }
  while ( v13 == -1073741267 );
  v9 = (volatile signed __int64 *)P[0];
  if ( v13 < 0 )
    goto LABEL_10;
LABEL_9:
  *a3 = (struct _HAM_DEPENDENCY_GROUP *)v9;
  v9 = 0LL;
LABEL_10:
  if ( !v10 )
    goto LABEL_11;
LABEL_14:
  HampHostReleaseLockExclusiveEx(a1);
  HampHostReleaseLockExclusiveEx(a2);
LABEL_11:
  if ( v9 )
    HampDepGroupDereference(v9);
  return v11;
}
