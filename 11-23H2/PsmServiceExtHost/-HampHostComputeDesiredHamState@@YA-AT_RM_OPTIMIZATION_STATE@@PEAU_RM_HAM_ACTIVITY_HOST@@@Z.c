/*
 * XREFs of ?HampHostComputeDesiredHamState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800390B8
 * Callers:
 *     ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180039634 (-RmpPolicyComputeDesiredState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z @ 0x1800289D0 (-HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BB3C (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BF50 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180053574 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

__int64 __fastcall HampHostComputeDesiredHamState(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // ebp
  __int64 v4; // rdx
  int v5; // r12d
  BOOL v6; // r14d
  BOOL v7; // r15d
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  char v13; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 704);
  v3 = 1;
  if ( v1 )
  {
    HampDepGroupAcquireLockExclusive(*(struct _HAM_DEPENDENCY_GROUP **)(a1 + 704));
    v4 = *(_QWORD *)(a1 + 704);
    v5 = 1;
    v6 = *(_QWORD *)(v4 + 104) < *(_QWORD *)(a1 + 624);
    v7 = *(_DWORD *)(v4 + 92) != 0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    v5 = 0;
  }
  v8 = 0;
  RmHamHostGetCurrentState(
    (struct _RM_HAM_ACTIVITY_HOST *)a1,
    (union _RM_OPTIMIZATION_STATE *)&v12,
    (union _RM_OPTIMIZATION_STATE *)&v13);
  if ( !HampPkgSnapshotDebugState(*(struct _HAM_PACKAGE **)(*(_QWORD *)(a1 + 792) + 88LL)) )
    goto LABEL_12;
  v9 = *(_QWORD *)(a1 + 664);
  if ( (v9 & 0x10000000000000LL) != 0 )
    goto LABEL_12;
  if ( (v12 & 0x80) != 0 || v13 < 0 )
    v3 = 0;
  if ( (v9 & 0x30000) != 0 || (v9 & 0x2000000000000LL) == 0 || !v3 )
  {
LABEL_12:
    if ( v6 )
    {
      v8 = v12 & 0x188;
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 664);
      if ( (v10 & 0x10000000000LL) != 0 )
      {
        if ( v7 )
          v8 = v12;
      }
      else
      {
        if ( v1 && *(_DWORD *)(v1 + 88) )
          v8 = v12 & 0x100 | 0x80;
        else
          v8 = 384;
        if ( (v10 & 0x80000000000LL) == 0 && (v10 & 0x2000000000000LL) != 0 && !*(_BYTE *)(a1 + 592) )
          v8 |= (v8 >> 5) & 8;
      }
    }
  }
  if ( v5 )
    HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v1);
  return v8;
}
