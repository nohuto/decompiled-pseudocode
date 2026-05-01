/*
 * XREFs of ?HampHostComputeDesiredHamState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180079C0C
 * Callers:
 *     ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003A554 (-RmpPolicyComputeDesiredState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z @ 0x180009AA0 (-HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180050350 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180073A18 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180075D58 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

__int64 __fastcall HampHostComputeDesiredHamState(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v4; // ebp
  __int64 v5; // rdx
  int v6; // r12d
  BOOL v7; // r14d
  BOOL v8; // r15d
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF
  char v14; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 704);
  v4 = 1;
  if ( v2 )
  {
    HampDepGroupAcquireLockExclusive(*(struct _HAM_DEPENDENCY_GROUP **)(a1 + 704), a2);
    v5 = *(_QWORD *)(a1 + 704);
    v6 = 1;
    v7 = *(_QWORD *)(v5 + 104) < *(_QWORD *)(a1 + 624);
    v8 = *(_DWORD *)(v5 + 92) != 0;
  }
  else
  {
    v7 = 0;
    v8 = 0;
    v6 = 0;
  }
  v9 = 0;
  if ( (*(_BYTE *)(a1 + 788) & 1) != 0 )
  {
    RmHamHostGetCurrentState(
      (struct _RM_HAM_ACTIVITY_HOST *)a1,
      (union _RM_OPTIMIZATION_STATE *)&v13,
      (union _RM_OPTIMIZATION_STATE *)&v14);
    if ( !HampPkgSnapshotDebugState(*(struct _HAM_PACKAGE **)(*(_QWORD *)(a1 + 792) + 88LL)) )
      goto LABEL_14;
    v10 = *(_QWORD *)(a1 + 664);
    if ( (v10 & 0x10000000000000LL) != 0 )
      goto LABEL_14;
    if ( (v13 & 0x80) != 0 || v14 < 0 )
      v4 = 0;
    if ( (v10 & 0x30000) != 0 || (v10 & 0x2000000000000LL) == 0 || !v4 )
    {
LABEL_14:
      if ( v7 )
      {
        v9 = v13 & 0x188;
      }
      else
      {
        v11 = *(_QWORD *)(a1 + 664);
        if ( (v11 & 0x10000000000LL) != 0 )
        {
          if ( v8 )
            v9 = v13;
        }
        else
        {
          if ( v2 && *(_DWORD *)(v2 + 88) )
            v9 = v13 & 0x100 | 0x80;
          else
            v9 = 384;
          if ( (v11 & 0x2080000000000LL) == 0x2000000000000LL && !*(_BYTE *)(a1 + 592) )
            v9 |= (v9 >> 5) & 8;
        }
      }
    }
  }
  else
  {
    v13 = 0;
  }
  if ( v6 )
    HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v2);
  return v9;
}
