/*
 * XREFs of ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000F550
 * Callers:
 *     <none>
 * Callees:
 *     ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800044EC (-HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BB70 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x18000C5D8 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18000CEAC (-HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     CempLockTrackerMarkAcquired @ 0x18000E390 (CempLockTrackerMarkAcquired.c)
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800248A0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18002A648 (-HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18002A6D0 (-RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x18002D900 (-HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002D998 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002DACC (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002E04C (-HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?HampHostQueryAndLogTerminatingProcessCount@@YAKPEAU_HAM_PROCESS_SNAPSHOT@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18003B124 (-HampHostQueryAndLogTerminatingProcessCount@@YAKPEAU_HAM_PROCESS_SNAPSHOT@@W4_HAM_TERMINATE_REAS.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800790C4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U3@U-$_tlgWrapperByV.c)
 */

void __fastcall HampHostTerminateWorker(struct _TP_CALLBACK_INSTANCE *a1, _QWORD *a2, struct _TP_WORK *a3)
{
  __int64 v4; // r13
  int v5; // r15d
  int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // rdi
  unsigned int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // eax
  int v14; // edi
  unsigned int v15; // edx
  unsigned int IsSuspendWaiter; // eax
  __int64 v17; // rdx
  bool v18; // zf
  _BYTE v19[4]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v20; // [rsp+5Ch] [rbp-ACh]
  _DWORD v21[2]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v22[3]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+80h] [rbp-88h]
  _QWORD v24[2]; // [rsp+88h] [rbp-80h] BYREF
  char *v25; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v26; // [rsp+A0h] [rbp-68h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+A8h] [rbp-60h] BYREF
  EVENT_DESCRIPTOR v28; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v29[144]; // [rsp+C8h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+158h] [rbp+50h] BYREF
  void *v31; // [rsp+168h] [rbp+60h]
  int v32; // [rsp+170h] [rbp+68h]
  int v33; // [rsp+174h] [rbp+6Ch]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+178h] [rbp+70h] BYREF
  void *v35; // [rsp+188h] [rbp+80h]
  int v36; // [rsp+190h] [rbp+88h]
  int v37; // [rsp+194h] [rbp+8Ch]
  _QWORD *v38; // [rsp+198h] [rbp+90h]
  __int64 v39; // [rsp+1A0h] [rbp+98h]
  _BYTE *v40; // [rsp+1A8h] [rbp+A0h]
  __int64 v41; // [rsp+1B0h] [rbp+A8h]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v29);
  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 0x40) != 0 && (qword_1800DC230 & 0x40) == qword_1800DC230 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DC220;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800DC220;
    v31 = &unk_1800C0ADC;
    UserData.Reserved = 2;
    v32 = 24;
    v33 = 1;
    v20 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DC238, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v4 = *(a2 - 4);
  v5 = 0;
  v21[0] = 0;
  RtlQueryUnbiasedInterruptTime(v24);
  *(_OWORD *)&v22[1] = 0LL;
  v22[0] = v24[0] / 0x2710uLL;
  v23 = 0LL;
  RmpAcquireGlobalLock();
  v6 = RmHamHostReferenceUnsafe((struct _RM_HAM_ACTIVITY_HOST *)a2);
  RmpReleaseGlobalLock();
  CempLockTrackerMarkAcquired(HampLockTrackerId, v7, 1u, 0);
  RtlAcquireSRWLockExclusive(a2);
  *((_DWORD *)a2 + 2) = GetCurrentThreadId();
  v8 = a2[83] >> 16;
  v9 = (unsigned __int16)*((_DWORD *)a2 + 166);
  v20 = WORD1(a2[83]) & 3;
  HampHostStartProcessPresenceChange((struct _RM_HAM_ACTIVITY_HOST *)a2);
  if ( v6 && HampHostShouldTerminate((struct _RM_HAM_ACTIVITY_HOST *)a2) )
  {
    if ( (v9 & 0xFFFFFF00) == 0x700 )
      HampHostInvalidateActivities(a2, v9, 0LL, 1LL);
    CempLockTrackerMarkReleased(HampLockTrackerId, v10, 1LL);
    *((_DWORD *)a2 + 2) = 0;
    RtlReleaseSRWLockExclusive(a2);
    if ( (a2[83] & 0x2000000000000LL) != 0
      && ((int)RmHamHostGetProcessesInfo(
                 (struct _RM_ACTIVITY_HOST *)(a2 - 8),
                 0x1000u,
                 1u,
                 (struct _HAM_PROCESS_SNAPSHOT *)&v22[1]) < 0
       || (v13 = HampHostQueryAndLogTerminatingProcessCount(&v22[1], v9), (unsigned int)v23 > v13)) )
    {
      v14 = 1;
    }
    else
    {
      if ( (unsigned int)dword_1800DC218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DC218, 64LL, v11, v12) )
      {
        v19[0] = *((_BYTE *)a2 + 560);
        v21[1] = v9;
        v25 = (char *)(a2 + 3);
        v19[1] = v8 & 3;
        v24[1] = v4;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
          &v25,
          &unk_1800C0C14);
      }
      v14 = 0;
    }
    HampHostTerminateWithProcessBoost((HANDLE *)a2, (struct _HAM_PROCESS_SNAPSHOT *)&v22[1]);
    RtlQueryUnbiasedInterruptTime(&v26);
    HampHostNotifyZeroProcess((__int64)a2, v14 != 0 ? v20 : 0, v14 != 0 ? v9 : 0, v26 / 0x2710 - LODWORD(v22[0]), v21);
    v5 = v21[0];
  }
  a2[83] &= ~0x1000000000000uLL;
  RtlWakeAllConditionVariable(a2 + 87);
  IsSuspendWaiter = HampHostIsSuspendWaiter((struct _RM_HAM_ACTIVITY_HOST *)a2, v15);
  a2[83] &= ~0x800000000uLL;
  HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)a2, IsSuspendWaiter);
  CempLockTrackerMarkReleased(HampLockTrackerId, v17, 1LL);
  *((_DWORD *)a2 + 2) = 0;
  RtlReleaseSRWLockExclusive(a2);
  HampProcessSnapshotCleanup((struct _HAM_PROCESS_SNAPSHOT *)&v22[1]);
  if ( v5 )
  {
    RmpAcquireGlobalLock();
    v18 = a2[75]-- == 1LL;
    if ( v18 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(a2 - 8));
    RmpReleaseGlobalLock();
  }
  if ( v6 )
  {
    RmpAcquireGlobalLock();
    v18 = a2[75]-- == 1LL;
    if ( v18 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(a2 - 8));
    RmpReleaseGlobalLock();
  }
  RmpObjectRelease(a2 - 8);
  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 8) != 0 && (qword_1800DC230 & 8) == qword_1800DC230 )
  {
    v40 = v19;
    v39 = 8LL;
    v38 = v22;
    *(_DWORD *)&v28.Level = 516;
    v34.Ptr = (ULONGLONG)off_1800DC220;
    v28.Keyword = 8LL;
    v19[0] = v6;
    v22[0] = v4;
    v41 = 1LL;
    *(_DWORD *)&v28.Id = 184549376;
    v34.Size = *(unsigned __int16 *)off_1800DC220;
    v35 = &unk_1800C0BA2;
    v34.Reserved = 2;
    v36 = 53;
    v37 = 1;
    v20 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DC238, &v28, 0LL, 0LL, 4u, &v34);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
}
