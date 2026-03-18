/*
 * XREFs of ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D8778
 * Callers:
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C01B9DB0 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C01BC1B8 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01C4078 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C01CF30C (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01D8380 (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D89F0 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D8B50 (-UnreferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x1C01D9E10 (-UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C01C37D4 (-FreeMsgData@CTouchProcessor@@AEAAX_K@Z.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z @ 0x1C01C3C64 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01C7440 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Lq @ 0x1C01DACB4 (WPP_RECORDER_AND_TRACE_SF_Lq.c)
 */

void __fastcall CTouchProcessor::UnreferenceMsgData(struct _KTHREAD **a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r14
  struct CPointerMsgData *NonConstMsgData; // rbx
  PDEVICE_OBJECT *v7; // rdx
  char v8; // bp
  _UNKNOWN **v9; // r8
  _DWORD *v10; // rsi
  int v11; // r8d
  int v12; // r9d
  int v13; // [rsp+20h] [rbp-58h]
  int v14; // [rsp+28h] [rbp-50h]
  int v15; // [rsp+38h] [rbp-40h]

  v3 = a3;
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData((CTouchProcessor *)a1, a2);
  if ( a1[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11229);
  if ( !*((_DWORD *)NonConstMsgData + 6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11244);
  _InterlockedDecrement((volatile signed __int32 *)NonConstMsgData + 6);
  v7 = &WPP_GLOBAL_Control;
  v8 = 1;
  v9 = &WPP_RECORDER_INITIALIZED;
  v10 = (_DWORD *)((char *)NonConstMsgData + 36);
  if ( (_DWORD)v3 == 1 )
  {
    if ( (*v10 & 0x40) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11249);
      v7 = &WPP_GLOBAL_Control;
      v9 = &WPP_RECORDER_INITIALIZED;
    }
    if ( (*v10 & 0x40) == 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v7) = 0;
      }
      if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v7,
          (_DWORD)v9,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          4,
          287,
          (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids,
          (char)NonConstMsgData);
      }
    }
    *v10 &= ~0x40u;
  }
  else if ( (int)v3 > 8 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11260);
  }
  if ( !*((_BYTE *)NonConstMsgData + v3 + 48) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11261);
    if ( !*((_BYTE *)NonConstMsgData + v3 + 48) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v8 = 0;
      }
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = v8;
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_Lq(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v7,
          v11,
          v12,
          v13,
          v14,
          288,
          v15,
          v3,
          (char)NonConstMsgData);
      }
    }
  }
  --*((_BYTE *)NonConstMsgData + v3 + 48);
  if ( !*((_DWORD *)NonConstMsgData + 6) )
  {
    if ( (*v10 & 0x20) == 0 )
      CTouchProcessor::FreePointerInfoNode(
        a1,
        (__int64)v7,
        *((_DWORD *)NonConstMsgData + 7),
        *((_DWORD *)NonConstMsgData + 8));
    CTouchProcessor::FreeMsgData((CTouchProcessor *)a1, a2);
  }
}
