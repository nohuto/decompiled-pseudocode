/*
 * XREFs of ?HampHostCanKillForResourcePressure@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800516EA
 * Callers:
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180018660 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180018FC0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?RmpPolicyGetFastCommitFromMetrics@@YA_KPEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18008D824 (-RmpPolicyGetFastCommitFromMetrics@@YA_KPEAU_RM_ACTIVITY_HOST_METRICS@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002AAC0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18002D444 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003E214 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180050350 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

__int64 __fastcall HampHostCanKillForResourcePressure(struct _RM_HAM_ACTIVITY_HOST *a1, char a2)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  struct _HAM_ACTIVITY *FirstActivity; // rax
  char v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+40h] [rbp+18h] BYREF

  HampHostAcquireLockSharedEx(a1, 0LL);
  if ( (*((_QWORD *)a1 + 83) & 0x2000000000000LL) != 0 )
  {
    FirstActivity = HampHostGetFirstActivity(a1);
    v5 = 0;
    while ( FirstActivity )
    {
      if ( (*((_DWORD *)FirstActivity + 28) & 0x200) != 0 )
        goto LABEL_11;
      FirstActivity = HampHostGetNextActivity(FirstActivity);
    }
    if ( (a2 & 1) == 0
      || (RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v8, (union _RM_OPTIMIZATION_STATE *)&v9), v8 < 0)
      && v9 >= 0 )
    {
      v5 = 1;
    }
  }
  else
  {
    v5 = 0;
  }
LABEL_11:
  CempLockTrackerMarkReleased(HampLockTrackerId, v4, 1u);
  RtlReleaseSRWLockShared(a1);
  return v5;
}
