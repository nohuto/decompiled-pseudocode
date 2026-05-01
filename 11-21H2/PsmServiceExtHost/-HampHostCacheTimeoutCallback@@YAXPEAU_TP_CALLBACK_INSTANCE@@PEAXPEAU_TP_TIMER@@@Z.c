/*
 * XREFs of ?HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180007E30
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerMarkAcquired @ 0x18000E390 (CempLockTrackerMarkAcquired.c)
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022204 (-HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18002DB4C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007616C (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

void __fastcall HampHostCacheTimeoutCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _HAM_DEPENDENCY_GROUP **a2,
        struct _TP_TIMER *a3)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v9; // [rsp+48h] [rbp-B8h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR v11; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v12[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+0h] BYREF
  void *v14; // [rsp+110h] [rbp+10h]
  int v15; // [rsp+118h] [rbp+18h]
  int v16; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+120h] [rbp+20h] BYREF
  void *v18; // [rsp+130h] [rbp+30h]
  int v19; // [rsp+138h] [rbp+38h]
  int v20; // [rsp+13Ch] [rbp+3Ch]
  __int64 *v21; // [rsp+140h] [rbp+40h]
  int v22; // [rsp+148h] [rbp+48h]
  int v23; // [rsp+14Ch] [rbp+4Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v12);
  v4 = 0;
  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 0x40) != 0 && (qword_1800DC230 & 0x40) == qword_1800DC230 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DC220;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800DC220;
    v14 = &unk_1800C07D8;
    UserData.Reserved = 2;
    v15 = 19;
    v16 = 1;
    v9 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DC238, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  CempLockTrackerMarkAcquired(HampLockTrackerId);
  RtlAcquireSRWLockExclusive(a2);
  *((_DWORD *)a2 + 2) = GetCurrentThreadId();
  if ( HampHostIsCached((struct _RM_HAM_ACTIVITY_HOST *)a2) )
  {
    HampHostQueueTerminateEx(v6, 1LL, 2560LL, 0LL, 1, 0, 0LL, &v8);
    v4 = v8;
  }
  CempLockTrackerMarkReleased(HampLockTrackerId, v5, 1LL);
  *((_DWORD *)a2 + 2) = 0;
  RtlReleaseSRWLockExclusive(a2);
  if ( v4 )
    HampDepGroupRunStateChangeWorker(a2[88]);
  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 8) != 0 && (qword_1800DC230 & 8) == qword_1800DC230 )
  {
    v7 = (__int64)*(a2 - 4);
    v23 = 0;
    v8 = v7;
    v21 = &v8;
    *(_DWORD *)&v11.Level = 516;
    v17.Ptr = (ULONGLONG)off_1800DC220;
    v22 = 8;
    v11.Keyword = 8LL;
    *(_DWORD *)&v11.Id = 184549376;
    v17.Size = *(unsigned __int16 *)off_1800DC220;
    v18 = &unk_1800C10B8;
    v17.Reserved = 2;
    v19 = 27;
    v20 = 1;
    v9 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DC238, &v11, 0LL, 0LL, 3u, &v17);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
}
