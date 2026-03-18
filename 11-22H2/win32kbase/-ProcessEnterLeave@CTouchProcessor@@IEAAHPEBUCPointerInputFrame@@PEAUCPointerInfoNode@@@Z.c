/*
 * XREFs of ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C01CFA8C
 * Callers:
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C01D0B5C (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C01D1448 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C01D358C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0053338 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0058B74 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C00E47EE (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00E4A4E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01B5044 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C01B540C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C01C2CB8 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C01CCB18 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdqd @ 0x1C01DB348 (WPP_RECORDER_AND_TRACE_SF_qdqd.c)
 */

__int64 __fastcall CTouchProcessor::ProcessEnterLeave(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3)
{
  unsigned int v3; // ebx
  struct CPointerInfoNode *v7; // rsi
  int v8; // edx
  int v9; // r8d
  char v10; // di
  __int64 v11; // rcx
  int v12; // edx
  int v13; // r8d
  PDEVICE_OBJECT v14; // rcx
  __int16 v15; // ax
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  char v17; // dl
  int v18; // eax
  __int64 *v19; // rax
  __int64 *v20; // rax
  int v21; // eax
  PDEVICE_OBJECT v22; // r9
  int v23; // ecx
  __int16 v24; // r10
  bool v25; // cf
  int v27; // [rsp+20h] [rbp-E0h]
  int v28; // [rsp+28h] [rbp-D8h]
  int v29; // [rsp+38h] [rbp-C8h]
  int v30[28]; // [rsp+70h] [rbp-90h] BYREF
  char v31; // [rsp+E0h] [rbp-20h]
  _BYTE v32[128]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v33[16]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v34[16]; // [rsp+1F0h] [rbp+F0h] BYREF

  v3 = 0;
  v7 = 0LL;
  memset(v32, 0, 113);
  memset(v30, 0, sizeof(v30));
  v31 = 0;
  v10 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
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
      4,
      171,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6481);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6482);
  if ( (*(_DWORD *)a3 & 0x400) == 0 && (*(_DWORD *)a3 & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6483);
  if ( (*(_DWORD *)a3 & 0x400) == 0 && !*((_DWORD *)a3 + 6) && *((_DWORD *)a3 + 88) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6484);
  if ( !a2 )
  {
    if ( !CPointerInfoNode::IsForManipulationThread(a3) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6491);
    if ( !CPointerInfoNode::IsForManipulationThread(a3) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v12) = 0;
      }
      if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          v13,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          4,
          172,
          (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
      }
      v14 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v12) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v10 = 0;
      if ( (_BYTE)v12 || v10 )
      {
        v15 = 173;
LABEL_91:
        LOBYTE(v13) = v10;
        WPP_RECORDER_AND_TRACE_SF_(
          v14->AttachedDevice,
          v12,
          v13,
          v14->DeviceExtension,
          5,
          4,
          v15,
          (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
        goto LABEL_143;
      }
      goto LABEL_143;
    }
LABEL_70:
    if ( (*(_DWORD *)a3 & 0x400) != 0 )
    {
      v20 = CInputDest::CInputDest(v34, *((_QWORD *)a3 + 24), *((_DWORD *)a3 + 111), 1);
      CInputDest::operator=((__int64)v32, v20);
      CInputDest::SetEmpty((CInputDest *)v34);
    }
    else
    {
      CInputDest::operator=((__int64)v32, (__int64)a3 + 24);
    }
    if ( CInputDest::operator==(v30, (__int64)v32) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v12) = 0;
      }
      if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          v13,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          4,
          176,
          (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
      }
      v14 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v12) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v10 = 0;
      if ( (_BYTE)v12 || v10 )
      {
        v15 = 177;
        goto LABEL_91;
      }
      goto LABEL_143;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        v13,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        4,
        178,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
    }
    if ( (*((_DWORD *)a3 + 1) & 0x200) != 0
      && ((v21 = *((_DWORD *)a3 + 45), (v21 & 4) != 0) || (v21 & 0x40000) != 0)
      && (v21 & 0x10000) == 0 )
    {
      *(_DWORD *)a3 |= 0x40u;
      if ( v7 )
        *(_DWORD *)v7 |= 0x20u;
      v22 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v12) = 0;
      }
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_128;
      if ( v7 )
        v23 = -__CFSHR__(*(_DWORD *)v7, 6);
      else
        LOBYTE(v23) = 0;
      v24 = 180;
      v25 = __CFSHR__(*(_DWORD *)a3, 7);
    }
    else
    {
      *(_DWORD *)a3 |= 8u;
      if ( v7 )
        *(_DWORD *)v7 |= 0x10u;
      v22 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v12) = 0;
      }
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_128;
      if ( v7 )
        v23 = -__CFSHR__(*(_DWORD *)v7, 5);
      else
        LOBYTE(v23) = 0;
      v24 = 179;
      v25 = __CFSHR__(*(_DWORD *)a3, 4);
    }
    WPP_RECORDER_AND_TRACE_SF_qdqd(
      v22->AttachedDevice,
      v12,
      v13,
      (_DWORD)v22,
      v27,
      v28,
      v24,
      v29,
      (char)a3,
      -v25,
      (char)v7,
      v23);
LABEL_128:
    if ( v7 )
    {
      if ( *((_DWORD *)v7 + 2) >= *((_DWORD *)a2 + 12) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6631);
      *(_DWORD *)(160LL * *((unsigned int *)v7 + 2) + *((_QWORD *)a2 + 31) + 140) &= ~1u;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v13) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v13) = 0;
    }
    if ( (_BYTE)v12 || (_BYTE)v13 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        v13,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        4,
        181,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
    v3 = 1;
    goto LABEL_143;
  }
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v11, (__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6501);
  ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(this, a2, *((_WORD *)a3 + 86), 0LL);
  v7 = ValidNodeInFrame;
  if ( ValidNodeInFrame )
  {
    v18 = *(_DWORD *)ValidNodeInFrame;
    if ( (v18 & 0x80u) == 0 )
    {
      if ( (v18 & 4) != 0 || (v18 & 0x400) != 0 )
      {
        v19 = CInputDest::CInputDest(v33, *((_QWORD *)v7 + 24), *((_DWORD *)v7 + 111), 1);
        CInputDest::operator=((__int64)v30, v19);
        CInputDest::SetEmpty((CInputDest *)v33);
      }
      else
      {
        CInputDest::operator=((__int64)v30, (__int64)v7 + 24);
      }
    }
    else
    {
      v7 = 0LL;
    }
    goto LABEL_70;
  }
  if ( CPointerInfoNode::IsForManipulationThread(a3) )
    goto LABEL_70;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (v17 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v17 = 0;
  }
  if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v17,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      4u,
      0xAEu,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids,
      *((unsigned __int16 *)a3 + 86));
  v14 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v12) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v10 = 0;
  if ( (_BYTE)v12 || v10 )
  {
    v15 = 175;
    goto LABEL_91;
  }
LABEL_143:
  CInputDest::SetEmpty((CInputDest *)v30);
  CInputDest::SetEmpty((CInputDest *)v32);
  return v3;
}
