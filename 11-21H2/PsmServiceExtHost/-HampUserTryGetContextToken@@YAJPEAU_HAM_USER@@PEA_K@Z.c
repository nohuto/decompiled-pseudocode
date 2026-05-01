/*
 * XREFs of ?HampUserTryGetContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x18003C404
 * Callers:
 *     ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180013510 (-HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x180045F38 (-HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z.c)
 *     ?HampUserReleaseLockShared@@YAXPEAU_HAM_USER@@@Z @ 0x180047410 (-HampUserReleaseLockShared@@YAXPEAU_HAM_USER@@@Z.c)
 */

__int64 __fastcall HampUserTryGetContextToken(struct _HAM_USER *a1, unsigned __int64 *a2)
{
  DWORD v2; // esi
  _QWORD *Value; // rbx
  __int64 v6; // rdx
  DWORD v7; // ecx
  int refreshed; // eax

  v2 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFF80uLL) != 0 )
      __int2c();
    *Value |= 0x80uLL;
    ++Value[8];
  }
  RtlAcquireSRWLockShared((char *)a1 + 168);
  if ( (*((_BYTE *)a1 + 192) & 2) != 0 )
  {
    v7 = HampLockTrackerId;
    *a2 = *((_QWORD *)a1 + 23);
    CempLockTrackerMarkReleased(v7, v6, 7u);
    RtlReleaseSRWLockShared((char *)a1 + 168);
    return 0;
  }
  else
  {
    HampUserReleaseLockShared(a1);
    refreshed = HampUserTryRefreshContextToken(a1, a2);
    if ( refreshed >= 0 )
      return 0;
    return (unsigned int)refreshed;
  }
}
