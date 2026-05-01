/*
 * XREFs of ?HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180079540
 * Callers:
 *     ?HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180073DF0 (-HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PE.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x18002A1F0 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x18002A9D4 (-HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionM.c)
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x18002AB3C (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003E214 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

__int64 __fastcall HampHostCanDonate(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  RmpActivityHostQueryCommit((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64), 0LL, &v7, 0LL);
  if ( (int)RmpCommitValuesAdd(v7, a2, &v8) >= 0 )
  {
    HampHostAcquireLockSharedEx(a1, 0LL);
    if ( v8 <= *((_QWORD *)a1 + 114) )
      v4 = (unsigned int)HampHostHasExternalResourceAccess((__int64)a1, 0x1Cu) == 0 ? 0xC0EC0005 : 0;
    else
      v4 = -1058275323;
    CempLockTrackerMarkReleased(HampLockTrackerId, v5, 1u);
    RtlReleaseSRWLockShared(a1);
  }
  else
  {
    return (unsigned int)-1058275323;
  }
  return v4;
}
