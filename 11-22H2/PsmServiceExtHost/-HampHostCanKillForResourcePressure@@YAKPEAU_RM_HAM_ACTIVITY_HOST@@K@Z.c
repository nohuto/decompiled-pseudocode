/*
 * XREFs of ?HampHostCanKillForResourcePressure@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002D484
 * Callers:
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002D400 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyPopulateFastCommitUse@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_POLICY_WORK_BUFFER@@@Z @ 0x18008AEB4 (-RmpPolicyPopulateFastCommitUse@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_POLICY_WORK_BUFFER@@@.c)
 * Callees:
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x180007078 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     CempLockTrackerMarkReleased @ 0x18001C6B0 (CempLockTrackerMarkReleased.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800211A8 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002D540 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x1800537B4 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

__int64 __fastcall HampHostCanKillForResourcePressure(struct _RM_HAM_ACTIVITY_HOST *a1, char a2)
{
  __int64 v4; // rdx
  struct _HAM_ACTIVITY *FirstActivity; // rax
  unsigned int v6; // ebx
  char v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+40h] [rbp+18h] BYREF

  HampHostAcquireLockSharedEx(a1);
  if ( (*((_QWORD *)a1 + 83) & 0x2000000000000LL) != 0 )
  {
    FirstActivity = HampHostGetFirstActivity(a1);
    v6 = 0;
    while ( FirstActivity )
    {
      if ( (*((_DWORD *)FirstActivity + 28) & 0x200) != 0 )
        goto LABEL_8;
      FirstActivity = HampHostGetNextActivity(FirstActivity);
    }
    if ( (a2 & 1) == 0
      || (RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v8, (union _RM_OPTIMIZATION_STATE *)&v9), v8 < 0)
      && v9 >= 0 )
    {
      v6 = 1;
    }
  }
  else
  {
    v6 = 0;
  }
LABEL_8:
  CempLockTrackerMarkReleased(HampLockTrackerId, v4, 1u);
  RtlReleaseSRWLockShared(a1);
  return v6;
}
