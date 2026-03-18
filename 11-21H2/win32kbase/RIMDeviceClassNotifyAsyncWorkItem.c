/*
 * XREFs of RIMDeviceClassNotifyAsyncWorkItem @ 0x1C00454B0
 * Callers:
 *     RIMDeviceClassNotifyUsingAsyncPnpWorkNotification @ 0x1C00456F8 (RIMDeviceClassNotifyUsingAsyncPnpWorkNotification.c)
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0185330 (RIMOnAsyncPnpWorkNotification.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C00459F4 (-RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     RIMCreateDev @ 0x1C0045A34 (RIMCreateDev.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C0046ABC (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     RIMDoOnPnpNotification @ 0x1C00A1E80 (RIMDoOnPnpNotification.c)
 *     rimDoRimDevChange @ 0x1C00A1F28 (rimDoRimDevChange.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00A2040 (RimDeviceTypeToRimInputType.c)
 *     RIMFreeDev @ 0x1C017C8C0 (RIMFreeDev.c)
 *     RIMFindInputDeviceForConfig @ 0x1C018B1B0 (RIMFindInputDeviceForConfig.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@55555@Z @ 0x1C01A0B6C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@@-$_t.c)
 *     WPP_RECORDER_AND_TRACE_SF_Sdq @ 0x1C01A1430 (WPP_RECORDER_AND_TRACE_SF_Sdq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeviceClassNotifyAsyncWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  _QWORD *v5; // rdi
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  int v8; // r14d
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r10
  const UNICODE_STRING *v14; // rax
  int v15; // ecx
  BOOLEAN v16; // al
  int v17; // r9d
  int v18; // edx
  __int64 v19; // r10
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  int v24; // esi
  int v25; // [rsp+20h] [rbp-49h]
  int v26; // [rsp+28h] [rbp-41h]
  __int64 v27[11]; // [rsp+68h] [rbp-1h] BYREF
  int v28; // [rsp+D0h] [rbp+67h] BYREF
  int v29; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v30; // [rsp+E0h] [rbp+77h] BYREF
  int v31; // [rsp+E8h] [rbp+7Fh]

  v3 = *(unsigned int *)(a1 + 32);
  v5 = *(_QWORD **)(a1 + 24);
  if ( (unsigned int)v3 > 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v6 = (_QWORD *)v5[4 * v3 + 16];
  v7 = *(_QWORD *)(a1 + 64) - *v6;
  if ( !v7 )
    v7 = *(_QWORD *)(a1 + 72) - v6[1];
  if ( v7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, a3);
  v8 = -1073741823;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v6) = 0;
  }
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_S(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v6,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      19,
      (__int64)&WPP_685106a7d44f37adc4a00fe938e7b591_Traceguids,
      *(_QWORD *)(a1 + 48));
  }
  InputTraceLogging::RIM::RimDeviceClassNotification(
    (const struct _GUID *)(a1 + 80),
    (const struct _UNICODE_STRING *)(a1 + 40));
  v11 = *(_QWORD *)(a1 + 80) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v11 )
    v11 = *(_QWORD *)(a1 + 88) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v11 )
  {
    v12 = v5[53];
    v27[0] = v12;
    if ( !v12 )
    {
LABEL_17:
      v8 = RIMCreateDev(v5, 0, 0LL, (__int64)v27);
      if ( v8 >= 0 )
      {
        *(_DWORD *)(v27[0] + 184) |= 1u;
        v8 = RIMDoOnPnpNotification(v5, v27[0], v10);
      }
      goto LABEL_19;
    }
    v14 = (const UNICODE_STRING *)v12;
    while ( 1 )
    {
      v15 = *(_DWORD *)(v12 + 184);
      if ( (v15 & 0x20) == 0 && (v15 & 0x2000) == 0 )
      {
        v16 = RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 40), v14 + 13, 0);
        v12 = v27[0];
        if ( v16 )
          break;
      }
      v14 = *(const UNICODE_STRING **)(v12 + 40);
      v27[0] = (__int64)v14;
      v12 = (__int64)v14;
      if ( !v14 )
        goto LABEL_17;
    }
    if ( (*(_DWORD *)(v27[0] + 200) & 0x20) == 0 )
    {
      if ( v27[0] )
      {
        RIMLockExclusive((__int64)(v5 + 99));
        v23 = v27[0];
        if ( (*(_DWORD *)(v27[0] + 184) & 0x400) == 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v27[0], v21, v22);
          v23 = v27[0];
        }
        v24 = 0;
        if ( (*(_DWORD *)(v23 + 200) & 1) != 0 )
        {
          if ( *(_QWORD *)(v23 + 224) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v21, v22);
            v23 = v27[0];
          }
          if ( *(_QWORD *)(v23 + 232) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v21, v22);
            v23 = v27[0];
          }
          if ( (*(_DWORD *)(v23 + 184) & 0x80u) != 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v21, v22);
            LOBYTE(v23) = v27[0];
          }
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v21) = 0;
          }
          if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_q(
              WPP_GLOBAL_Control->AttachedDevice,
              v21,
              v22,
              (_DWORD)gRimLog,
              4,
              1,
              23,
              (__int64)&WPP_685106a7d44f37adc4a00fe938e7b591_Traceguids,
              v23);
          }
        }
        else
        {
          if ( *(_QWORD *)(v23 + 192) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v21, v22);
          v24 = 1;
        }
        v5[100] = 0LL;
        ExReleasePushLockExclusiveEx(v5 + 99, 0LL);
        KeLeaveCriticalRegion();
        if ( v24 )
        {
          rimDoRimDevChange(v5, v27[0], 3LL);
          RIMFreeDev(v5, v27[0]);
        }
        v27[0] = 0LL;
      }
      goto LABEL_17;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v17) = 0;
    }
    if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = *(unsigned __int8 *)(v27[0] + 48);
      LOBYTE(v18) = v17;
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_Sdq(
        WPP_GLOBAL_Control->AttachedDevice,
        v18,
        v10,
        v17,
        v25,
        v26,
        20,
        (__int64)&WPP_685106a7d44f37adc4a00fe938e7b591_Traceguids,
        *(_QWORD *)(a1 + 48),
        *(_BYTE *)(v27[0] + 48),
        *(_QWORD *)(v27[0] + 248));
      v12 = v27[0];
    }
    if ( !*(_QWORD *)(v12 + 248)
      && (unsigned int)dword_1C028D6F0 > 5
      && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL) )
    {
      v28 = -__CFSHR__(*(_DWORD *)(v12 + 184), 26);
      v29 = -__CFSHR__(*(_DWORD *)(v12 + 184), 24);
      LODWORD(v30) = -__CFSHR__(*(_DWORD *)(v12 + 184), 21);
      v31 = -__CFSHR__(*(_DWORD *)(v12 + 184), 11);
      v27[1] = (unsigned int)RimDeviceTypeToRimInputType(v12, *(unsigned __int8 *)(v12 + 48), v10);
      v27[2] = *(_QWORD *)(v19 + 216);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v20,
        &unk_1C025F286);
      v12 = v27[0];
    }
    if ( *(_BYTE *)(v12 + 48) == 3 )
    {
      v28 = 0;
      v29 = 0;
      v30 = 0LL;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v9) = 0;
      }
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_S(
          WPP_GLOBAL_Control->AttachedDevice,
          v9,
          v10,
          (_DWORD)gRimLog,
          4,
          1,
          21,
          (__int64)&WPP_685106a7d44f37adc4a00fe938e7b591_Traceguids,
          *(_QWORD *)(a1 + 48));
        v12 = v27[0];
      }
      if ( (unsigned int)RIMFindInputDeviceForConfig(
                           *(_QWORD *)(v12 + 456),
                           (_DWORD)v5,
                           v12,
                           (unsigned int)&v28,
                           (__int64)&v29,
                           (__int64)&v30)
        && v28 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v9) = 0;
        }
        if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_S(
            WPP_GLOBAL_Control->AttachedDevice,
            v9,
            v10,
            (_DWORD)gRimLog,
            4,
            1,
            22,
            (__int64)&WPP_685106a7d44f37adc4a00fe938e7b591_Traceguids,
            *(_QWORD *)(a1 + 48));
        }
      }
    }
  }
LABEL_19:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v10,
      (_DWORD)gRimLog,
      4,
      1,
      24,
      (__int64)&WPP_685106a7d44f37adc4a00fe938e7b591_Traceguids,
      v8);
  }
  return (unsigned int)v8;
}
