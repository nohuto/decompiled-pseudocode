/*
 * XREFs of ?GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01C9C40
 * Callers:
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01CACF4 (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_F.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00DC65C (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00DC680 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1C01BD28C (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C01C9028 (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C01CD608 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataTimes(
        CTouchProcessor *this,
        unsigned __int64 a2,
        unsigned int a3,
        struct TELEMETRY_POINTER_FRAME_TIMES *a4)
{
  unsigned int v4; // r14d
  char v6; // di
  __int64 v7; // rdx
  CTouchProcessor *v8; // rcx
  __int64 v9; // r8
  const struct CPointerMsgData *MsgData; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  const struct CPointerMsgData *v13; // r14
  PDEVICE_OBJECT v14; // rcx
  __int16 v15; // ax
  __int64 v16; // rcx
  _QWORD *FrameById; // r13
  __int64 v18; // rax
  CPointerInfoNode *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int HistoryCount; // r14d
  const struct CPointerInputFrame *i; // r8
  _OWORD *v26; // rcx
  unsigned int v27; // [rsp+40h] [rbp-88h]
  PERESOURCE *v28[11]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+D8h] [rbp+10h]
  unsigned int v31; // [rsp+E0h] [rbp+18h]

  v31 = a3;
  v30 = a2;
  v4 = a3;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 5u )
  {
    LOBYTE(a2) = 0;
    v6 = 1;
  }
  else
  {
    v6 = 1;
    LOBYTE(a2) = 1;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      146,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v28, (CTouchProcessor *)((char *)this + 32));
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  MsgData = CTouchProcessor::GetMsgData(v8, v30, v9);
  v13 = MsgData;
  if ( !MsgData )
  {
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v6 = 0;
    if ( !(_BYTE)v11 && !v6 )
      goto LABEL_54;
    v15 = 147;
LABEL_53:
    LOBYTE(v12) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      v14->AttachedDevice,
      v11,
      v12,
      v14->DeviceExtension,
      5,
      7,
      v15,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
LABEL_54:
    CInpLockGuardShared::~CInpLockGuardShared(v28);
    return 0LL;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *((_DWORD *)MsgData + 7));
  if ( !FrameById )
  {
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v6 = 0;
    if ( !(_BYTE)v11 && !v6 )
      goto LABEL_54;
    v15 = 148;
    goto LABEL_53;
  }
  v18 = *((unsigned int *)v13 + 8);
  if ( (unsigned int)v18 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v11, v12);
    v18 = *((unsigned int *)v13 + 8);
  }
  v19 = (CPointerInfoNode *)(FrameById[30] + 480 * v18);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v19) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
  if ( (*(_DWORD *)v19 & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
  HistoryCount = CPointerInfoNode::GetHistoryCount(v19);
  LODWORD(v11) = v31;
  if ( v31 > HistoryCount )
  {
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v6 = 0;
    if ( !(_BYTE)v11 && !v6 )
      goto LABEL_54;
    v15 = 149;
    goto LABEL_53;
  }
  *(_OWORD *)a4 = *(_OWORD *)(FrameById + 9);
  *((_OWORD *)a4 + 1) = *(_OWORD *)(FrameById + 11);
  *((_OWORD *)a4 + 2) = *(_OWORD *)(FrameById + 13);
  *((_OWORD *)a4 + 3) = *(_OWORD *)(FrameById + 15);
  *((_OWORD *)a4 + 4) = *(_OWORD *)(FrameById + 17);
  *((_OWORD *)a4 + 5) = *(_OWORD *)(FrameById + 19);
  *((_OWORD *)a4 + 6) = *(_OWORD *)(FrameById + 21);
  LODWORD(i) = 128;
  *((_OWORD *)a4 + 7) = *(_OWORD *)(FrameById + 23);
  *((_OWORD *)a4 + 8) = *(_OWORD *)(FrameById + 25);
  v27 = 1;
  if ( v31 > 1 )
  {
    for ( i = CTouchProcessor::GetPreviousFrameByDevice(this, (const struct CPointerInputFrame *)FrameById);
          v27 < v31 && i && HistoryCount > 1;
          i = CTouchProcessor::GetPreviousFrameByDevice(this, i) )
    {
      v26 = (_OWORD *)((char *)a4 + 144 * v27);
      *v26 = *(_OWORD *)(FrameById + 9);
      v26[1] = *(_OWORD *)(FrameById + 11);
      v26[2] = *(_OWORD *)(FrameById + 13);
      v26[3] = *(_OWORD *)(FrameById + 15);
      v26[4] = *(_OWORD *)(FrameById + 17);
      v26[5] = *(_OWORD *)(FrameById + 19);
      v26[6] = *(_OWORD *)(FrameById + 21);
      v26[7] = *(_OWORD *)(FrameById + 23);
      v26[8] = *(_OWORD *)(FrameById + 25);
      ++v27;
      --HistoryCount;
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v11) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v6 = 0;
  if ( (_BYTE)v11 || v6 )
  {
    LOBYTE(i) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v11,
      (_DWORD)i,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      150,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  }
  CInpLockGuardShared::~CInpLockGuardShared(v28);
  return 1LL;
}
