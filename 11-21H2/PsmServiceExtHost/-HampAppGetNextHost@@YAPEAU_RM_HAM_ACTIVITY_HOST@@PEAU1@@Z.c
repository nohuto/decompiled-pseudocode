/*
 * XREFs of ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180039A1C
 * Callers:
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000EAD4 (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800399C0 (-HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180046464 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z @ 0x18007B044 (-HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18007B11C (-HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@.c)
 *     ?HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z @ 0x18007B184 (-HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z.c)
 *     ?HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18007B234 (-HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 * Callees:
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BB70 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

struct _RM_HAM_ACTIVITY_HOST *__fastcall HampAppGetNextHost(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  DWORD v1; // esi
  __int64 v2; // rbp
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v6; // esi
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // rdx
  bool v13; // zf
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 *v17; // rdx

  v1 = HampLockTrackerId;
  v2 = *((_QWORD *)a1 + 99);
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
  v6 = HampLockTrackerId;
  dword_1800DD4E8 = CurrentThreadId;
  if ( HampLockTrackerId != -1 )
  {
    v7 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v6) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *v7 |= 0x20uLL;
    ++v7[6];
  }
  RtlAcquireSRWLockShared(v2 + 584);
  v8 = *((_QWORD *)a1 + 103);
  v9 = v2 + 600;
  while ( v8 != v9 )
  {
    v10 = v8 - 824;
    if ( (unsigned int)RmHamHostReferenceUnsafe((struct _RM_HAM_ACTIVITY_HOST *)(v8 - 824)) )
      goto LABEL_12;
    v8 = *v17;
  }
  v10 = 0LL;
LABEL_12:
  if ( HampLockTrackerId != -1 )
  {
    v11 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v12 = *v11;
    if ( (*v11 & 0x20) == 0 )
      __int2c();
    v13 = v11[6]-- == 1;
    if ( v13 )
      *v11 = v12 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  RtlReleaseSRWLockShared(v2 + 584);
  dword_1800DD4E8 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v14 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v15 = *v14;
    if ( (*v14 & 1) == 0 )
      __int2c();
    v13 = v14[1]-- == 1;
    if ( v13 )
      *v14 = v15 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  RmpAcquireGlobalLock();
  v13 = (*((_QWORD *)a1 + 75))-- == 1LL;
  if ( v13 )
    RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64));
  RmpReleaseGlobalLock();
  return (struct _RM_HAM_ACTIVITY_HOST *)v10;
}
