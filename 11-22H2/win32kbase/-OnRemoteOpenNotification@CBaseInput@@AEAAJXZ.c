/*
 * XREFs of ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00CBE90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0052D0C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0052D50 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     RimInputTypeToDeviceInputType @ 0x1C006EEF0 (RimInputTypeToDeviceInputType.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01763A0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 */

__int64 __fastcall CBaseInput::OnRemoteOpenNotification(CBaseInput *this)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // r14d
  __int64 v7; // rsi
  int v8; // ebx
  PDEVICE_OBJECT v10; // rcx
  char v11; // dl
  char v12; // r8
  __int64 CurrentProcess; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  char v18; // dl
  unsigned __int8 v19; // [rsp+20h] [rbp-68h]
  unsigned __int16 v20; // [rsp+30h] [rbp-58h]
  int v21; // [rsp+40h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-38h] BYREF
  __int64 v23; // [rsp+90h] [rbp+8h] BYREF
  __int64 *v24; // [rsp+98h] [rbp+10h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v24, "OnRemoteOpenNotification", 0LL);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v2 = RimInputTypeToDeviceInputType(*((_DWORD *)this + 36));
  v6 = v2;
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      LODWORD(v23) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1292LL);
      v8 = -1073741816;
      goto LABEL_16;
    }
    v7 = (__int64)*(&gRemoteKeyboardChannelHandlePair + 1);
  }
  else
  {
    v7 = (__int64)*(&gRemoteMouseChannelHandlePair + 1);
  }
  v8 = -1073741816;
  if ( v7 != -1 )
  {
    if ( !v7 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v3) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v3) = 0;
      }
      if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v3,
          v5,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          2,
          13,
          (__int64)&WPP_6e321a902f9d36eb099a581dd6c4de5f_Traceguids);
      }
      v8 = 0;
      goto LABEL_13;
    }
    v23 = 0LL;
    CurrentProcess = PsGetCurrentProcess(v4, v3, v5);
    v17 = PsGetCurrentProcess(v15, v14, v16);
    v8 = ObDuplicateObject(v17, v7, CurrentProcess, &v23, 0, 512, 2, 0);
    if ( v8 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (v18 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        v18 = 0;
      }
      if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v18,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
          2u,
          2u,
          0xEu,
          (__int64)&WPP_6e321a902f9d36eb099a581dd6c4de5f_Traceguids,
          v8);
      goto LABEL_13;
    }
    v8 = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
           *((_QWORD *)this + 1),
           (unsigned int)&DestinationString,
           v6,
           v23,
           0,
           0LL);
    if ( v8 < 0 )
    {
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        v11 = 0;
      }
      v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = v8;
        v20 = 15;
        v19 = 2;
        goto LABEL_41;
      }
    }
    goto LABEL_13;
  }
LABEL_16:
  v10 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v11 = 0;
  }
  v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = v6;
    v20 = 12;
    v19 = 4;
LABEL_41:
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)v10->AttachedDevice,
      v11,
      v12,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      v19,
      2u,
      v20,
      (__int64)&WPP_6e321a902f9d36eb099a581dd6c4de5f_Traceguids,
      v21);
  }
LABEL_13:
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v24);
  return (unsigned int)v8;
}
