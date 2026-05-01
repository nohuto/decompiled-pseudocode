/*
 * XREFs of ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x180018BA0
 * Callers:
 *     ?HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z @ 0x180001F1C (-HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z.c)
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z @ 0x18002D6D0 (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z.c)
 * Callees:
 *     CempLockSleepConditionVariableExclusive @ 0x180013B3C (CempLockSleepConditionVariableExclusive.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180014FCC (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180015710 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180017E20 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostCanRegisterProcess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180019170 (-HampHostCanRegisterProcess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800191D0 (-HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800193F0 (-HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180023510 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B5E4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
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
  DWORD v8; // ebp
  unsigned int v9; // r14d
  int v11; // r13d
  BOOL v12; // esi
  _QWORD *Value; // rdi
  unsigned int v14; // edx
  unsigned __int64 v15; // rbp
  __int64 i; // r9
  unsigned __int64 *v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // r9
  int v20; // edi
  __int64 *v21; // rax
  __int64 v22; // rcx
  bool v23; // zf
  DWORD v24; // ebp
  _QWORD *v25; // rdi
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned int v31; // r12d
  DWORD v32; // ebp
  _QWORD *v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rcx
  __int64 *v36; // rax
  __int64 v37; // rcx
  __int64 v39[11]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v40; // [rsp+A0h] [rbp+8h] BYREF
  void *v41; // [rsp+A8h] [rbp+10h]
  void *v42; // [rsp+B0h] [rbp+18h]
  struct _PSM_APP_IDENTITY *v43; // [rsp+B8h] [rbp+20h]

  v43 = a4;
  v42 = a3;
  v41 = a2;
  v8 = HampLockTrackerId;
  v9 = a6;
  v11 = 0;
  v12 = 0;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v8) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(a1);
  *((_DWORD *)a1 + 2) = GetCurrentThreadId();
  if ( (*((_QWORD *)a1 + 83) & 0x200000000000000LL) != 0 )
  {
    RtlQueryUnbiasedInterruptTime(&v40);
    v14 = 0;
    v15 = v40 / 0x2710;
    do
    {
      if ( *((struct _RM_HAM_ACTIVITY_HOST **)a1 + 76) == (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 608) )
        break;
      if ( (*((_QWORD *)a1 + 83) & 0x2000000000LL) != 0 )
        break;
      v39[0] = -10000LL * (60000 - v14);
      CempLockSleepConditionVariableExclusive((__int64)a1, (__int64)a1 + 16, (__int64)v39);
      RtlQueryUnbiasedInterruptTime(&v40);
      v14 = v40 / 0x2710 - v15;
    }
    while ( v14 <= 0xEA60 );
  }
  for ( i = *((_QWORD *)a1 + 83); (i & 0x1000000000000LL) != 0; i = *((_QWORD *)a1 + 83) )
    CempLockSleepConditionVariableExclusive((__int64)a1, (__int64)a1 + 696, 0LL);
  v17 = a8;
  v18 = *((_QWORD *)a1 + 102);
  *((_QWORD *)a1 + 83) = i | 0x1000000000000LL;
  *v17 = v18;
  if ( HampHostCanRegisterProcess(a1, v9) )
  {
    if ( *((_BYTE *)a1 + 592) == 1 && (v19 & 0x2000000000000LL) == 0 )
      *((_DWORD *)a1 + 212) = -1;
    if ( *((_DWORD *)a1 + 212) == -1
      || *((_QWORD *)a1 + 105)
      || (v20 = TpAllocTimer(
                  (char *)a1 + 840,
                  HampHostCacheTimeoutCallback,
                  a1,
                  (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                         + 120)
                             + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                + 584),
          v20 >= 0) )
    {
      v12 = (*((_QWORD *)a1 + 83) & 0x2000000000000LL) == 0;
      if ( HampLockTrackerId != -1 )
      {
        v21 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v22 = *v21;
        if ( (*v21 & 2) == 0 )
          __int2c();
        v23 = v21[2]-- == 1;
        if ( v23 )
          *v21 = v22 & 0xFFFFFFFFFFFFFFFDuLL;
      }
      *((_DWORD *)a1 + 2) = 0;
      RtlReleaseSRWLockExclusive(a1);
      if ( v12 )
      {
        v24 = HampLockTrackerId;
        if ( HampLockTrackerId != -1 )
        {
          v25 = TlsGetValue(HampLockTrackerId);
          if ( *(_QWORD *)TlsGetValue(v24) )
            __int2c();
          *v25 |= 1uLL;
          ++v25[1];
        }
        RtlAcquireSRWLockExclusive(&RmpGlobalLock);
        dword_1800DC580 = GetCurrentThreadId();
        v26 = *((_QWORD *)a1 + 75);
        if ( !v26 )
          __int2c();
        v27 = 24LL;
        if ( a1 )
          v27 = (__int64)a1 - 40;
        if ( *(int *)v27 >= 0 )
          *((_QWORD *)a1 + 75) = v26 + 1;
        dword_1800DC580 = 0;
        RtlReleaseSRWLockExclusive(&RmpGlobalLock);
        if ( HampLockTrackerId != -1 )
        {
          v28 = (__int64 *)TlsGetValue(HampLockTrackerId);
          v29 = *v28;
          if ( (*v28 & 1) == 0 )
            __int2c();
          v23 = v28[1]-- == 1;
          if ( v23 )
            *v28 = v29 & 0xFFFFFFFFFFFFFFFEuLL;
        }
        HampHostUpdateUsageInfoProcesses(a1);
      }
      v30 = 48LL;
      v31 = v9 & 0xFFFFFFFE;
      if ( a7 )
        v31 = v9;
      if ( a1 )
        v30 = (__int64)a1 - 16;
      v20 = (*(__int64 (__fastcall **)(void *, void *, struct _PSM_APP_IDENTITY *, unsigned __int64, unsigned int, void *))(*(_QWORD *)(*(_QWORD *)v30 + 40LL) + 160LL))(
              v41,
              v42,
              v43,
              a5,
              v31,
              a7);
      if ( v20 >= 0 )
      {
        v32 = HampLockTrackerId;
        if ( HampLockTrackerId != -1 )
        {
          v33 = TlsGetValue(HampLockTrackerId);
          if ( (*(_QWORD *)TlsGetValue(v32) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
            __int2c();
          *v33 |= 2uLL;
          ++v33[2];
        }
        RtlAcquireSRWLockExclusive(a1);
        *((_DWORD *)a1 + 2) = GetCurrentThreadId();
        *((_QWORD *)a1 + 84) |= 3uLL;
        if ( *((_DWORD *)a1 + 140) == 2 && !*((_BYTE *)a1 + 592) )
        {
          v34 = *((_QWORD *)a1 + 99);
          HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v34);
          *(_WORD *)(v34 + 616) = 6912;
          HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v34);
        }
        if ( !HampHostCanRegisterProcess(a1, v31) )
        {
          HampHostQueueTerminateEx(v35, 3u, 0x900u, 0LL, 1, 0, 0LL, (unsigned int *)&a8);
          v11 = (int)a8;
        }
        *((_QWORD *)a1 + 83) |= 0x80000000000000uLL;
        HampHostCheckQueueStateWorker(a1, 0);
        v20 = 0;
        *((_QWORD *)a1 + 83) |= 0x2000000000000uLL;
      }
      else
      {
        if ( v12 )
        {
          RmpAcquireGlobalLock();
          v23 = (*((_QWORD *)a1 + 75))-- == 1LL;
          if ( v23 )
            RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64));
          RmpReleaseGlobalLock();
        }
        HampHostAcquireLockExclusiveEx(a1, 0);
      }
    }
  }
  else
  {
    v20 = -1058275325;
  }
  *((_QWORD *)a1 + 83) &= ~0x1000000000000uLL;
  RtlWakeAllConditionVariable((char *)a1 + 696);
  if ( HampLockTrackerId != -1 )
  {
    v36 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v37 = *v36;
    if ( (*v36 & 2) == 0 )
      __int2c();
    v23 = v36[2]-- == 1;
    if ( v23 )
      *v36 = v37 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
  if ( v12 )
    HampPkgPushUpdate(*(struct _HAM_PACKAGE **)(*((_QWORD *)a1 + 99) + 88LL));
  if ( v11 )
    HampDepGroupRunStateChangeWorker(*((struct _HAM_DEPENDENCY_GROUP **)a1 + 88));
  return (unsigned int)v20;
}
