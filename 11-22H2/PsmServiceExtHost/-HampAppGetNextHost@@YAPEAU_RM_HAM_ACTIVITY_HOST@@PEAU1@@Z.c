/*
 * XREFs of ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18001B1F0
 * Callers:
 *     ?HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001D810 (-HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800371DC (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180041F00 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z @ 0x18007F598 (-HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18007F7CC (-HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@.c)
 *     ?HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z @ 0x18007F834 (-HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z.c)
 *     ?HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18007F8E4 (-HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 * Callees:
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800186E0 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

struct _RM_HAM_ACTIVITY_HOST *__fastcall HampAppGetNextHost(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rbp
  DWORD v3; // edi
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v6; // edi
  _QWORD *v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rbp
  __int64 v11; // r14
  __int64 *v12; // rax
  __int64 v13; // rdx
  bool v14; // zf
  __int64 *v15; // rax
  __int64 v16; // rcx
  DWORD v17; // edi
  _QWORD *v18; // rbx
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 *v22; // r8

  v1 = *((_QWORD *)a1 + 99);
  v3 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v3) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  CurrentThreadId = GetCurrentThreadId();
  v6 = HampLockTrackerId;
  dword_1800DC590 = CurrentThreadId;
  if ( HampLockTrackerId != -1 )
  {
    v7 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v6) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *v7 |= 0x20uLL;
    ++v7[6];
  }
  v8 = v1 + 584;
  RtlAcquireSRWLockShared(v1 + 584);
  v9 = *((_QWORD *)a1 + 103);
  v10 = v1 + 600;
  if ( v9 == v10 )
  {
LABEL_10:
    v11 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      v11 = v9 - 824;
      if ( (unsigned int)RmHamHostReferenceUnsafe((struct _RM_HAM_ACTIVITY_HOST *)(v9 - 824)) )
        break;
      v9 = *v22;
      if ( v9 == v10 )
        goto LABEL_10;
    }
  }
  if ( HampLockTrackerId != -1 )
  {
    v12 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v13 = *v12;
    if ( (*v12 & 0x20) == 0 )
      __int2c();
    v14 = v12[6]-- == 1;
    if ( v14 )
      *v12 = v13 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  RtlReleaseSRWLockShared(v8);
  dword_1800DC590 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v15 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v16 = *v15;
    if ( (*v15 & 1) == 0 )
      __int2c();
    v14 = v15[1]-- == 1;
    if ( v14 )
      *v15 = v16 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  v17 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v18 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v17) )
      __int2c();
    *v18 |= 1uLL;
    ++v18[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800DC590 = GetCurrentThreadId();
  v14 = (*((_QWORD *)a1 + 75))-- == 1LL;
  if ( v14 )
    RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64));
  dword_1800DC590 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v19 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v20 = *v19;
    if ( (*v19 & 1) == 0 )
      __int2c();
    v14 = v19[1]-- == 1;
    if ( v14 )
      *v19 = v20 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  return (struct _RM_HAM_ACTIVITY_HOST *)v11;
}
