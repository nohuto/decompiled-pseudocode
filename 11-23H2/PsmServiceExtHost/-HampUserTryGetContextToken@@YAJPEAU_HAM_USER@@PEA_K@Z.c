/*
 * XREFs of ?HampUserTryGetContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x180011354
 * Callers:
 *     ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001FAE0 (-HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x1800422E0 (-HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z.c)
 *     ?HampUserReleaseLockShared@@YAXPEAU_HAM_USER@@@Z @ 0x180043370 (-HampUserReleaseLockShared@@YAXPEAU_HAM_USER@@@Z.c)
 */

__int64 __fastcall HampUserTryGetContextToken(struct _HAM_USER *a1, unsigned __int64 *a2)
{
  DWORD v2; // esi
  _QWORD *Value; // rbx
  DWORD v6; // ecx
  __int64 *v7; // rax
  __int64 v8; // rdx
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
    v6 = HampLockTrackerId;
    *a2 = *((_QWORD *)a1 + 23);
    if ( v6 != -1 )
    {
      v7 = (__int64 *)TlsGetValue(v6);
      v8 = *v7;
      if ( (*v7 & 0x80u) == 0LL )
        __int2c();
      if ( v7[8]-- == 1 )
        *v7 = v8 & 0xFFFFFFFFFFFFFF7FuLL;
    }
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
