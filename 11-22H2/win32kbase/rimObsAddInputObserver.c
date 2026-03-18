/*
 * XREFs of rimObsAddInputObserver @ 0x1C01ACCEC
 * Callers:
 *     NtRIMAddInputObserver @ 0x1C01749F0 (NtRIMAddInputObserver.c)
 *     RIMAddInputObserver @ 0x1C0175940 (RIMAddInputObserver.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00665BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C0070578 (rimConvertUserToKernelEventHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C00749F8 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDDD @ 0x1C00B9CC8 (WPP_RECORDER_AND_TRACE_SF_DDDD.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x1C0191B04 (RawInputManagerInputObserverObjectCreate.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1C0191C68 (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimObsCheckForRegistrationConflicts @ 0x1C01AC5C4 (rimObsCheckForRegistrationConflicts.c)
 *     rimObsStartStopDeviceRead @ 0x1C01AF320 (rimObsStartStopDeviceRead.c)
 */

__int64 __fastcall rimObsAddInputObserver(
        __int64 a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        HANDLE *a9)
{
  PDEVICE_OBJECT v9; // rcx
  unsigned int v10; // r15d
  unsigned int v11; // r12d
  PDEVICE_OBJECT v13; // rcx
  __int16 v14; // ax
  __int64 v15; // rax
  _QWORD *v16; // rdx
  PDEVICE_OBJECT v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r14d
  __int64 v21; // rdx
  __int64 v22; // r8
  char v23; // dl
  PVOID v24; // r15
  __int64 v25; // rdx
  int v26; // r8d
  char v27; // dl
  __int16 v28; // ax
  __int64 v29; // rax
  char v30; // dl
  int v31; // [rsp+20h] [rbp-98h]
  int v32; // [rsp+28h] [rbp-90h]
  __int64 v33; // [rsp+40h] [rbp-78h]
  unsigned int v34; // [rsp+60h] [rbp-58h]
  HANDLE Handle; // [rsp+68h] [rbp-50h] BYREF
  PVOID Object; // [rsp+70h] [rbp-48h] BYREF
  unsigned int v38; // [rsp+C8h] [rbp+10h]
  void *v39; // [rsp+D0h] [rbp+18h]

  v39 = a3;
  v38 = a2;
  if ( !a8 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1066);
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = a7;
    v34 = a7;
    v11 = a6;
    WPP_RECORDER_AND_TRACE_SF_DDDD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (char)a3,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      v31,
      v32,
      0x3Cu,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
  }
  else
  {
    v10 = a7;
    v34 = a7;
    v11 = a6;
  }
  if ( v38 < 0x30 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        1,
        61,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
    }
    return 3221225507LL;
  }
  if ( !a1 )
  {
    v13 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(a2) = 0;
    }
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)a2 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225485LL;
    v14 = 62;
LABEL_57:
    WPP_RECORDER_AND_TRACE_SF_(
      v13->AttachedDevice,
      a2,
      (_DWORD)a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      3,
      1,
      v14,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
    return 3221225485LL;
  }
  if ( a5 > 2 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        1,
        63,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
        a5);
    }
    return 3221225485LL;
  }
  if ( a5 == 2 )
  {
    if ( !v10 || !v11 )
    {
      v13 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(a2) = 0;
      }
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)a2 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v14 = 64;
      goto LABEL_57;
    }
    if ( v11 == 7 || v11 == 1 && (v10 == 6 || v10 == 2) )
    {
      v13 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(a2) = 0;
      }
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)a2 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v14 = 65;
      goto LABEL_57;
    }
  }
  else
  {
    v11 = 0;
    v10 = 0;
    v34 = 0;
  }
  v15 = SGDGetUserSessionState(v9, a2, a3, a5);
  RIMLockExclusive(v15 + 256);
  if ( rimObsCheckForRegistrationConflicts(a8, a5, v11, v10) )
  {
    Handle = (HANDLE)-1LL;
    KeEnterCriticalRegion();
    v20 = RawInputManagerInputObserverObjectCreate(a4, v21, v22, a4, &Handle);
    KeLeaveCriticalRegion();
    if ( v20 < 0 )
    {
      v17 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v16) = 0;
      }
      LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_89;
      v28 = 70;
    }
    else
    {
      Object = 0LL;
      v20 = RawInputManagerInputObserverObjectResolveHandle((char *)Handle, (__int64)v16, a4, &Object);
      if ( v20 >= 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (v23 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v23 = 0;
        }
        if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v24 = Object;
          WPP_RECORDER_AND_TRACE_SF_qq(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v23,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
            4u,
            1u,
            0x42u,
            (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
            Handle,
            Object);
        }
        else
        {
          v24 = Object;
        }
        *((_DWORD *)v24 + 18) = a4;
        *((_QWORD *)v24 + 12) = a1;
        *((_DWORD *)v24 + 26) = v38;
        *((_DWORD *)v24 + 27) = a5;
        *((_DWORD *)v24 + 28) = v11;
        *((_DWORD *)v24 + 29) = v34;
        *((_DWORD *)v24 + 30) = a8;
        v20 = rimConvertUserToKernelEventHandle(v39, (void **)v24 + 10);
        if ( v20 < 0 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v25) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
          {
            LOBYTE(v25) = 0;
          }
          if ( (_BYTE)v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v25,
              v26,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              3,
              1,
              68,
              (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
          }
        }
        else
        {
          LOBYTE(v25) = 1;
          v20 = rimObsStartStopDeviceRead(v24, v25);
          if ( v20 < 0 )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (v27 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
            {
              v27 = 0;
            }
            if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v33) = v20;
              WPP_RECORDER_AND_TRACE_SF_d(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v27,
                WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
                3u,
                1u,
                0x43u,
                (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
                v33);
            }
          }
        }
        ObfDereferenceObject(v24);
        goto LABEL_89;
      }
      v17 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v16) = 0;
      }
      LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_89;
      v28 = 69;
    }
    WPP_RECORDER_AND_TRACE_SF_(
      v17->AttachedDevice,
      (_DWORD)v16,
      v18,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      3,
      1,
      v28,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
LABEL_89:
    if ( v20 < 0 )
    {
      if ( Handle != (HANDLE)-1LL )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          LOBYTE(v16) = 0;
        }
        if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v16,
            v18,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            3,
            1,
            72,
            (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
        }
        ObCloseHandle(Handle, a4);
      }
    }
    else if ( a4 )
    {
      v16 = a9;
      v17 = (PDEVICE_OBJECT)MmUserProbeAddress;
      if ( (unsigned __int64)a9 >= MmUserProbeAddress )
        v16 = (_QWORD *)MmUserProbeAddress;
      *v16 = Handle;
    }
    else
    {
      v17 = (PDEVICE_OBJECT)a9;
      *a9 = Handle;
    }
    goto LABEL_119;
  }
  v20 = -1073741823;
LABEL_119:
  v29 = SGDGetUserSessionState(v17, v16, v18, v19);
  *(_QWORD *)(v29 + 264) = 0LL;
  ExReleasePushLockExclusiveEx(v29 + 256, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v30 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v30 = 0;
  }
  if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v33) = v20;
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v30,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      1u,
      0x49u,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      v33);
  }
  return (unsigned int)v20;
}
