/*
 * XREFs of ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D3598
 * Callers:
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C01BD900 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 *     ?AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@@Z @ 0x1C01BDCD0 (-AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDES.c)
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z @ 0x1C01C35F4 (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z.c)
 *     ?MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z @ 0x1C01CE8F0 (-MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z.c)
 *     ?ReferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D3720 (-ReferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?ReferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D3880 (-ReferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x1C01D9DC8 (-UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_Lq @ 0x1C01DAB60 (WPP_RECORDER_AND_TRACE_SF_Lq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CTouchProcessor::ReferenceMsgData(PDEVICE_OBJECT a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  char v6; // di
  int v7; // eax
  bool v8; // zf
  int Timer_high; // eax
  int v11; // [rsp+20h] [rbp-48h]
  int v12; // [rsp+28h] [rbp-40h]
  int v13; // [rsp+38h] [rbp-30h]

  v4 = a2;
  v5 = (int)a3;
  if ( a1->Timer != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v6 = 1;
  if ( !_InterlockedIncrement((volatile signed __int32 *)(v4 + 24)) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( (_DWORD)v5 == 1 )
  {
    v7 = *(_DWORD *)(v4 + 36);
    if ( (v7 & 0x40) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
      v7 = *(_DWORD *)(v4 + 36);
      if ( (v7 & 0x40) != 0 )
      {
        a1 = WPP_GLOBAL_Control;
        LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            a2,
            a3,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            7,
            282,
            (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids,
            v4);
        v7 = *(_DWORD *)(v4 + 36);
      }
    }
    *(_DWORD *)(v4 + 36) = v7 | 0x40;
  }
  else if ( (int)v5 > 8 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  }
  v8 = (*(_BYTE *)(v5 + v4 + 48))++ == 0xFF;
  LOBYTE(Timer_high) = *(_BYTE *)(v5 + v4 + 48);
  if ( v8 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    LOBYTE(Timer_high) = *(_BYTE *)(v5 + v4 + 48);
  }
  if ( !(_BYTE)Timer_high )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (Timer_high = HIDWORD(WPP_GLOBAL_Control->Timer), (Timer_high & 0x40) == 0)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v6 = 0;
    }
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = v6;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      LOBYTE(Timer_high) = WPP_RECORDER_AND_TRACE_SF_Lq(
                             WPP_GLOBAL_Control->AttachedDevice,
                             a2,
                             a3,
                             a4,
                             v11,
                             v12,
                             283,
                             v13,
                             v5,
                             v4);
    }
  }
  return Timer_high;
}
