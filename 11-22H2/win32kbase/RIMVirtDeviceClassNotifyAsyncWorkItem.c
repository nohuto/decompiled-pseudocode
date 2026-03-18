/*
 * XREFs of RIMVirtDeviceClassNotifyAsyncWorkItem @ 0x1C01A2238
 * Callers:
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0179C70 (RIMOnAsyncPnpWorkNotification.c)
 * Callees:
 *     rimDoRimDevChange @ 0x1C0003BFC (rimDoRimDevChange.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C007327C (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C00B5ECC (-RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeDev @ 0x1C0170F70 (RIMFreeDev.c)
 *     RIMVirtCreateDev @ 0x1C0171148 (RIMVirtCreateDev.c)
 *     RIMDoOnPnpNotification @ 0x1C0199BF8 (RIMDoOnPnpNotification.c)
 *     WPP_RECORDER_AND_TRACE_SF_Sdq @ 0x1C01A33A4 (WPP_RECORDER_AND_TRACE_SF_Sdq.c)
 */

__int64 __fastcall RIMVirtDeviceClassNotifyAsyncWorkItem(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r14
  unsigned int v4; // edi
  char v5; // dl
  const UNICODE_STRING *i; // rax
  int v7; // edx
  int v8; // r8d
  int Dev; // eax
  __int64 v10; // r8
  char v11; // dl
  int v13; // [rsp+20h] [rbp-60h]
  int v14; // [rsp+28h] [rbp-58h]
  int v15; // [rsp+38h] [rbp-48h]
  __int64 v16; // [rsp+40h] [rbp-40h]
  struct _GUID v17; // [rsp+68h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 104);
  if ( *(_DWORD *)(a1 + 32) > 2u )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 965);
  v4 = -1073741823;
  v17 = GUID_DEVICE_INTERFACE_ARRIVAL;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v5 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v5 = 0;
  }
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_S(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v5,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x26u,
      (__int64)&WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids,
      *(const wchar_t **)(a1 + 48));
  InputTraceLogging::RIM::RimDeviceClassNotification(&v17, (const struct _UNICODE_STRING *)(a1 + 40));
  for ( i = *(const UNICODE_STRING **)(v1 + 424); ; i = *(const UNICODE_STRING **)(*(_QWORD *)&v17.Data1 + 40LL) )
  {
    *(_QWORD *)&v17.Data1 = i;
    if ( !i )
    {
      Dev = RIMVirtCreateDev(
              (char *)v1,
              *(_DWORD *)(v2 + 16),
              (const UNICODE_STRING *)(a1 + 40),
              *(_DWORD *)(v2 + 20),
              v2,
              (struct _UNICODE_STRING **)&v17);
      v4 = Dev;
      if ( Dev >= 0 )
      {
        *(_DWORD *)(*(_QWORD *)&v17.Data1 + 188LL) |= 1u;
        if ( !*(_DWORD *)(v2 + 20) )
        {
          *(_DWORD *)(*(_QWORD *)&v17.Data1 + 184LL) |= 1u;
          v4 = RIMDoOnPnpNotification(v1, *(__int64 *)&v17.Data1, v10);
        }
      }
      goto LABEL_26;
    }
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 40), i + 13, 0) )
      break;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v7) = 0;
  }
  if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_Sdq(
      WPP_GLOBAL_Control->AttachedDevice,
      v7,
      v8,
      *(unsigned __int8 *)(*(_QWORD *)&v17.Data1 + 48LL),
      v13,
      v14,
      39,
      v15,
      *(_QWORD *)(a1 + 48),
      *(_BYTE *)(*(_QWORD *)&v17.Data1 + 48LL),
      *(_QWORD *)(*(_QWORD *)&v17.Data1 + 248LL));
  }
  *(_DWORD *)(*(_QWORD *)&v17.Data1 + 188LL) |= 1u;
LABEL_26:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v11 = 0;
  }
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v16) = v4;
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x29u,
      (__int64)&WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids,
      v16);
  }
  return v4;
}
