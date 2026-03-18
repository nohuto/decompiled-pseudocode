/*
 * XREFs of rimDoProcessAnyPointerDeviceInput @ 0x1C01AEB68
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C01ADB64 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0037FE8 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0038050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_i @ 0x1C00E626A (WPP_RECORDER_AND_TRACE_SF_i.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0188460 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C01A62A0 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C01A6AF4 (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C01A6D30 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C01AE834 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimExtractFrameInfoAndAbandonIncompleteFrame @ 0x1C01AF8C0 (rimExtractFrameInfoAndAbandonIncompleteFrame.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01B198C (rimProcessMissingPointerDeviceContacts.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C01B1EB4 (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C01B2140 (rimProcessPointerDeviceContact.c)
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C01B2A14 (rimUpdatePointerDeviceFrameScanTime.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimDoProcessAnyPointerDeviceInput(struct RawInputManagerObject *a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // r14d
  __int64 v9; // r12
  PDEVICE_OBJECT v10; // rcx
  unsigned int v11; // r13d
  char v12; // di
  LARGE_INTEGER PerformanceCounter; // rbx
  int v14; // r8d
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned __int64 v17; // rdx
  int v18; // r8d
  __int64 v19; // r14
  int v20; // edx
  int v21; // r8d
  PDEVICE_OBJECT v22; // rcx
  __int16 v23; // ax
  unsigned int v24; // r14d
  int v25; // r15d
  unsigned __int16 v26; // r13
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // r8
  bool v33; // zf
  unsigned int v34; // [rsp+50h] [rbp-29h] BYREF
  int v35; // [rsp+54h] [rbp-25h] BYREF
  int v36; // [rsp+58h] [rbp-21h] BYREF
  int v37; // [rsp+5Ch] [rbp-1Dh] BYREF
  int v38; // [rsp+60h] [rbp-19h] BYREF
  __int64 v39; // [rsp+68h] [rbp-11h]
  __int64 v40; // [rsp+70h] [rbp-9h]
  __int64 v41; // [rsp+78h] [rbp-1h]
  __int64 *v42; // [rsp+80h] [rbp+7h] BYREF
  __int64 *v43[9]; // [rsp+88h] [rbp+Fh] BYREF
  int v45; // [rsp+E8h] [rbp+6Fh] BYREF
  int v46; // [rsp+F0h] [rbp+77h]
  int v47; // [rsp+F8h] [rbp+7Fh] BYREF

  v3 = (__int64)a1;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v42, "ProcessPointerInput", 0LL);
  v6 = *(_QWORD *)(a2 + 456);
  v7 = *(_QWORD *)(a2 + 472);
  v8 = *(_DWORD *)(a2 + 264);
  v40 = v7;
  v9 = *(unsigned __int16 *)(v6 + 44);
  v39 = *(_QWORD *)(v6 + 24);
  v10 = WPP_GLOBAL_Control;
  v11 = 0;
  v12 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v4) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v4) = 0;
  }
  LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v5,
      (_DWORD)gRimLog,
      4,
      1,
      14,
      (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
  if ( !*(_QWORD *)(v7 + 784) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v4, v5);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v16 = v8 % (unsigned int)v9;
  v15 = v8 / (unsigned int)v9;
  if ( !(v8 % (unsigned int)v9) )
  {
    if ( !v15 )
      goto LABEL_12;
    goto LABEL_22;
  }
  if ( v8 <= (unsigned int)v9 )
  {
    v15 = 1;
LABEL_22:
    v19 = v39;
    v41 = v15;
    while ( 1 )
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        v43,
        "ProcessPointerInputReport",
        (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v42);
      v36 = 0;
      LOWORD(v45) = 0;
      v47 = 0;
      v34 = 0;
      v35 = 0;
      v38 = 0;
      v37 = 0;
      v46 = 0;
      if ( (int)rimExtractFrameInfoAndAbandonIncompleteFrame(
                  v3,
                  a2,
                  v19,
                  v9,
                  (__int64)&v47,
                  (__int64)&v34,
                  (__int64)&v35,
                  (__int64)&v38,
                  (__int64)&v37,
                  (__int64)&v45) >= 0 )
      {
        if ( !v35 )
          goto LABEL_56;
        rimUpdatePointerDeviceFrameScanTime(v3, a2, v19, (unsigned int)v9);
        if ( v47 )
        {
          if ( (unsigned int)RIMStartPointerDeviceFrame(v3, a2, PerformanceCounter.QuadPart) )
          {
            if ( *(_DWORD *)(v40 + 24) == 7 )
              rimProcessPointerDeviceButtonContact(v3, a2, v19, v9, 0);
LABEL_56:
            RIMStoreRawDataInPointerDeviceFrame(v3, a2, v19, v9, &v36);
            v24 = v34;
            v25 = 0;
            if ( v34 )
            {
              v26 = v45;
              while ( 1 )
              {
                v45 = 0;
                v34 = 0;
                rimProcessPointerDeviceContact((_DWORD)a1, a2, v39, v9, v26, v36, (__int64)&v45, (__int64)&v34);
                if ( v37 )
                {
                  if ( v45 )
                    break;
                }
                v29 = v46;
                v30 = v40;
                if ( v34 )
                  v29 = 1;
                v46 = v29;
                if ( (*(_DWORD *)(v40 + 360) & 2) != 0 )
                {
                  v26 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v40 + 760) + 24LL) + 8LL * v26 + 4);
                }
                else
                {
                  if ( v47 != 1 )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v27, v28);
                  if ( v24 != 1 )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v27, v28);
                }
                if ( ++v25 >= v24 )
                {
                  v11 = v46;
                  goto LABEL_70;
                }
              }
              v11 = v46;
              v31 = 1;
            }
            else
            {
LABEL_70:
              v31 = v38;
            }
            v3 = (__int64)a1;
            if ( v31 )
            {
              rimProcessMissingPointerDeviceContacts(a1, a2, v11);
              RIMAbArbitratePointerDeviceFrame(a1, a2, v32);
              RIMCompletePointerDeviceFrame(a1, (struct RIMDEV *)a2, 0LL);
            }
            v19 = v39;
LABEL_74:
            v11 = 0;
            goto LABEL_75;
          }
          v22 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            v11 = 0;
            LOBYTE(v20) = 0;
          }
          else
          {
            LOBYTE(v20) = 1;
            v11 = 0;
          }
          LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)v20 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_75;
          v23 = 18;
        }
        else
        {
          if ( *(_DWORD *)(v40 + 24) == 7 )
          {
            rimCreateAndProcessPointerDeviceButtonOnlyFrame(
              (struct RawInputManagerObject *)v3,
              (struct RIMDEV *)a2,
              v19,
              v9,
              PerformanceCounter.QuadPart);
            goto LABEL_74;
          }
          v22 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            v11 = 0;
            LOBYTE(v20) = 0;
          }
          else
          {
            LOBYTE(v20) = 1;
            v11 = 0;
          }
          LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)v20 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_75;
          v23 = 17;
        }
      }
      else
      {
        v22 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v11 = 0;
          LOBYTE(v20) = 0;
        }
        else
        {
          LOBYTE(v20) = 1;
          v11 = 0;
        }
        LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v20 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_75;
        v23 = 16;
      }
      WPP_RECORDER_AND_TRACE_SF_(
        v22->AttachedDevice,
        v20,
        v21,
        (_DWORD)gRimLog,
        4,
        1,
        v23,
        (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
LABEL_75:
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v43);
      v19 += v9;
      v33 = v41-- == 1;
      v39 = v19;
      if ( v33 )
        goto LABEL_12;
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v16) = 0;
  }
  if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      v16,
      v14,
      (_DWORD)gRimLog,
      4,
      1,
      15,
      (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids,
      v8,
      v9);
  }
LABEL_12:
  v17 = (unsigned __int64)(1000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart))
      % *(_QWORD *)(v3 + 744);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v12 = 0;
  }
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = v12;
    LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_i(WPP_GLOBAL_Control->AttachedDevice, v17, v18, (_DWORD)WPP_GLOBAL_Control, 4);
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v42);
}
