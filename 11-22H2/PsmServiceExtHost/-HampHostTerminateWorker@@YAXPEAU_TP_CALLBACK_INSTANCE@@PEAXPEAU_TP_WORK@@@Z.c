/*
 * XREFs of ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001BB50
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18000EDA0 (-HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?HampHostQueryAndLogTerminatingProcessCount@@YAKPEAU_HAM_PROCESS_SNAPSHOT@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18001093C (-HampHostQueryAndLogTerminatingProcessCount@@YAKPEAU_HAM_PROCESS_SNAPSHOT@@W4_HAM_TERMINATE_REAS.c)
 *     ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017C8C (-HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017CDC (-HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x180017D78 (-HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800184AC (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001852C (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800186E0 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180032530 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x1800326D0 (-RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180034760 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@PEAPEAPEAX@Z @ 0x18004C2A8 (-HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@PEAPEAPEAX@Z.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18006EBE0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U3@U-$__ea_18006EBE0.c)
 */

void __fastcall HampHostTerminateWorker(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _TP_WORK *a3)
{
  DWORD v4; // edi
  __int64 v5; // rax
  unsigned int v6; // r14d
  unsigned __int64 v7; // r12
  int v8; // r13d
  DWORD v9; // esi
  _QWORD *Value; // rdi
  unsigned int v11; // edi
  unsigned int v12; // esi
  __int64 *v13; // rax
  __int64 v14; // rcx
  bool v15; // zf
  unsigned int v16; // eax
  int v17; // edx
  BOOL IsSuspendWaiter; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  _BYTE v24[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v25; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v26; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v28; // [rsp+68h] [rbp-98h]
  __int128 v29; // [rsp+70h] [rbp-90h] BYREF
  __int64 v30; // [rsp+80h] [rbp-80h]
  _QWORD v31[2]; // [rsp+88h] [rbp-78h] BYREF
  char *v32; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DESCRIPTOR v34; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE TlsValue[144]; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+150h] [rbp+50h] BYREF
  void *v37; // [rsp+160h] [rbp+60h]
  int v38; // [rsp+168h] [rbp+68h]
  int v39; // [rsp+16Ch] [rbp+6Ch]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+170h] [rbp+70h] BYREF
  void *v41; // [rsp+180h] [rbp+80h]
  int v42; // [rsp+188h] [rbp+88h]
  int v43; // [rsp+18Ch] [rbp+8Ch]
  unsigned __int64 *v44; // [rsp+190h] [rbp+90h]
  __int64 v45; // [rsp+198h] [rbp+98h]
  _BYTE *v46; // [rsp+1A0h] [rbp+A0h]
  __int64 v47; // [rsp+1A8h] [rbp+A8h]

  memset_0(TlsValue, 0, 0x88uLL);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, TlsValue);
  }
  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 0x40) != 0 && (qword_1800DB230 & 0x40) == qword_1800DB230 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DB220;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800DB220;
    v37 = &unk_1800BF762;
    UserData.Reserved = 2;
    v38 = 24;
    v39 = 1;
    v25 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DB238, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  if ( a2 )
    v5 = (__int64)a2 - 32;
  else
    v5 = 32LL;
  v6 = 0;
  v28 = *(_QWORD *)v5;
  v25 = 0;
  RtlQueryUnbiasedInterruptTime(v31);
  v29 = 0LL;
  v30 = 0LL;
  v7 = v31[0] / 0x2710uLL;
  RmpAcquireGlobalLock();
  v8 = RmHamHostReferenceUnsafe(a2);
  RmpReleaseGlobalLock();
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v9) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(a2);
  *((_DWORD *)a2 + 2) = GetCurrentThreadId();
  v11 = *((unsigned __int16 *)a2 + 332);
  v12 = HIWORD(*((_DWORD *)a2 + 166)) & 3;
  HampHostStartProcessPresenceChange(a2);
  if ( v8 && HampHostShouldTerminate(a2) )
  {
    if ( (v11 & 0xFFFFFF00) == 0x700 )
      HampHostInvalidateActivities(a2, v11, 0LL, 1);
    if ( HampLockTrackerId != -1 )
    {
      v13 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v14 = *v13;
      if ( (*v13 & 2) == 0 )
        __int2c();
      v15 = v13[2]-- == 1;
      if ( v15 )
        *v13 = v14 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    *((_DWORD *)a2 + 2) = 0;
    RtlReleaseSRWLockExclusive(a2);
    if ( (*((_QWORD *)a2 + 83) & 0x2000000000000LL) != 0
      && (RmHamHostGetProcessesInfo(
            (struct _RM_HAM_ACTIVITY_HOST *)((char *)a2 - 64),
            0x1000u,
            1u,
            (struct _HAM_PROCESS_SNAPSHOT *)&v29) < 0
       || (v16 = HampHostQueryAndLogTerminatingProcessCount((__int64)&v29, v11), (unsigned int)v30 > v16)) )
    {
      HampHostTerminateWithProcessBoost((HANDLE *)a2, (struct _HAM_PROCESS_SNAPSHOT *)&v29);
    }
    else
    {
      if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 64LL) )
      {
        v26 = v11;
        v24[1] = v12;
        v23 = 624LL;
        if ( a2 )
          v23 = (__int64)a2 + 560;
        v24[0] = *(_BYTE *)v23;
        v31[1] = v28;
        v32 = (char *)a2 + 24;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
          &v32,
          &unk_1800BF907);
      }
      HampHostTerminateWithProcessBoost((HANDLE *)a2, (struct _HAM_PROCESS_SNAPSHOT *)&v29);
      v12 = 0;
      v11 = 0;
    }
    RtlQueryUnbiasedInterruptTime(&v27);
    HampHostNotifyZeroProcess(a2, v12, v11, (unsigned int)(v27 / 0x2710) - (unsigned int)v7, &v25);
    v6 = v25;
  }
  *((_QWORD *)a2 + 83) &= ~0x1000000000000uLL;
  RtlWakeAllConditionVariable((char *)a2 + 696);
  IsSuspendWaiter = HampHostIsSuspendWaiter(a2, v17);
  *((_QWORD *)a2 + 83) &= ~0x800000000uLL;
  HampHostCheckUpdateSuspendWaitState(a2, IsSuspendWaiter, v19, v20);
  if ( HampLockTrackerId != -1 )
  {
    v21 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v22 = *v21;
    if ( (*v21 & 2) == 0 )
      __int2c();
    v15 = v21[2]-- == 1;
    if ( v15 )
      *v21 = v22 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a2 + 2) = 0;
  RtlReleaseSRWLockExclusive(a2);
  HampProcessSnapshotCleanup((struct _HAM_PROCESS_SNAPSHOT *)&v29, 0LL);
  if ( v6 )
  {
    RmpAcquireGlobalLock();
    v15 = (*((_QWORD *)a2 + 75))-- == 1LL;
    if ( v15 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)a2 - 64));
    RmpReleaseGlobalLock();
  }
  if ( v8 )
  {
    RmpAcquireGlobalLock();
    v15 = (*((_QWORD *)a2 + 75))-- == 1LL;
    if ( v15 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)a2 - 64));
    RmpReleaseGlobalLock();
  }
  RmpObjectRelease((struct _RM_HAM_ACTIVITY_HOST *)((char *)a2 - 64));
  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 8) != 0 && (qword_1800DB230 & 8) == qword_1800DB230 )
  {
    v27 = v28;
    v24[0] = v8;
    v46 = v24;
    v44 = &v27;
    *(_DWORD *)&v34.Level = 516;
    v40.Ptr = (ULONGLONG)off_1800DB220;
    v47 = 1LL;
    v45 = 8LL;
    *(_DWORD *)&v34.Id = 184549376;
    v34.Keyword = 8LL;
    v40.Size = *(unsigned __int16 *)off_1800DB220;
    v41 = &unk_1800BF895;
    v40.Reserved = 2;
    v42 = 53;
    v43 = 1;
    v26 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DB238, &v34, 0LL, 0LL, 4u, &v40);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
}
