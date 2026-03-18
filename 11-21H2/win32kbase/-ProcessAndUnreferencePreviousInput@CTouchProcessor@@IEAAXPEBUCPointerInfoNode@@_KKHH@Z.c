/*
 * XREFs of ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C01D0660
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C7310 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C01D45E8 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00355CC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00447F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC94C (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01B8A54 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01B8DD8 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C01C8094 (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C01C89F4 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C01D30A4 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D8878 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ProcessAndUnreferencePreviousInput(
        CTouchProcessor *this,
        const struct CPointerInfoNode *a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5,
        int a6)
{
  char v6; // si
  unsigned __int64 v7; // r12
  const struct CPointerInfoNode *v8; // r14
  char v10; // di
  __int64 v11; // rdx
  CTouchProcessor *v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  PDEVICE_OBJECT v15; // rcx
  __int16 v16; // ax
  int v17; // r15d
  unsigned int *MsgData; // rbx
  const struct CPointerInputFrame *v19; // rax
  __int64 v20; // rcx
  _DWORD *v21; // rdx
  int v22; // eax
  _QWORD *v23; // rax
  int v24; // ebx
  CInputDest *v25; // rax
  unsigned int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  char v30; // si
  _QWORD *v31; // rax
  CInputDest *v32; // rax
  int v33; // [rsp+20h] [rbp-E0h]
  __int64 *v35[14]; // [rsp+50h] [rbp-B0h] BYREF
  char v36; // [rsp+C0h] [rbp-40h]
  __m128i v37[8]; // [rsp+D0h] [rbp-30h] BYREF
  __m128i v38[8]; // [rsp+150h] [rbp+50h] BYREF

  v6 = 0;
  v7 = a3;
  v8 = a2;
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
      (_DWORD)a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      191,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  memset(v35, 0, sizeof(v35));
  v14 = *((_DWORD *)v8 + 45);
  v36 = 0;
  if ( (v14 & 1) != 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v13,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        192,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v10 = 0;
    if ( (_BYTE)v11 || v10 )
    {
      v16 = 193;
LABEL_89:
      LOBYTE(v13) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        v15->AttachedDevice,
        v11,
        v13,
        v15->DeviceExtension,
        5,
        7,
        v16,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
  }
  else if ( v7 )
  {
    v17 = 0;
    MsgData = (unsigned int *)CTouchProcessor::GetMsgData(v12, v7, v13);
    v19 = CTouchProcessor::ReferenceFrame(this, MsgData[7]);
    if ( !v19 )
      goto LABEL_76;
    v21 = (_DWORD *)(*((_QWORD *)v19 + 30) + 480LL * MsgData[8]);
    if ( (*v21 & 0x80u) == 0 )
    {
      v17 = 1;
      *v21 |= 0x80u;
    }
    CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v19, v13);
    if ( v17 )
    {
      v22 = *(_DWORD *)v8;
      if ( (*(_DWORD *)v8 & 0x1000) == 0 )
      {
        if ( (v22 & 8) != 0 )
        {
          if ( (v22 & 0x400) != 0 )
          {
            v23 = CInputDest::CInputDest(v37, *((_QWORD *)v8 + 24), *((_DWORD *)v8 + 111), 1);
            v6 = 1;
          }
          else
          {
            v23 = CInputDest::CInputDest((CInputDest *)v38, (__int64 **)v8 + 3);
            v6 = 2;
          }
          CInputDest::operator=((__int64)v35, v23);
          if ( (v6 & 2) != 0 )
          {
            v6 &= ~2u;
            CInputDest::SetEmpty((CInputDest *)v38);
          }
          if ( (v6 & 1) != 0 )
          {
            v6 &= ~1u;
            CInputDest::SetEmpty((CInputDest *)v37);
          }
          v24 = -__CFSHR__(*(_DWORD *)v8, 7);
          v25 = CInputDest::CInputDest((CInputDest *)v37, v35);
          v33 = v24;
          v26 = a4;
          CTouchProcessor::GenerateWindowLeaveMessage((struct _KTHREAD **)this, v7, v25, a4, v33, a5, a6);
          v22 = *(_DWORD *)v8;
        }
        else
        {
          v26 = a4;
        }
        if ( (v22 & 0x40) != 0 )
        {
          if ( (v22 & 0x400) != 0
            && *((_DWORD *)v8 + 111)
            && !CInputDest::IsEqualByWindowHandle((__int64)v8 + 352, *((_QWORD *)v8 + 24), 0) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29);
          }
          if ( (*(_DWORD *)v8 & 0x400) != 0 )
          {
            v30 = v6 | 4;
            v31 = CInputDest::CInputDest(v38, *((_QWORD *)v8 + 24), *((_DWORD *)v8 + 111), 1);
          }
          else
          {
            v30 = v6 | 8;
            v31 = CInputDest::CInputDest((CInputDest *)v37, (__int64 **)v8 + 3);
          }
          CInputDest::operator=((__int64)v35, v31);
          if ( (v30 & 8) != 0 )
            CInputDest::SetEmpty((CInputDest *)v37);
          if ( (v30 & 4) != 0 )
            CInputDest::SetEmpty((CInputDest *)v38);
          v32 = CInputDest::CInputDest((CInputDest *)v37, v35);
          CTouchProcessor::GenerateRoutedAwayMessages((struct _KTHREAD **)this, v7, v32, v26, a5, a6);
        }
      }
      CTouchProcessor::UnreferenceMsgData(this, v7, 1LL);
    }
    else
    {
LABEL_76:
      if ( (MsgData[9] & 0x40) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v11, v13);
    }
    v15 = WPP_GLOBAL_Control;
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v10 = 0;
    if ( (_BYTE)v11 || v10 )
    {
      v16 = 196;
      goto LABEL_89;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v13,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        194,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v10 = 0;
    if ( (_BYTE)v11 || v10 )
    {
      v16 = 195;
      goto LABEL_89;
    }
  }
  CInputDest::SetEmpty((CInputDest *)v35);
}
