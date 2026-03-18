/*
 * XREFs of W32kEtwEnableCallback @ 0x1C00B53AC
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C00B52B0 (McGenControlCallbackV2.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0019FB0 (OpenCacheKeyEx.c)
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0CTempW32TlsForThread@@QEAA@XZ @ 0x1C0029CE8 (--0CTempW32TlsForThread@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     ??1CTempW32TlsForThread@@QEAA@XZ @ 0x1C0047598 (--1CTempW32TlsForThread@@QEAA@XZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C014BCC8 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C023F0CC (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall W32kEtwEnableCallback(struct _GUID *a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // edi
  unsigned int v11; // esi
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  struct tagTHREADINFO **v15; // rbx
  struct tagTHREADINFO *v16; // rbx
  __int64 v17; // rcx
  void *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  void *v21; // rbx
  __int64 v22; // r8
  __int64 v23; // r9
  LONGLONG v24; // rcx
  __int64 v25; // rdx
  LARGE_INTEGER *v26; // rbx
  unsigned int v27; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  struct tagKERNELHANDLETABLEENTRY *v31; // rax
  __int64 v32; // rcx
  __int64 *v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdx
  LARGE_INTEGER *v36; // rbx
  struct tagTHREADINFO **v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  struct tagTHREADINFO *v42; // rbx
  __int64 v43; // rax
  struct tagKERNELHANDLETABLEENTRY *v44; // rax
  __int64 v45; // rcx
  __int64 *v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rdx
  LARGE_INTEGER *v52; // rbx
  struct tagTHREADINFO **v53; // rbx
  struct tagTHREADINFO *v54; // rbx
  __int64 v55; // rcx
  unsigned int v56; // r8d
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // r8
  struct tagKERNELHANDLETABLEENTRY *v60; // rax
  __int64 v61; // rcx
  __int64 *v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  int v67; // [rsp+38h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+3Ch] [rbp-CCh] BYREF
  _BYTE v69[8]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE DestinationString_8[28]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v71; // [rsp+70h] [rbp-98h] BYREF
  int v72; // [rsp+78h] [rbp-90h]
  GUID v73; // [rsp+7Ch] [rbp-8Ch] BYREF
  __int64 v74; // [rsp+90h] [rbp-78h] BYREF
  int v75; // [rsp+98h] [rbp-70h]
  GUID v76; // [rsp+9Ch] [rbp-6Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+B0h] [rbp-58h] BYREF
  int *v78; // [rsp+D0h] [rbp-38h]
  __int64 v79; // [rsp+D8h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+E0h] [rbp-28h] BYREF
  int *v81; // [rsp+100h] [rbp-8h]
  __int64 v82; // [rsp+108h] [rbp+0h]
  struct _EVENT_DATA_DESCRIPTOR v83; // [rsp+110h] [rbp+8h] BYREF
  int *v84; // [rsp+130h] [rbp+28h]
  __int64 v85; // [rsp+138h] [rbp+30h]
  struct _EVENT_DATA_DESCRIPTOR v86; // [rsp+140h] [rbp+38h] BYREF
  ULONG *p_ResultLength; // [rsp+160h] [rbp+58h]
  __int64 v88; // [rsp+168h] [rbp+60h]
  struct _EVENT_DATA_DESCRIPTOR v89; // [rsp+170h] [rbp+68h] BYREF
  ULONG *v90; // [rsp+190h] [rbp+88h]
  __int64 v91; // [rsp+198h] [rbp+90h]
  struct _EVENT_DATA_DESCRIPTOR v92; // [rsp+1A0h] [rbp+98h] BYREF
  ULONG *v93; // [rsp+1C0h] [rbp+B8h]
  __int64 v94; // [rsp+1C8h] [rbp+C0h]
  struct _EVENT_DATA_DESCRIPTOR v95; // [rsp+1D0h] [rbp+C8h] BYREF
  ULONG *v96; // [rsp+1F0h] [rbp+E8h]
  __int64 v97; // [rsp+1F8h] [rbp+F0h]
  struct _EVENT_DATA_DESCRIPTOR v98; // [rsp+200h] [rbp+F8h] BYREF
  ULONG *v99; // [rsp+220h] [rbp+118h]
  __int64 v100; // [rsp+228h] [rbp+120h]
  struct _EVENT_DATA_DESCRIPTOR v101; // [rsp+230h] [rbp+128h] BYREF
  ULONG *v102; // [rsp+250h] [rbp+148h]
  __int64 v103; // [rsp+258h] [rbp+150h]
  _BYTE KeyValueInformation[12]; // [rsp+260h] [rbp+158h] BYREF
  unsigned int v105; // [rsp+26Ch] [rbp+164h]
  _BYTE v106[12]; // [rsp+278h] [rbp+170h] BYREF
  unsigned int v107; // [rsp+284h] [rbp+17Ch]

  CTempW32TlsForThread::CTempW32TlsForThread((CTempW32TlsForThread *)v69);
  if ( a2 <= 1 )
  {
    v10 = 0;
    v11 = 0;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v8, v7, v9);
    else
      CurrentThreadWin32Thread = 0LL;
    *(_QWORD *)DestinationString_8 = CurrentThreadWin32Thread;
    *(_DWORD *)&DestinationString_8[8] = 1;
    if ( CurrentThreadWin32Thread
      && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(*(_QWORD *)DestinationString_8 + 48LL)) )
    {
      EtwActivityIdControl(3u, (LPGUID)&DestinationString_8[12]);
      if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        v79 = 4LL;
        v67 = *(_DWORD *)&DestinationString_8[8] == 1;
        v78 = &v67;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD79,
          (const GUID *)&DestinationString_8[12],
          0LL,
          3u,
          &v77);
      }
    }
    if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
      || (v13 = W32kEtwEnabledKeyword, v14 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
      && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
      || (v14 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x200000010000000LL) != 0
      && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
    {
      v26 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8, v13, v14);
      if ( v26 )
        v26[1] = KeQueryPerformanceCounter(0LL);
    }
    v15 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    EtwTraceAcquiredExclusiveUserCrit();
    if ( v15 )
    {
      v16 = *v15;
      if ( IsThreadCrossSessionAttached() )
        v16 = 0LL;
      if ( *(_QWORD *)DestinationString_8 )
      {
        v17 = *(unsigned int *)(*(_QWORD *)DestinationString_8 + 24LL);
        if ( *(_DWORD *)(*(_QWORD *)DestinationString_8 + 48LL) || (int)v17 > 0 )
        {
          *(_DWORD *)(*(_QWORD *)DestinationString_8 + 44LL) = 1;
          *(_OWORD *)(*(_QWORD *)DestinationString_8 + 28LL) = *(_OWORD *)&DestinationString_8[12];
          if ( (unsigned int)dword_1C028EE70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v82 = 4LL;
              v67 = *(_DWORD *)&DestinationString_8[8] == 1;
              v81 = &v67;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD22,
                (const GUID *)&DestinationString_8[12],
                0LL,
                3u,
                &v80);
              v27 = dword_1C028EE70;
            }
            if ( v27 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v85 = 4LL;
              v67 = *(_DWORD *)&DestinationString_8[8] == 1;
              v84 = &v67;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD4F,
                (const GUID *)&DestinationString_8[12],
                0LL,
                3u,
                &v83);
            }
          }
        }
      }
      gptiCurrent = v16;
      if ( v16 )
      {
        *((_DWORD *)v16 + 377) = 1;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
            && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
            && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v33 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v31 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              v32 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              gpSharedUserCritDeferredUnlockListHead = v31;
              if ( !*(_DWORD *)(v32 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v29, v30);
                v32 = *v33;
              }
              HMUnlockObject(v32);
            }
          }
        }
      }
    }
    else
    {
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)DestinationString_8);
      gptiCurrent = 0LL;
    }
    *(_OWORD *)DestinationString_8 = 0LL;
    ResultLength = 0;
    v67 = gdwPolicyFlags;
    while ( 1 )
    {
      v18 = OpenCacheKeyEx(0LL, 2LL, 131097LL, &v67);
      if ( !v18 )
        break;
      RtlInitUnicodeString((PUNICODE_STRING)DestinationString_8, L"ThreadUnresponsiveLogTimeout");
      if ( ZwQueryValueKey(
             v18,
             (PUNICODE_STRING)DestinationString_8,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength) >= 0 )
      {
        v10 = v105;
        v67 = 0;
      }
      else if ( !v67 )
      {
        v10 = 200;
      }
      ZwClose(v18);
      if ( !v67 )
        goto LABEL_20;
    }
    v10 = 200;
LABEL_20:
    *(_OWORD *)DestinationString_8 = 0LL;
    ResultLength = 0;
    v67 = gdwPolicyFlags;
    while ( 1 )
    {
      v21 = OpenCacheKeyEx(0LL, 2LL, 131097LL, &v67);
      if ( !v21 )
        break;
      RtlInitUnicodeString((PUNICODE_STRING)DestinationString_8, L"UserCritAcquireDelayLogTimeout");
      if ( ZwQueryValueKey(
             v21,
             (PUNICODE_STRING)DestinationString_8,
             KeyValuePartialInformation,
             v106,
             0x14u,
             &ResultLength) >= 0 )
      {
        v11 = v107;
        v67 = 0;
      }
      else if ( !v67 )
      {
        v11 = 500;
      }
      ZwClose(v21);
      if ( !v67 )
        goto LABEL_26;
    }
    v11 = 500;
LABEL_26:
    UserSessionSwitchLeaveCrit(v20, v19, v22, v23);
    if ( v10 > 0xC8 )
    {
      W32kEtwMessageCheckDelayTimeoutMs = v10;
      W32kEtwInputProcessDelayTimeoutMs = v10;
    }
    if ( v11 > 0x1F4 )
      W32kEtwUserCritAcquireDelayTimeoutus = v11;
    if ( a2 == 1 )
    {
      v24 = gliQpcFreq.QuadPart * W32kEtwUserCritAcquireDelayTimeoutus;
      v9 = 3600 * gliQpcFreq.QuadPart;
      v25 = v24 / 1000000;
    }
    else
    {
      v9 = -1LL;
      v25 = -1LL;
    }
    W32kEtwUserCritAcquireDelayTimeoutQPC = v25;
    v7 = 0x8000000000040000uLL;
    W32KEtwUserCritTelemetryThrottleQPC = v9;
    W32kEtwEnabledKeyword = a4;
    if ( ((a4 & 0x8000000000040000uLL) == 0
       || (unsigned __int8)(byte_1C028DB38 - 1) <= 2u
       || (qword_1C028DB20 & 0x8000000000040000uLL) == 0
       || (qword_1C028DB28 & 0x8000000000040000uLL) != qword_1C028DB28)
      && W32kEtwWaitCursorActiveType )
    {
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        v34 = PsGetCurrentThreadWin32Thread(v24, 0x8000000000040000uLL, v9);
      else
        v34 = 0LL;
      v71 = v34;
      v72 = 1;
      if ( v34 && (*(int *)(v34 + 24) > 0 || *(_DWORD *)(v71 + 48)) )
      {
        EtwActivityIdControl(3u, &v73);
        if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
        {
          v88 = 4LL;
          ResultLength = v72 == 1;
          p_ResultLength = &ResultLength;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C028EE70,
            (unsigned __int8 *)dword_1C025AD79,
            &v73,
            0LL,
            3u,
            &v86);
        }
      }
      if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
        || (v35 = W32kEtwEnabledKeyword, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
        && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
        || (v9 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x200000010000000LL) != 0
        && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
      {
        v36 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v24, v35, v9);
        if ( v36 )
          v36[1] = KeQueryPerformanceCounter(0LL);
      }
      v37 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      EtwTraceAcquiredExclusiveUserCrit();
      if ( v37 )
      {
        v42 = *v37;
        if ( IsThreadCrossSessionAttached() )
          v42 = 0LL;
        if ( v71 )
        {
          v39 = *(unsigned int *)(v71 + 24);
          if ( *(_DWORD *)(v71 + 48) || (int)v39 > 0 )
          {
            *(_DWORD *)(v71 + 44) = 1;
            *(GUID *)(v71 + 28) = v73;
            v40 = (unsigned int)dword_1C028EE70;
            if ( (unsigned int)dword_1C028EE70 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v91 = 4LL;
                ResultLength = v72 == 1;
                v90 = &ResultLength;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD22,
                  &v73,
                  0LL,
                  3u,
                  &v89);
                v40 = (unsigned int)dword_1C028EE70;
              }
              if ( (unsigned int)v40 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v94 = 4LL;
                ResultLength = v72 == 1;
                v93 = &ResultLength;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD4F,
                  &v73,
                  0LL,
                  3u,
                  &v92);
              }
            }
          }
        }
        gptiCurrent = v42;
        if ( v42 )
        {
          *((_DWORD *)v42 + 377) = 1;
          v43 = PsGetCurrentProcessWin32Process(v39);
          if ( v43 )
          {
            if ( (*(_DWORD *)(v43 + 12) & 0x8000) != 0 )
            {
              v39 = (__int64)gptiCurrent;
              if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
              {
                while ( 1 )
                {
                  v46 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                  if ( !gpSharedUserCritDeferredUnlockListHead )
                    break;
                  v44 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                  v45 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                  *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                  gpSharedUserCritDeferredUnlockListHead = v44;
                  if ( !*(_DWORD *)(v45 + 8) )
                  {
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v38, v40);
                    v45 = *v46;
                  }
                  HMUnlockObject(v45);
                }
              }
            }
          }
        }
      }
      else
      {
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v71);
        gptiCurrent = 0LL;
      }
      W32kEtwWaitCursorActiveType = 0;
      UserSessionSwitchLeaveCrit(v39, v38, v40, v41);
    }
  }
  if ( a2 == 2 )
  {
    EtwCaptureStateCallback();
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      v50 = PsGetCurrentThreadWin32Thread(v48, v47, v49);
    else
      v50 = 0LL;
    v74 = v50;
    v75 = 1;
    if ( v50 && (*(int *)(v50 + 24) > 0 || *(_DWORD *)(v74 + 48)) )
    {
      EtwActivityIdControl(3u, &v76);
      if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        v97 = 4LL;
        ResultLength = v75 == 1;
        v96 = &ResultLength;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD79,
          &v76,
          0LL,
          3u,
          &v95);
      }
    }
    if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
      || (v51 = W32kEtwEnabledKeyword, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
      && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
      || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x200000010000000LL) != 0
      && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
    {
      v52 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v48, v51, v49);
      if ( v52 )
        v52[1] = KeQueryPerformanceCounter(0LL);
    }
    v53 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    EtwTraceAcquiredExclusiveUserCrit();
    if ( v53 )
    {
      v54 = *v53;
      if ( IsThreadCrossSessionAttached() )
        v54 = 0LL;
      if ( v74 )
      {
        v55 = *(unsigned int *)(v74 + 24);
        if ( *(_DWORD *)(v74 + 48) || (int)v55 > 0 )
        {
          *(_DWORD *)(v74 + 44) = 1;
          *(GUID *)(v74 + 28) = v76;
          if ( (unsigned int)dword_1C028EE70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v100 = 4LL;
              ResultLength = v75 == 1;
              v99 = &ResultLength;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD22,
                &v76,
                0LL,
                3u,
                &v98);
              v56 = dword_1C028EE70;
            }
            if ( v56 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v103 = 4LL;
              ResultLength = v75 == 1;
              v102 = &ResultLength;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD4F,
                &v76,
                0LL,
                3u,
                &v101);
            }
          }
        }
      }
      gptiCurrent = v54;
      if ( v54 )
      {
        *((_DWORD *)v54 + 377) = 1;
        v57 = PsGetCurrentProcessWin32Process(v55);
        if ( v57 )
        {
          if ( (*(_DWORD *)(v57 + 12) & 0x8000) != 0
            && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
            && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v62 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v60 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              v61 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              gpSharedUserCritDeferredUnlockListHead = v60;
              if ( !*(_DWORD *)(v61 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v61, v58, v59);
                v61 = *v62;
              }
              HMUnlockObject(v61);
            }
          }
        }
      }
    }
    else
    {
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v74);
      gptiCurrent = 0LL;
    }
    CitEtwEnableCallback(a1, 2u, a4);
    UserSessionSwitchLeaveCrit(v64, v63, v65, v66);
  }
  CTempW32TlsForThread::~CTempW32TlsForThread((CTempW32TlsForThread *)v69, v7, v9);
}
