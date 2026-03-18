/*
 * XREFs of ?GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C01C9500
 * Callers:
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C01CB5F0 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C00DC614 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00DC680 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C00E85F2 (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 *     GetPointerInfoSize @ 0x1C015363C (GetPointerInfoSize.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1C01BD28C (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerData(
        CTouchProcessor *this,
        __int64 a2,
        int a3,
        unsigned int a4,
        struct tagPOINTER_INFO *a5)
{
  int v6; // r12d
  __int64 v7; // rsi
  unsigned int v9; // ebx
  char v10; // di
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  CTouchProcessor *v14; // rcx
  __int64 v15; // r8
  const struct CPointerMsgData *MsgData; // rax
  __int64 v17; // rdx
  const struct CPointerMsgData *v18; // rsi
  PDEVICE_OBJECT v19; // rcx
  __int16 v20; // ax
  __int64 v21; // rcx
  _QWORD *FrameById; // rbp
  __int64 v23; // r8
  const int *v24; // r8
  __int64 v25; // rax
  CPointerInfoNode *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // edx
  unsigned int v31; // esi
  const int *v32; // r8
  PERESOURCE *v34[2]; // [rsp+40h] [rbp-28h] BYREF

  v6 = a3;
  v7 = a2;
  v9 = 0;
  v10 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
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
      113,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  if ( a4 != (unsigned int)GetPointerInfoSize(v6) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v34, (CTouchProcessor *)((char *)this + 32), 1);
  MsgData = CTouchProcessor::GetMsgData(v14, v7, v15);
  v18 = MsgData;
  if ( MsgData )
  {
    FrameById = CTouchProcessor::FindFrameById(this, *((_DWORD *)MsgData + 7));
    if ( FrameById )
    {
      v25 = *((unsigned int *)v18 + 8);
      if ( (unsigned int)v25 >= *((_DWORD *)FrameById + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v17, v23);
        v25 = *((unsigned int *)v18 + 8);
      }
      v26 = (CPointerInfoNode *)(FrameById[30] + 480 * v25);
      if ( !(unsigned int)CPointerInfoNode::IsValid(v26) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29);
      if ( (*(_DWORD *)v26 & 2) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29);
      v31 = CTouchProcessor::PointerInfoCopyOutHelper(
              (PERESOURCE *)this,
              v26,
              (struct tagHID_POINTER_DEVICE_INFO *)FrameById[32],
              v6,
              a4,
              a5);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v30) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v30) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v10 = 0;
      if ( (_BYTE)v30 || v10 )
      {
        v32 = &WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids;
        LOBYTE(v32) = v10;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v30,
          (_DWORD)v32,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          7,
          116,
          (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
      }
      v9 = v31;
    }
    else
    {
      v19 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v17) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v10 = 0;
      if ( (_BYTE)v17 || v10 )
      {
        v20 = 115;
        goto LABEL_35;
      }
    }
  }
  else
  {
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v17) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v10 = 0;
    if ( (_BYTE)v17 || v10 )
    {
      v20 = 114;
LABEL_35:
      v24 = &WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids;
      LOBYTE(v24) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        v19->AttachedDevice,
        v17,
        (_DWORD)v24,
        v19->DeviceExtension,
        5,
        7,
        v20,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
  }
  CInpLockGuardShared::~CInpLockGuardShared(v34);
  return v9;
}
