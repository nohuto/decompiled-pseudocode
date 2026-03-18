/*
 * XREFs of ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C0040DAC
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0040FFC (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x1C01FB240 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C002CA0C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C002CA34 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C0033B24 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C003595C (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C003C8FC (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     ApiSetEditionPostInputMessage @ 0x1C0041768 (ApiSetEditionPostInputMessage.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C0041B14 (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C0041B3C (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0041B78 (-GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C0041BA4 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0042044 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C00422E0 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ApiSetEditionHandleHungWindow @ 0x1C0044354 (ApiSetEditionHandleHungWindow.c)
 *     ApiSetEditionxxxReportMouseBreakToAccessibility @ 0x1C0044458 (ApiSetEditionxxxReportMouseBreakToAccessibility.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::DeliverMouseButtonToInputDest(
        CMouseProcessor *this,
        const struct CMouseProcessor::CButtonEvent *a2,
        const struct CInputDest *a3,
        const struct CMouseProcessor::InputDeliveryContext *a4)
{
  unsigned int ButtonMessage; // r14d
  __int64 v9; // rdx
  __int64 v10; // r8
  struct tagTHREADINFO *DelegateThreadInfo; // rax
  unsigned __int8 v12; // al
  __int64 v13; // r8
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // edi
  char v19; // al
  __int64 v20; // r15
  __int64 v21; // r8
  __int64 v22; // r12
  __int64 v23; // r13
  int MessageWParamInfo; // r9d
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  char v28; // di
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // r8d
  int v32; // eax
  int v33; // r8d
  int v34; // r8d
  int v35; // edx
  int v36; // edx
  _BYTE v37[4]; // [rsp+60h] [rbp-59h] BYREF
  int v38; // [rsp+64h] [rbp-55h]
  __int64 v39; // [rsp+70h] [rbp-49h] BYREF
  int v40; // [rsp+78h] [rbp-41h]
  __int64 v41; // [rsp+80h] [rbp-39h] BYREF
  _QWORD v42[3]; // [rsp+88h] [rbp-31h] BYREF
  _BYTE v43[112]; // [rsp+A0h] [rbp-19h] BYREF

  if ( !*(_DWORD *)a3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    return;
  }
  if ( !CMouseProcessor::BufferInputDestinedForContainer(this, a2, a3) )
  {
    ButtonMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(a2);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v37, v9, v10);
    CMouseProcessor::PostPendingMouseMoveToInputDest(this, a3);
    DelegateThreadInfo = CInputDest::GetDelegateThreadInfo(a3);
    if ( DelegateThreadInfo )
      CMouseProcessor::PostPendingMouseMove(this, *((struct tagQ **)DelegateThreadInfo + 54));
    v12 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
    v13 = *((_QWORD *)a2 + 1);
    v14 = v12;
    v15 = *((_DWORD *)a3 + 26);
    v16 = 2 * v14;
    v17 = v16 | 4;
    if ( !*(_BYTE *)a4 )
      v17 = v16;
    v18 = v17 | 0x40;
    v41 = *(_QWORD *)(v13 + 132);
    if ( (v15 & 4) == 0 )
      v18 = v17;
    v42[0] = v13;
    v19 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
    v20 = *((_QWORD *)a4 + 1);
    v22 = v21 + 104;
    v42[2] = 0LL;
    v42[1] = (unsigned __int64)&v41 & -(__int64)(v19 != 0);
    v23 = *(unsigned int *)(v21 + 40);
    v39 = *(_QWORD *)(v21 + 88);
    v38 = *(_DWORD *)(v21 + 80);
    MessageWParamInfo = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(a2);
    if ( *((_DWORD *)a3 + 23) == 2 )
      v25 = *((_QWORD *)a3 + 10);
    else
      LODWORD(v25) = 0;
    ApiSetEditionPostInputMessage(
      (_DWORD)a3,
      v25,
      ButtonMessage,
      MessageWParamInfo,
      v20,
      v38,
      v39,
      v23,
      v18,
      v22,
      (__int64)v42);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v37);
    v28 = 1;
    if ( *((_DWORD *)a2 + 8) != 2 )
      goto LABEL_14;
    CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v43, a3);
    v29 = *((_QWORD *)a2 + 1);
    v30 = *((unsigned int *)a2 + 6);
    v31 = *(_DWORD *)(v29 + 112);
    v32 = *(_DWORD *)(v29 + 140);
    v39 = *(_QWORD *)(v29 + 132);
    v40 = v32;
    if ( (unsigned int)ApiSetEditionxxxReportMouseBreakToAccessibility(v30, &v39, (v31 >> 7) & 1) )
    {
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v43);
LABEL_14:
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v37, v26, v27);
      if ( ButtonMessage == 513 && *(_DWORD *)a3 )
        ApiSetEditionHandleHungWindow(a3);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v28 = 0;
      }
      if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v35 = 38;
        LOBYTE(v35) = v28;
        LOBYTE(v34) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v35,
          v34,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          6,
          38,
          (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
      }
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v37);
      return;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v28 = 0;
    }
    if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v36 = 37;
      LOBYTE(v36) = v28;
      LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v36,
        v33,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        6,
        37,
        (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
    }
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v43);
  }
}
