/*
 * XREFs of ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHH@Z @ 0x1C01D1824
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01E2930 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0037FE8 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0038050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C004C7A4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0088D40 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0088D80 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@@@Z @ 0x1C00DC7D8 (-ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@.c)
 *     ?AddUndispatchedFrameToThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01BDE00 (-AddUndispatchedFrameToThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?CheckAndSendFindMyPenWnf@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01BFC68 (-CheckAndSendFindMyPenWnf@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01C1E20 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C01D0B94 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 *     ?ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01D1BF0 (-ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C01D1E70 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 *     ApiSetSanitizeRIMCOMPLETEFRAME @ 0x1C020F390 (ApiSetSanitizeRIMCOMPLETEFRAME.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ProcessInput(CTouchProcessor *this, void *a2, char *a3, unsigned int a4)
{
  CTouchProcessor *v4; // r13
  __int64 v6; // rbx
  int v7; // ebp
  int v8; // edx
  int v9; // r8d
  char v10; // di
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  char *v14; // rcx
  __int64 v15; // r12
  char *v16; // r15
  char *v17; // rbp
  char *v18; // rcx
  int v19; // edx
  __int64 v20; // r8
  PDEVICE_OBJECT v21; // rcx
  __int16 v22; // ax
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rbx
  struct CPointerInputFrame *v28; // rax
  __int64 v29; // rcx
  struct CPointerInputFrame *v30; // rbx
  CTouchProcessor *v31; // rcx
  struct RIMCOMPLETEFRAME *v32; // r8
  __int64 v33; // r8
  __int64 v34; // r9
  const int *v35; // r8
  __int64 *v36; // [rsp+40h] [rbp-78h] BYREF
  CInpLockGuard *v37[14]; // [rsp+48h] [rbp-70h] BYREF
  CTouchProcessor *v38; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v39; // [rsp+D0h] [rbp+18h] BYREF
  int v40; // [rsp+D8h] [rbp+20h] BYREF

  v38 = this;
  v4 = gpTouchProcessor;
  v6 = a4;
  v7 = (int)a2;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v37,
    (CTouchProcessor *)((char *)gpTouchProcessor + 32),
    0LL);
  v10 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v8) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v9) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v9) = 0;
  }
  if ( (_BYTE)v8 || (_BYTE)v9 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v9,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      10,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  v11 = HMValidateHandleNoSecure(v7, 19);
  v14 = a3 + 240;
  v15 = v11;
  v16 = &a3[v6];
  if ( a3 + 240 <= &a3[v6] )
  {
    while ( 1 )
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v36, "ProcessTouchOrPenInput", 0LL);
      v17 = a3;
      v18 = a3;
      a3 += *(unsigned int *)a3;
      if ( !ApiSetSanitizeRIMCOMPLETEFRAME(v18) )
        break;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v25 = isChildPartition() ? 0x48 : 0;
      *(LARGE_INTEGER *)&v17[v25 + 72] = PerformanceCounter;
      if ( !v15 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
      v27 = *(_QWORD *)(v15 + 2272);
      *(_QWORD *)&v17[(isChildPartition() ? 0x48 : 0) + 64] = v27;
      InputTraceLogging::TelemetryDebug::Pointer::ProcessInput((const struct TELEMETRY_POINTER_FRAME_TIMES *)(v17 + 48));
      v28 = CTouchProcessor::CommitRimCompleteFrame(v4, (struct RIMCOMPLETEFRAME *)v17, 0, 0);
      v30 = v28;
      if ( v28 )
      {
        CTouchProcessor::ReferenceFrameInt(v29, (__int64)v28, v20);
        CTouchProcessor::AddUndispatchedFrameToThreadFrameList(v31, v30);
        CTouchProcessor::CheckAndSendFindMyPenWnf((LARGE_INTEGER *)v4, v30);
        if ( CTouchProcessor::ProcessDelayZonePalmRejection((struct _KTHREAD **)v4, v30) )
        {
          CTouchProcessor::ProcessInputPostDelayZonePalmRejection(v4, v30, v32);
        }
        else if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 32LL) )
        {
          v40 = *((_DWORD *)v30 + 10);
          v38 = (CTouchProcessor *)*((_QWORD *)v30 + 9);
          v39 = *((_QWORD *)v30 + 27);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
            (int)&dword_1C028EE70,
            (int)&unk_1C0261B4E,
            v33,
            v34,
            (__int64)&v39,
            (__int64)&v38,
            (__int64)&v40);
        }
        goto LABEL_36;
      }
      v21 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v19) = 0;
      }
      LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = 12;
LABEL_20:
        WPP_RECORDER_AND_TRACE_SF_(
          v21->AttachedDevice,
          v19,
          v20,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          7,
          v22,
          (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
      }
LABEL_36:
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v36);
      if ( a3 + 240 > v16 )
        goto LABEL_37;
    }
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v19) = 0;
    }
    LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v19 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_36;
    v22 = 11;
    goto LABEL_20;
  }
LABEL_37:
  if ( a3 != v16 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v12, v13);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v12) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v10 = 0;
  if ( (_BYTE)v12 || v10 )
  {
    v35 = &WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids;
    LOBYTE(v35) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v12,
      (_DWORD)v35,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      13,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v37, v12, v13);
}
