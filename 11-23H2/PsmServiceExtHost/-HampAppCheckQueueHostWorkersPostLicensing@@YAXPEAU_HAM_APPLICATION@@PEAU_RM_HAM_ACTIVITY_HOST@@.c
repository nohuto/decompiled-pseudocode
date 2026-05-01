/*
 * XREFs of ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001E1C0
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001E5A0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180020130 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800186E0 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CempLockTrackerMarkReleased @ 0x18001C6B0 (CempLockTrackerMarkReleased.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CempLockTrackerMarkAcquired @ 0x1800211E0 (CempLockTrackerMarkAcquired.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180023510 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampAppGetFirstLiveHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@PEAU_LIST_ENTRY@@@Z @ 0x18003762C (-HampAppGetFirstLiveHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@PEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall HampAppCheckQueueHostWorkersPostLicensing(
        struct _HAM_APPLICATION *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2)
{
  DWORD CurrentThreadId; // eax
  DWORD v5; // esi
  _QWORD *Value; // rbx
  struct _RM_HAM_ACTIVITY_HOST *FirstLiveHost; // rbx
  __int64 *v8; // rax
  __int64 v9; // rdx
  bool v10; // zf
  __int64 v11; // rdx
  DWORD v12; // esi
  __int64 v13; // rbp
  _QWORD *v14; // rdi
  DWORD v15; // eax
  DWORD v16; // esi
  _QWORD *v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // r8
  __int64 v20; // rbp
  struct _RM_HAM_ACTIVITY_HOST *v21; // r14
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 *v24; // rax
  __int64 v25; // rcx
  DWORD v26; // esi
  _QWORD *v27; // rdi
  __int64 *v28; // rax
  __int64 v29; // rcx
  __int64 *v30; // r8

  CempLockTrackerMarkAcquired(HampLockTrackerId);
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  CurrentThreadId = GetCurrentThreadId();
  v5 = HampLockTrackerId;
  dword_1800DC580 = CurrentThreadId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *Value |= 0x20uLL;
    ++Value[6];
  }
  RtlAcquireSRWLockShared((char *)a1 + 584);
  FirstLiveHost = HampAppGetFirstLiveHost(a1, *((struct _LIST_ENTRY **)a1 + 75));
  if ( HampLockTrackerId != -1 )
  {
    v8 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v9 = *v8;
    if ( (*v8 & 0x20) == 0 )
      __int2c();
    v10 = v8[6]-- == 1;
    if ( v10 )
      *v8 = v9 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  RtlReleaseSRWLockShared((char *)a1 + 584);
  dword_1800DC580 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  CempLockTrackerMarkReleased(HampLockTrackerId, v11, 0);
  if ( FirstLiveHost )
  {
    do
    {
      if ( FirstLiveHost != a2 )
      {
        HampHostAcquireLockExclusiveEx(FirstLiveHost, 0);
        HampHostCheckQueueStateWorker(FirstLiveHost, 0);
        HampHostReleaseLockExclusiveEx(FirstLiveHost);
      }
      v12 = HampLockTrackerId;
      v13 = *((_QWORD *)FirstLiveHost + 99);
      if ( HampLockTrackerId != -1 )
      {
        v14 = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v12) )
          __int2c();
        *v14 |= 1uLL;
        ++v14[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      v15 = GetCurrentThreadId();
      v16 = HampLockTrackerId;
      dword_1800DC580 = v15;
      if ( HampLockTrackerId != -1 )
      {
        v17 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v16) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
          __int2c();
        *v17 |= 0x20uLL;
        ++v17[6];
      }
      v18 = v13 + 584;
      RtlAcquireSRWLockShared(v13 + 584);
      v19 = *((_QWORD *)FirstLiveHost + 103);
      v20 = v13 + 600;
      if ( v19 == v20 )
      {
LABEL_22:
        v21 = 0LL;
      }
      else
      {
        while ( 1 )
        {
          v21 = (struct _RM_HAM_ACTIVITY_HOST *)(v19 - 824);
          if ( (unsigned int)RmHamHostReferenceUnsafe((struct _RM_HAM_ACTIVITY_HOST *)(v19 - 824)) )
            break;
          v19 = *v30;
          if ( v19 == v20 )
            goto LABEL_22;
        }
      }
      if ( HampLockTrackerId != -1 )
      {
        v22 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v23 = *v22;
        if ( (*v22 & 0x20) == 0 )
          __int2c();
        v10 = v22[6]-- == 1;
        if ( v10 )
          *v22 = v23 & 0xFFFFFFFFFFFFFFDFuLL;
      }
      RtlReleaseSRWLockShared(v18);
      dword_1800DC580 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v24 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v25 = *v24;
        if ( (*v24 & 1) == 0 )
          __int2c();
        v10 = v24[1]-- == 1;
        if ( v10 )
          *v24 = v25 & 0xFFFFFFFFFFFFFFFEuLL;
      }
      v26 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v27 = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v26) )
          __int2c();
        *v27 |= 1uLL;
        ++v27[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      dword_1800DC580 = GetCurrentThreadId();
      v10 = (*((_QWORD *)FirstLiveHost + 75))-- == 1LL;
      if ( v10 )
        RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)FirstLiveHost - 64));
      dword_1800DC580 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v28 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v29 = *v28;
        if ( (*v28 & 1) == 0 )
          __int2c();
        v10 = v28[1]-- == 1;
        if ( v10 )
          *v28 = v29 & 0xFFFFFFFFFFFFFFFEuLL;
      }
      FirstLiveHost = v21;
    }
    while ( v21 );
  }
}
