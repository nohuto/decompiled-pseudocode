/*
 * XREFs of rimDoProcessAnyPointerDeviceInput @ 0x1C01A8348
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C01A7080 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000A528 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0052D0C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0052D50 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_i @ 0x1C00E0B3A (WPP_RECORDER_AND_TRACE_SF_i.c)
 *     rimExtractFrameInfoAndAbandonIncompleteFrame @ 0x1C00E3070 (rimExtractFrameInfoAndAbandonIncompleteFrame.c)
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C00E3422 (rimUpdatePointerDeviceFrameScanTime.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C017D324 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C019F844 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C01A005C (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C01A034C (RIMStoreRawDataInPointerDeviceFrame.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C01A7EF8 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01AB398 (rimProcessMissingPointerDeviceContacts.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C01AB8FC (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C01ABBB4 (rimProcessPointerDeviceContact.c)
 */

void __fastcall rimDoProcessAnyPointerDeviceInput(struct RawInputManagerObject *a1, LARGE_INTEGER *a2)
{
  int v3; // edx
  int v4; // r8d
  LARGE_INTEGER v5; // rax
  LARGE_INTEGER v6; // rbx
  unsigned int LowPart; // esi
  __int64 v8; // r12
  __int64 v9; // r15
  unsigned int v10; // r13d
  char v11; // di
  LARGE_INTEGER PerformanceCounter; // rbx
  unsigned int v13; // eax
  int v14; // r9d
  struct RawInputManagerObject *v15; // rsi
  int v16; // edx
  int v17; // r8d
  PDEVICE_OBJECT v18; // rcx
  __int16 v19; // ax
  unsigned int v20; // esi
  unsigned int v21; // r12d
  unsigned __int16 v22; // r13
  int v23; // eax
  int v24; // eax
  __int64 v25; // r8
  bool v26; // zf
  char v27; // dl
  __int64 v28; // [rsp+28h] [rbp-61h]
  unsigned int v29; // [rsp+50h] [rbp-39h] BYREF
  int v30; // [rsp+54h] [rbp-35h] BYREF
  int v31; // [rsp+5Ch] [rbp-2Dh] BYREF
  _DWORD v32[3]; // [rsp+60h] [rbp-29h] BYREF
  int v33; // [rsp+6Ch] [rbp-1Dh] BYREF
  __int64 v34; // [rsp+70h] [rbp-19h]
  LARGE_INTEGER v35; // [rsp+78h] [rbp-11h]
  __int64 v36; // [rsp+80h] [rbp-9h]
  __int64 *v37; // [rsp+88h] [rbp-1h] BYREF
  __int64 *v38[10]; // [rsp+90h] [rbp+7h] BYREF
  int v40; // [rsp+F8h] [rbp+6Fh] BYREF
  int v41; // [rsp+100h] [rbp+77h]
  int v42; // [rsp+108h] [rbp+7Fh] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v37, "ProcessPointerInput", 0LL);
  v5 = a2[57];
  v6 = a2[59];
  LowPart = a2[33].LowPart;
  v35 = v6;
  v8 = *(_QWORD *)(v5.QuadPart + 24);
  v9 = *(unsigned __int16 *)(v5.QuadPart + 44);
  v34 = v8;
  v10 = 0;
  v11 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v3) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v3) = 0;
  }
  if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      v4,
      (_DWORD)gRimLog,
      4,
      1,
      14,
      (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids);
  }
  if ( !*(_QWORD *)(v6.QuadPart + 784) )
  {
    v40 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 117);
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( !(LowPart % (unsigned int)v9) )
  {
    v13 = LowPart / (unsigned int)v9;
    if ( !(LowPart / (unsigned int)v9) )
      goto LABEL_12;
    goto LABEL_22;
  }
  if ( LowPart <= (unsigned int)v9 )
  {
    v13 = 1;
LABEL_22:
    v15 = a1;
    v36 = v13;
    while ( 1 )
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        v38,
        "ProcessPointerInputReport",
        (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v37);
      v31 = 0;
      LOWORD(v40) = 0;
      v42 = 0;
      v29 = 0;
      v30 = 0;
      v33 = 0;
      v32[0] = 0;
      v41 = 0;
      if ( (int)rimExtractFrameInfoAndAbandonIncompleteFrame(
                  (int)v15,
                  (__int64)a2,
                  v8,
                  v9,
                  &v42,
                  &v29,
                  &v30,
                  &v33,
                  v32,
                  &v40) >= 0 )
      {
        if ( !v30 )
          goto LABEL_56;
        rimUpdatePointerDeviceFrameScanTime((__int64)a2, v8, v9);
        if ( v42 )
        {
          if ( (unsigned int)RIMStartPointerDeviceFrame((__int64)v15, (__int64)a2, PerformanceCounter.QuadPart) )
          {
            if ( *(_DWORD *)(v35.QuadPart + 24) == 7 )
              rimProcessPointerDeviceButtonContact((_DWORD)v15, (_DWORD)a2, v8, v9, 0);
LABEL_56:
            RIMStoreRawDataInPointerDeviceFrame((__int64)v15, (__int64)a2, v8, v9, &v31);
            v20 = v29;
            v21 = 0;
            if ( v29 )
            {
              v22 = v40;
              do
              {
                v40 = 0;
                v29 = 0;
                rimProcessPointerDeviceContact((_DWORD)a1, (_DWORD)a2, v34, v9, v22, v31, (__int64)&v40, (__int64)&v29);
                if ( v32[0] && v40 )
                {
                  v10 = v41;
                  v24 = 1;
                  goto LABEL_73;
                }
                v23 = v41;
                if ( v29 )
                  v23 = 1;
                v41 = v23;
                if ( (*(_DWORD *)(v35.QuadPart + 360) & 2) != 0 )
                {
                  v22 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v35.QuadPart + 760) + 24LL) + 8LL * v22 + 4);
                }
                else
                {
                  if ( v42 != 1 )
                  {
                    v32[1] = 0x20000;
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 251);
                  }
                  if ( v20 != 1 )
                  {
                    v32[2] = 0x20000;
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 252);
                  }
                }
                ++v21;
              }
              while ( v21 < v20 );
              v10 = v41;
            }
            v24 = v33;
LABEL_73:
            v15 = a1;
            if ( v24 )
            {
              rimProcessMissingPointerDeviceContacts(a1, a2, v10);
              RIMAbArbitratePointerDeviceFrame(a1, (__int64)a2, v25);
              RIMCompletePointerDeviceFrame((HANDLE *)a1, a2, 0);
            }
            v8 = v34;
LABEL_76:
            v10 = 0;
            goto LABEL_77;
          }
          v18 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            v10 = 0;
            LOBYTE(v16) = 0;
          }
          else
          {
            LOBYTE(v16) = 1;
            v10 = 0;
          }
          LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_77;
          v19 = 18;
        }
        else
        {
          if ( *(_DWORD *)(v35.QuadPart + 24) == 7 )
          {
            rimCreateAndProcessPointerDeviceButtonOnlyFrame(v15, a2, v8, v9, PerformanceCounter.QuadPart);
            goto LABEL_76;
          }
          v18 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            v10 = 0;
            LOBYTE(v16) = 0;
          }
          else
          {
            LOBYTE(v16) = 1;
            v10 = 0;
          }
          LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_77;
          v19 = 17;
        }
      }
      else
      {
        v18 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v10 = 0;
          LOBYTE(v16) = 0;
        }
        else
        {
          LOBYTE(v16) = 1;
          v10 = 0;
        }
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_77;
        v19 = 16;
      }
      WPP_RECORDER_AND_TRACE_SF_(
        v18->AttachedDevice,
        v16,
        v17,
        (_DWORD)gRimLog,
        4,
        1,
        v19,
        (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids);
LABEL_77:
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v38);
      v8 += v9;
      v26 = v36-- == 1;
      v34 = v8;
      if ( v26 )
        goto LABEL_12;
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v27 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v27 = 0;
  }
  if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v27,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0xFu,
      (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids,
      LowPart,
      v9);
LABEL_12:
  KeQueryPerformanceCounter(0LL);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v11 = 0;
  }
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_i(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      v14,
      4u,
      v28,
      0x13u,
      (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v37);
}
