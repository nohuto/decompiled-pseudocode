/*
 * XREFs of ?HampHostDynamicDepAllocateState@@YAJPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z @ 0x18007BF58
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180073A60 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003E214 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

__int64 __fastcall HampHostDynamicDepAllocateState(struct _HAM_HOST_DYNAMIC_DEPENDENCY *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v4; // rcx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // rdx

  v1 = *((_QWORD *)a1 + 6);
  v3 = *((_QWORD *)a1 + 7);
  v4 = (struct _RM_HAM_ACTIVITY_HOST *)v1;
  v5 = *(_QWORD *)(v1 - 32);
  v6 = *(_QWORD *)(v3 - 32);
  if ( v5 >= v6 )
    v4 = (struct _RM_HAM_ACTIVITY_HOST *)v3;
  HampHostAcquireLockSharedEx(v4, 1LL);
  v7 = (struct _RM_HAM_ACTIVITY_HOST *)v3;
  if ( v5 >= v6 )
    v7 = (struct _RM_HAM_ACTIVITY_HOST *)v1;
  HampHostAcquireLockSharedEx(v7, 1LL);
  if ( (*(_QWORD *)(v1 + 664) & 0x2000000000000LL) != 0 && (*(_QWORD *)(v3 + 664) & 0x2000000000000LL) != 0 )
  {
    v9 = 0;
    *((_QWORD *)a1 + 8) = *(_QWORD *)(v1 + 816);
    *((_QWORD *)a1 + 9) = *(_QWORD *)(v3 + 816);
  }
  else
  {
    v9 = -1073741394;
  }
  CempLockTrackerMarkReleased(HampLockTrackerId, v8, 1u);
  RtlReleaseSRWLockShared(v1);
  CempLockTrackerMarkReleased(HampLockTrackerId, v10, 1u);
  RtlReleaseSRWLockShared(v3);
  return v9;
}
