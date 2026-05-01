/*
 * XREFs of ?HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z @ 0x1800289D0
 * Callers:
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180023E30 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     PsmHamGetPackageDebugMode @ 0x180028240 (PsmHamGetPackageDebugMode.c)
 *     ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x180035300 (-HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     ?HampHostComputeDesiredHamState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180039138 (-HampHostComputeDesiredHamState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampPkgSnapshotDebugState(struct _HAM_PACKAGE *a1)
{
  DWORD v1; // edi
  _QWORD *Value; // rbx
  bool v4; // bl
  __int64 *v5; // rax
  __int64 v6; // rdx

  v1 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
      __int2c();
    *Value |= 0x40uLL;
    ++Value[7];
  }
  RtlAcquireSRWLockShared((char *)a1 + 304);
  v4 = (*((_DWORD *)a1 + 85) & 4) != 0;
  if ( HampLockTrackerId != -1 )
  {
    v5 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v6 = *v5;
    if ( (*v5 & 0x40) == 0 )
      __int2c();
    if ( v5[7]-- == 1 )
      *v5 = v6 & 0xFFFFFFFFFFFFFFBFuLL;
  }
  RtlReleaseSRWLockShared((char *)a1 + 304);
  return v4;
}
