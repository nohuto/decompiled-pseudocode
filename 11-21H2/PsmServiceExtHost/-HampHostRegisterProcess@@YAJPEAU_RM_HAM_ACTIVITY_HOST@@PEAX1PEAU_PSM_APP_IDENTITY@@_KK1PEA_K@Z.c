/*
 * XREFs of ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x18000B5A0
 * Callers:
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z @ 0x18000AB58 (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z.c)
 *     ?HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z @ 0x18003A66C (-HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z.c)
 * Callees:
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180007674 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostCanRegisterProcess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000BB1C (-HampHostCanRegisterProcess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BB70 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000E420 (-HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18000FB70 (-HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180016A20 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18002DB4C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18003E24C (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     CempLockSleepConditionVariableExclusive @ 0x18003E5B0 (CempLockSleepConditionVariableExclusive.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007616C (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

__int64 __fastcall HampHostRegisterProcess(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        void *a2,
        void *a3,
        struct _PSM_APP_IDENTITY *a4,
        unsigned __int64 a5,
        unsigned int a6,
        void *a7,
        unsigned __int64 *a8)
{
  DWORD v9; // ebp
  int v11; // r12d
  BOOL v12; // esi
  _QWORD *Value; // rdi
  unsigned int v14; // edx
  unsigned __int64 v15; // rbp
  __int64 i; // r9
  unsigned __int64 *v17; // rax
  unsigned __int64 v18; // rcx
  unsigned int v19; // r15d
  unsigned int v20; // edx
  __int64 v21; // r9
  int v22; // edi
  __int64 *v23; // rax
  __int64 v24; // rcx
  bool v25; // zf
  DWORD v26; // ebp
  _QWORD *v27; // rdi
  __int64 v28; // rdx
  unsigned int v29; // r14d
  DWORD v30; // ebp
  _QWORD *v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 *v34; // rax
  __int64 v35; // rcx
  __int64 v37; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v38; // [rsp+90h] [rbp+8h] BYREF
  void *v39; // [rsp+98h] [rbp+10h]
  void *v40; // [rsp+A0h] [rbp+18h]

  v40 = a3;
  v39 = a2;
  v9 = HampLockTrackerId;
  v11 = 0;
  v12 = 0;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v9) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(a1);
  *((_DWORD *)a1 + 2) = GetCurrentThreadId();
  if ( (*((_QWORD *)a1 + 83) & 0x200000000000000LL) != 0 )
  {
    RtlQueryUnbiasedInterruptTime(&v38);
    v14 = 0;
    v15 = v38 / 0x2710;
    do
    {
      if ( *((struct _RM_HAM_ACTIVITY_HOST **)a1 + 76) == (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 608) )
        break;
      if ( (*((_QWORD *)a1 + 83) & 0x2000000000LL) != 0 )
        break;
      v37 = -10000LL * (60000 - v14);
      CempLockSleepConditionVariableExclusive(a1, (char *)a1 + 16, &v37);
      RtlQueryUnbiasedInterruptTime(&v38);
      v14 = v38 / 0x2710 - v15;
    }
    while ( v14 <= 0xEA60 );
  }
  for ( i = *((_QWORD *)a1 + 83); (i & 0x1000000000000LL) != 0; i = *((_QWORD *)a1 + 83) )
    CempLockSleepConditionVariableExclusive(a1, (char *)a1 + 696, 0LL);
  v17 = a8;
  v18 = *((_QWORD *)a1 + 102);
  v19 = a6;
  v20 = a6;
  *((_QWORD *)a1 + 83) = i | 0x1000000000000LL;
  *v17 = v18;
  if ( HampHostCanRegisterProcess(a1, v20) )
  {
    if ( *((_BYTE *)a1 + 592) == 1 && (v21 & 0x2000000000000LL) == 0 )
      *((_DWORD *)a1 + 212) = -1;
    if ( *((_DWORD *)a1 + 212) == -1
      || *((_QWORD *)a1 + 105)
      || (v22 = TpAllocTimer((char *)a1 + 840, HampHostCacheTimeoutCallback, a1, 0LL), v22 >= 0) )
    {
      v12 = (*((_QWORD *)a1 + 83) & 0x2000000000000LL) == 0;
      if ( HampLockTrackerId != -1 )
      {
        v23 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v24 = *v23;
        if ( (*v23 & 2) == 0 )
          NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
        v25 = v23[2]-- == 1;
        if ( v25 )
          *v23 = v24 & 0xFFFFFFFFFFFFFFFDuLL;
      }
      *((_DWORD *)a1 + 2) = 0;
      RtlReleaseSRWLockExclusive(a1);
      if ( v12 )
      {
        v26 = HampLockTrackerId;
        if ( HampLockTrackerId != -1 )
        {
          v27 = TlsGetValue(HampLockTrackerId);
          if ( *(_QWORD *)TlsGetValue(v26) )
            NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
          *v27 |= 1uLL;
          ++v27[1];
        }
        RtlAcquireSRWLockExclusive(&RmpGlobalLock);
        dword_1800DD4E8 = GetCurrentThreadId();
        if ( !*((_QWORD *)a1 + 75) )
          NT_ASSERT("Host->ReferenceCount > 0");
        RmHamHostReferenceUnsafe(a1);
        dword_1800DD4E8 = 0;
        RtlReleaseSRWLockExclusive(&RmpGlobalLock);
        CempLockTrackerMarkReleased(HampLockTrackerId, v28, 0LL);
        HampHostUpdateUsageInfoProcesses(a1);
      }
      v29 = v19 & 0xFFFFFFFE;
      if ( a7 )
        v29 = v19;
      v22 = (*(__int64 (__fastcall **)(void *, void *, struct _PSM_APP_IDENTITY *, unsigned __int64, unsigned int, void *))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 160LL))(
              v39,
              v40,
              a4,
              a5,
              v29,
              a7);
      if ( v22 >= 0 )
      {
        v30 = HampLockTrackerId;
        if ( HampLockTrackerId != -1 )
        {
          v31 = TlsGetValue(HampLockTrackerId);
          if ( (*(_QWORD *)TlsGetValue(v30) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
            NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
          *v31 |= 2uLL;
          ++v31[2];
        }
        RtlAcquireSRWLockExclusive(a1);
        *((_DWORD *)a1 + 2) = GetCurrentThreadId();
        *((_QWORD *)a1 + 84) |= 3uLL;
        if ( *((_DWORD *)a1 + 140) == 2 && !*((_BYTE *)a1 + 592) )
        {
          v32 = *((_QWORD *)a1 + 99);
          HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v32);
          *(_WORD *)(v32 + 616) = 6912;
          HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v32);
        }
        if ( !HampHostCanRegisterProcess(a1, v29) )
        {
          HampHostQueueTerminateEx(v33, 3LL, 2304LL, 0LL, 1, 0, 0LL, &a8);
          v11 = (int)a8;
        }
        *((_QWORD *)a1 + 83) |= 0x80000000000000uLL;
        HampHostCheckQueueStateWorker(a1, 0);
        v22 = 0;
        *((_QWORD *)a1 + 83) |= 0x2000000000000uLL;
      }
      else
      {
        if ( v12 )
        {
          RmpAcquireGlobalLock();
          v25 = (*((_QWORD *)a1 + 75))-- == 1LL;
          if ( v25 )
            RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64));
          RmpReleaseGlobalLock();
        }
        HampHostAcquireLockExclusiveEx(a1, 0);
      }
    }
  }
  else
  {
    v22 = -1058275325;
  }
  *((_QWORD *)a1 + 83) &= ~0x1000000000000uLL;
  RtlWakeAllConditionVariable((char *)a1 + 696);
  if ( HampLockTrackerId != -1 )
  {
    v34 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v35 = *v34;
    if ( (*v34 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v25 = v34[2]-- == 1;
    if ( v25 )
      *v34 = v35 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
  if ( v12 )
    HampPkgPushUpdate(*(struct _HAM_PACKAGE **)(*((_QWORD *)a1 + 99) + 88LL));
  if ( v11 )
    HampDepGroupRunStateChangeWorker(*((struct _HAM_DEPENDENCY_GROUP **)a1 + 88));
  return (unsigned int)v22;
}
