/*
 * XREFs of ?RmHamHostIsMemoryRequired@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180081E18
 * Callers:
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002E370 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x18001C6B0 (CempLockTrackerMarkReleased.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800211A8 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180053574 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

_BOOL8 __fastcall RmHamHostIsMemoryRequired(unsigned __int64 a1)
{
  struct _RM_HAM_ACTIVITY_HOST *v1; // rdi
  __int64 v3; // rdx
  BOOL v4; // ebx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64);
  HampHostAcquireLockSharedEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64));
  v4 = 1;
  if ( (*((_QWORD *)v1 + 83) & 0x80000000000LL) == 0 )
  {
    RmHamHostGetCurrentState(v1, (union _RM_OPTIMIZATION_STATE *)&v6, 0LL);
    if ( v6 < 0 || *(_DWORD *)((a1 & -(__int64)(v1 != 0LL)) + 0x270) != 2 )
      v4 = 0;
  }
  CempLockTrackerMarkReleased(HampLockTrackerId, v3, 1u);
  RtlReleaseSRWLockShared(v1);
  return v4;
}
