/*
 * XREFs of rimSignalReadComplete @ 0x1C0003DB8
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003B78 (rimProcessDeviceBufferAndStartRead.c)
 *     RIMOnPnpNotification @ 0x1C0042B50 (RIMOnPnpNotification.c)
 *     rimDispatchCompleteFrames @ 0x1C00E6CDC (rimDispatchCompleteFrames.c)
 * Callees:
 *     RIMIsInputSuppressed @ 0x1C0004020 (RIMIsInputSuppressed.c)
 *     ?ReadComplete@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z @ 0x1C0004054 (-ReadComplete@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z.c)
 *     RIMArmWatchDog @ 0x1C00040B0 (RIMArmWatchDog.c)
 *     ?SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z @ 0x1C0004674 (-SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003D298 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqq @ 0x1C00BADD8 (WPP_RECORDER_AND_TRACE_SF_qqqq.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C00E6322 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C017E504 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C019A7B0 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x1C01A8988 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@44@Z @ 0x1C01A8A34 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@D@@U2@U2@@-$_tlgW.c)
 */

void __fastcall rimSignalReadComplete(struct RawInputManagerObject *a1, LARGE_INTEGER *a2)
{
  int v4; // edx
  int v5; // r8d
  int v6; // edx
  int v7; // r8d
  char QuadPart; // al
  LARGE_INTEGER PerformanceCounter; // rax
  int v10; // edx
  int v11; // r8d
  int updated; // eax
  int v13; // r8d
  int v14; // r9d
  void *v15; // rdx
  LARGE_INTEGER v16; // rcx
  int v17; // r8d
  int v18; // r9d
  LARGE_INTEGER v19; // rcx
  int v20; // [rsp+28h] [rbp-31h]
  __int64 v21; // [rsp+60h] [rbp+7h] BYREF
  __int64 v22; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v23; // [rsp+70h] [rbp+17h] BYREF
  __int64 v24; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v25[6]; // [rsp+80h] [rbp+27h] BYREF
  __int64 v26; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v27; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( (unsigned int)RIMIsInputSuppressed(a2) && (a2[25].LowPart & 0x80u) == 0 )
  {
    LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        v5,
        (_DWORD)gRimLog,
        4,
        1,
        10,
        (__int64)&WPP_a2b4b56089d43a30275be3b006f568a3_Traceguids,
        (char)a2,
        a2[2].QuadPart);
    }
    InputTraceLogging::RIM::DropInput(a2, 5LL);
    *((_BYTE *)a1 + 808) = 1;
    return;
  }
  if ( !*((_BYTE *)a1 + 808) )
  {
    RIMLockExclusive(&gWatchDogQPCLock);
    *((LARGE_INTEGER *)a1 + 117) = KeQueryPerformanceCounter(0LL);
    *((_DWORD *)a1 + 236) = 1;
    RIMArmWatchDog();
    qword_1C029A188 = 0LL;
    ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
    KeLeaveCriticalRegion();
    if ( (a2[25].LowPart & 0x80u) != 0 && *(_DWORD *)(a2[59].QuadPart + 24) != 7 )
    {
      v20 = 0;
      updated = ZwUpdateWnfStateData(&WNF_TOPE_INP_POINTER_DEVICE_ACTIVITY, 0LL, 0LL, 0LL, 0LL);
      if ( updated < 0 )
      {
        LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            v6,
            v7,
            (_DWORD)gRimLog,
            4,
            1,
            11,
            (__int64)&WPP_a2b4b56089d43a30275be3b006f568a3_Traceguids,
            updated);
        }
      }
    }
    LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qqqq(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        (_DWORD)gRimLog,
        4,
        v20,
        12,
        (__int64)&WPP_a2b4b56089d43a30275be3b006f568a3_Traceguids,
        (char)a1,
        (char)a2,
        a2[2].QuadPart,
        *((_QWORD *)a1 + 109));
    }
    QuadPart = a2[6].QuadPart;
    if ( QuadPart )
    {
      if ( QuadPart == 2 )
      {
        if ( (a2[25].LowPart & 0x80u) == 0 )
        {
          if ( (unsigned int)dword_1C028EE70 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 256LL) )
          {
            v19 = a2[58];
            LODWORD(v26) = *(unsigned __int16 *)(v19.QuadPart + 18);
            LODWORD(v27) = *(unsigned __int16 *)(v19.QuadPart + 16);
            v25[0] = a2[2].QuadPart;
            LODWORD(v21) = a2[33].LowPart;
            v24 = (__int64)a1;
            v23 = (__int64)a2;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (unsigned int)&dword_1C028EE70,
              (unsigned int)&unk_1C025F175,
              v17,
              v18,
              (__int64)&v23,
              (__int64)&v24,
              (__int64)&v21,
              (__int64)v25,
              (__int64)&v27,
              (__int64)&v26);
          }
        }
        else if ( (unsigned int)dword_1C028EE70 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 256LL) )
        {
          v16 = a2[58];
          LODWORD(v26) = *(unsigned __int16 *)(v16.QuadPart + 18);
          LODWORD(v27) = *(unsigned __int16 *)(v16.QuadPart + 16);
          v22 = (__int64)InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(a2[59].QuadPart + 24));
          v23 = a2[2].QuadPart;
          LODWORD(v21) = a2[33].LowPart;
          v24 = (__int64)a1;
          v25[0] = (__int64)a2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (int)&dword_1C028EE70,
            (__int64)v25,
            (__int64)&v24,
            (__int64)&v21,
            (__int64)&v23,
            (__int64)&v22,
            (__int64)&v27,
            (__int64)&v26);
        }
        goto LABEL_13;
      }
      if ( (unsigned int)dword_1C028EE70 <= 4
        || QuadPart != 1
        || !(unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 256LL) )
      {
LABEL_13:
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        a2[282] = a2[283];
        a2[285] = a2[286];
        a2[284] = PerformanceCounter;
        InputTraceLogging::TelemetryDebug::RIM::ReadComplete(PerformanceCounter.QuadPart);
        a2[23].HighPart |= 4u;
        ZwSetEvent(*((HANDLE *)a1 + 109), 0LL);
        ZwClose(*((HANDLE *)a1 + 109));
        *((_QWORD *)a1 + 109) = 0LL;
        return;
      }
      v15 = &unk_1C025F24A;
    }
    else
    {
      if ( (unsigned int)dword_1C028EE70 <= 4 || !(unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 256LL) )
        goto LABEL_13;
      v15 = &unk_1C025F13C;
    }
    LODWORD(v26) = a2[33].LowPart;
    v27 = (__int64)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1C028EE70,
      (_DWORD)v15,
      v13,
      v14,
      (__int64)&v27,
      (__int64)&v26);
    goto LABEL_13;
  }
  InputTraceLogging::RIM::SkipReadComplete(a1, (const struct RIMDEV *)a2);
  LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v11,
      (_DWORD)gRimLog,
      4,
      1,
      13,
      (__int64)&WPP_a2b4b56089d43a30275be3b006f568a3_Traceguids,
      (char)a2,
      a2[2].QuadPart);
  }
}
