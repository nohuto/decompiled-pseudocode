/*
 * XREFs of ?HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18003B400
 * Callers:
 *     ?HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x18003B1E8 (-HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PE.c)
 * Callees:
 *     ?HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x180006F8C (-HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionM.c)
 *     CempLockTrackerMarkReleased @ 0x18001C6B0 (CempLockTrackerMarkReleased.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800211A8 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x18003C560 (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x18003C590 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 */

__int64 __fastcall HampHostCanDonate(struct _RM_HAM_ACTIVITY_HOST *a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  RmpActivityHostQueryCommit(
    (struct _RM_ACTIVITY_HOST *)(((unsigned __int64)a1 - 64) & -(__int64)(a1 != 0LL)),
    0LL,
    &v7,
    0LL);
  if ( (int)RmpCommitValuesAdd(v7, a2, &v8) < 0 )
  {
    return (unsigned int)-1058275323;
  }
  else
  {
    HampHostAcquireLockSharedEx(a1);
    if ( v8 > *((_QWORD *)a1 + 114) )
      v5 = -1058275323;
    else
      v5 = (unsigned int)HampHostHasExternalResourceAccess((__int64)a1, 0x1Cu) == 0 ? 0xC0EC0005 : 0;
    CempLockTrackerMarkReleased(HampLockTrackerId, v4, 1u);
    RtlReleaseSRWLockShared(a1);
  }
  return v5;
}
