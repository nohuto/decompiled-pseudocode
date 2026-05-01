/*
 * XREFs of ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x18000C5D8
 * Callers:
 *     ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180003CD0 (-HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000F550 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180007674 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECUTION_STATE@@K@Z @ 0x180009DF4 (-HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECU.c)
 *     ?HampHostCheckQueueDependencyWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180009FE0 (-HampHostCheckQueueDependencyWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18000A028 (-HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?HampUtilSaveHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18000A0F8 (-HampUtilSaveHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     CempLockTrackerMarkAcquired @ 0x18000E390 (CempLockTrackerMarkAcquired.c)
 *     ?HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000E420 (-HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18000FB70 (-HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180015C90 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x18002D900 (-HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18003E24C (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18003E308 (-HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_REASON@@@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

void __fastcall HampHostNotifyZeroProcess(__int64 a1, unsigned int a2, unsigned int a3, int a4, _DWORD *a5)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  __int64 v12; // r15
  int v13; // ebx
  const unsigned __int16 *v14; // r14
  __int64 v15; // rax
  int v16; // eax
  unsigned __int64 v17; // rax
  __int64 v18; // rbx
  char v19; // [rsp+30h] [rbp-D0h] BYREF
  char v20; // [rsp+31h] [rbp-CFh] BYREF
  char v21; // [rsp+32h] [rbp-CEh] BYREF
  int v22; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v23; // [rsp+38h] [rbp-C8h]
  int v24; // [rsp+3Ch] [rbp-C4h] BYREF
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v26; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  void *v34; // [rsp+90h] [rbp-70h]
  int v35; // [rsp+98h] [rbp-68h]
  int v36; // [rsp+9Ch] [rbp-64h]
  const unsigned __int16 *v37; // [rsp+A0h] [rbp-60h]
  int v38; // [rsp+A8h] [rbp-58h]
  int v39; // [rsp+ACh] [rbp-54h]
  __int64 *v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  char *v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  char *v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D8h] [rbp-28h]
  int *v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  int *v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  int *v50; // [rsp+100h] [rbp+0h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  char *v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+118h] [rbp+18h]
  __int64 *v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+128h] [rbp+28h]
  _WORD *v56; // [rsp+130h] [rbp+30h]
  int v57; // [rsp+138h] [rbp+38h]
  int v58; // [rsp+13Ch] [rbp+3Ch]
  __int64 *v59; // [rsp+140h] [rbp+40h]
  __int64 v60; // [rsp+148h] [rbp+48h]
  _WORD v61[136]; // [rsp+150h] [rbp+50h] BYREF

  v22 = a4;
  v23 = a2;
  CempLockTrackerMarkAcquired(HampLockTrackerId);
  RtlAcquireSRWLockShared(a1);
  v7 = *(_QWORD *)(a1 + 840);
  CempLockTrackerMarkReleased(HampLockTrackerId, v8, 1LL);
  RtlReleaseSRWLockShared(a1);
  if ( v7 )
  {
    TpSetTimer(v7, 0LL, 0LL, 0LL);
    TpWaitForTimer(v7, 1LL);
  }
  v9 = -1LL;
  if ( (*(_QWORD *)(a1 + 664) & 0x2000000000000LL) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 984);
    if ( (int)HampUtilQueryHostHistoricCommitUse((struct _RM_HAM_ACTIVITY_HOST *)a1, &v27) < 0
      || (v11 = v27, v27 == -1LL) )
    {
      v11 = v10;
    }
    v27 = (v10 >> 1) + (v11 >> 1);
    HampUtilSaveHostHistoricCommitUse((struct _RM_HAM_ACTIVITY_HOST *)a1, v27);
    if ( *(_DWORD *)(a1 + 560) == 2 )
      HampAppSaveTerminateReason(*(_QWORD *)(a1 + 792), a3);
    HampHostUpdateUsageInfoProcesses((struct _RM_HAM_ACTIVITY_HOST *)a1);
  }
  CempLockTrackerMarkAcquired(HampLockTrackerId);
  RtlAcquireSRWLockExclusive(a1);
  *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
  v12 = *(_QWORD *)(a1 + 816);
  if ( (*(_QWORD *)(a1 + 664) & 0x2000000000000LL) != 0 )
  {
    *a5 = 1;
    if ( *(_DWORD *)(a1 + 852) )
    {
      RtlQueryUnbiasedInterruptTime(&v28);
      v13 = v28 / 0x2710 - *(_DWORD *)(a1 + 852);
    }
    else
    {
      v13 = 0;
    }
    if ( dword_1800DC218 )
    {
      v14 = (const unsigned __int16 *)(a1 + 24);
      v24 = 130;
      PsmGetAumidFromKey(a1 + 24, &v24, v61);
      if ( (unsigned int)dword_1800DC218 > 4
        && (qword_1800DC228 & 0x400000000008LL) != 0
        && (qword_1800DC230 & 0x400000000008LL) == qword_1800DC230 )
      {
        v19 = (unsigned __int64)*(unsigned int *)(a1 + 664) >> 18;
        v20 = v23;
        v21 = *(_BYTE *)(a1 + 560);
        v31 = *(_QWORD *)(a1 - 32);
        v59 = &v29;
        v15 = -1LL;
        v29 = 0x1000000LL;
        v30 = v12;
        v25 = v13;
        v26 = a3;
        v60 = 8LL;
        do
          ++v15;
        while ( v61[v15] );
        v58 = 0;
        v57 = 2 * v15 + 2;
        v56 = v61;
        v55 = 8LL;
        v54 = &v30;
        v52 = &v19;
        v50 = &v22;
        v48 = &v25;
        v46 = (int *)&v26;
        v44 = &v20;
        v42 = &v21;
        v40 = &v31;
        v53 = 1LL;
        v51 = 4LL;
        v49 = 4LL;
        v47 = 4LL;
        v45 = 1LL;
        v43 = 1LL;
        v41 = 8LL;
        if ( a1 == -24 )
        {
          v14 = &word_1800B7A9C;
          v16 = 2;
        }
        else
        {
          do
            ++v9;
          while ( v14[v9] );
          v16 = 2 * v9 + 2;
        }
        v38 = v16;
        *(_DWORD *)&EventDescriptor.Level = 4;
        UserData.Ptr = (ULONGLONG)off_1800DC220;
        v39 = 0;
        EventDescriptor.Keyword = 0x400000000008LL;
        v37 = v14;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        UserData.Size = *(unsigned __int16 *)off_1800DC220;
        v34 = &unk_1800C0CF6;
        v36 = 1;
        UserData.Reserved = 2;
        v35 = 173;
        v23 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EventWriteTransfer(qword_1800DC238, &EventDescriptor, 0LL, 0LL, 0xDu, &UserData);
      }
    }
    if ( *(_DWORD *)(a1 + 560) == 2 && !*(_BYTE *)(a1 + 592) )
    {
      v18 = *(_QWORD *)(a1 + 792);
      HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v18);
      *(_WORD *)(v18 + 616) = a3;
      HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v18);
    }
  }
  else
  {
    *a5 = 0;
  }
  HampHostChangeApplicationExecutionState(a1, 3u, 1LL);
  HampHostInvalidateActivities(a1, a3, v12 + 1, 0LL);
  *(_QWORD *)(a1 + 664) &= 0xFFFFFFFFFFFCFFFFuLL;
  *(_QWORD *)(a1 + 672) &= 0xFFFFFFFFFFFFFFE7uLL;
  *(_WORD *)(a1 + 664) = 0;
  v17 = *(_QWORD *)(a1 + 664) & 0xFFF5FFFFFD97FFFFuLL;
  *(_QWORD *)(a1 + 816) = v12 + 1;
  *(_QWORD *)(a1 + 848) = 0LL;
  *(_QWORD *)(a1 + 664) = v17 | 0x1940000;
  *(_QWORD *)(a1 + 968) = 0LL;
  *(_QWORD *)(a1 + 984) = 0LL;
  *(_DWORD *)(a1 + 856) = 0;
  HampHostUpdateActivityState((struct _RM_HAM_ACTIVITY_HOST *)a1);
  RtlWakeAddressAll(a1 + 816);
  HampHostCheckQueueDependencyWorker((struct _RM_HAM_ACTIVITY_HOST *)a1);
  HampPkgPushUpdate(*(struct _HAM_PACKAGE **)(*(_QWORD *)(a1 + 792) + 88LL));
}
