/*
 * XREFs of ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x18003600C
 * Callers:
 *     ?HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z @ 0x180035EDC (-HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampSystemEnsureStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180035F64 (-HampSystemEnsureStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppGetStateSnapshot@@YA?AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_APPLICATION@@@Z @ 0x180037C4C (-HampAppGetStateSnapshot@@YA-AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HamSrvTerminateApplicationHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x180073B3C (-HamSrvTerminateApplicationHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_.c)
 *     ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x18007EEA8 (-HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_S.c)
 * Callees:
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800186E0 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

struct _RM_HAM_ACTIVITY_HOST *__fastcall HampAppTryReferenceMixedHost(struct _HAM_APPLICATION *a1)
{
  DWORD v1; // edi
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v5; // edi
  _QWORD *v6; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v7; // rcx
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdx
  bool v11; // zf
  __int64 *v12; // rax
  __int64 v13; // rcx

  v1 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v1) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  CurrentThreadId = GetCurrentThreadId();
  v5 = HampLockTrackerId;
  dword_1800DC580 = CurrentThreadId;
  if ( HampLockTrackerId != -1 )
  {
    v6 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *v6 |= 0x20uLL;
    ++v6[6];
  }
  RtlAcquireSRWLockShared((char *)a1 + 584);
  v7 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 71);
  if ( v7 && (unsigned int)RmHamHostReferenceUnsafe(v7) )
    v8 = *((_QWORD *)a1 + 71);
  else
    v8 = 0LL;
  if ( HampLockTrackerId != -1 )
  {
    v9 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v10 = *v9;
    if ( (*v9 & 0x20) == 0 )
      __int2c();
    v11 = v9[6]-- == 1;
    if ( v11 )
      *v9 = v10 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  RtlReleaseSRWLockShared((char *)a1 + 584);
  dword_1800DC580 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v12 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v13 = *v12;
    if ( (*v12 & 1) == 0 )
      __int2c();
    v11 = v12[1]-- == 1;
    if ( v11 )
      *v12 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  return (struct _RM_HAM_ACTIVITY_HOST *)v8;
}
