/*
 * XREFs of ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C01C6D20
 * Callers:
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01C649C (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01C6724 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C01C7D8C (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C01C8094 (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C01C8518 (-GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01C8770 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C01C89F4 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00344F0 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C003C340 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ApiSetEditionHandleHungWindow @ 0x1C0044354 (ApiSetEditionHandleHungWindow.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00449EC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C00B18B0 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C00E7AFE (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     EtwTraceBeginPointerMessageGeneration @ 0x1C014C7D0 (EtwTraceBeginPointerMessageGeneration.c)
 *     EtwTraceEndPointerMessageGeneration @ 0x1C014CE90 (EtwTraceEndPointerMessageGeneration.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C01B8EF8 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?GenerateMessage@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@G_KIPEAUHWND__@@@Z @ 0x1C01C7244 (-GenerateMessage@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@G_KIPEAUHWND__@@@Z.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C01CF204 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C01D012C (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     IsPointerInputMessage @ 0x1C01DA6A4 (IsPointerInputMessage.c)
 *     ApiSetInkProcessorOnPointerMessagePosted @ 0x1C020DFB4 (ApiSetInkProcessorOnPointerMessagePosted.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GenerateMessage(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        const struct CPointerInputFrame *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        CInputDest *a9)
{
  __int64 v9; // rsi
  CTouchProcessor *v10; // rcx
  unsigned int v11; // ebx
  char v12; // di
  const int *v13; // r9
  unsigned __int16 v14; // r15
  unsigned int v15; // r14d
  __int16 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  HWND WindowHandle; // rax
  __int64 v21; // rdx
  CInputDest *v22; // rcx
  __int64 v23; // r8
  HWND v24; // r10
  PDEVICE_OBJECT v25; // rcx
  __int16 v26; // ax
  int v27; // r9d
  HWND v28; // rax
  __int64 v29; // r8
  CTouchProcessor *v30; // rcx
  __int64 v31; // r8
  int v32; // r15d
  int v33; // ecx
  struct tagTHREADINFO *ThreadInfo; // rax
  int v35; // edx
  int v36; // r8d
  unsigned __int16 v38; // [rsp+50h] [rbp-58h]
  unsigned __int64 v39; // [rsp+58h] [rbp-50h]

  v9 = a2;
  v39 = a3;
  v10 = (CTouchProcessor *)WPP_GLOBAL_Control;
  v11 = 0;
  v12 = 1;
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
  v13 = &WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      275,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  v14 = *(_WORD *)(v9 + 160);
  v15 = a5;
  v16 = *(_WORD *)(v9 + 172);
  v38 = v14;
  if ( a5 )
  {
    if ( !(unsigned int)IsPointerInputMessage(a5, a2, a3, v13) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
LABEL_14:
    if ( *(_DWORD *)a9 )
      goto LABEL_62;
    if ( !*(_DWORD *)(v9 + 444) )
      goto LABEL_20;
    WindowHandle = CInputDest::GetWindowHandle((CInputDest *)(v9 + 352));
    if ( WindowHandle == v24 )
    {
      if ( a8 || (*(_DWORD *)v9 & 0x800) != 0 || CInputDest::CanCallerAccessDestination(v22, v21, v23) )
LABEL_20:
        CInputDest::operator=((__int64)a9, v9 + 352);
    }
    else
    {
      if ( a8 || (v27 = 2, (*(_DWORD *)v9 & 0x800) != 0) )
        v27 = 1;
      if ( !CInputDest::SetupFromInputDestAndWindow((__int64 *)a9, v9 + 352, v24, v27) )
        CInputDest::SetEmpty(a9);
    }
    if ( !*(_DWORD *)a9 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v17) = 0;
      }
      if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v17,
          v19,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          7,
          278,
          (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
      }
      v25 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v17) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v12 = 0;
      if ( (_BYTE)v17 || v12 )
      {
        v26 = 279;
        goto LABEL_73;
      }
      goto LABEL_90;
    }
LABEL_62:
    if ( *((_DWORD *)a9 + 23) )
    {
      v28 = CInputDest::GetWindowHandle(a9);
      InputTraceLogging::Pointer::GenerateMessage(a4, v16, v39, v15, v28);
      EtwTraceBeginPointerMessageGeneration(v14, v16, v29);
      v32 = CTouchProcessor::PostPointerMessage(v30, a9, a4, (const struct CPointerInfoNode *)v9, v39, v15, a6, a7, a8);
      if ( v32 )
      {
        ApiSetInkProcessorOnPointerMessagePosted(v15, v39);
        v33 = *(_DWORD *)(v9 + 180);
        if ( (v33 & 0x2000) != 0 && (v33 & 0x10000) != 0 )
        {
          PoLatencySensitivityHint(2LL);
          ThreadInfo = CInputDest::GetThreadInfo(a9);
          if ( ThreadInfo )
          {
            CInputGlobals::SetPtiLastWoken(gpInputGlobals, ThreadInfo, 0);
            ApiSetEditionHandleHungWindow((__int64)a9);
          }
        }
      }
      EtwTraceEndPointerMessageGeneration(v38, v16, v31);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v35) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v35) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v12 = 0;
      if ( (_BYTE)v35 || v12 )
      {
        LOBYTE(v36) = v12;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v35,
          v36,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          7,
          281,
          (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
      }
      v11 = v32;
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
      v25 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v17) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v12 = 0;
      if ( (_BYTE)v17 || v12 )
      {
        v26 = 280;
        goto LABEL_73;
      }
    }
    goto LABEL_90;
  }
  v15 = CTouchProcessor::PointerFlagsToMessage(v10, *(_DWORD *)(v9 + 180));
  if ( v15 )
    goto LABEL_14;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v17) = 0;
  }
  if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v17,
      v19,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      7,
      276,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  }
  v25 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v17) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v12 = 0;
  if ( (_BYTE)v17 || v12 )
  {
    v26 = 277;
LABEL_73:
    LOBYTE(v19) = v12;
    WPP_RECORDER_AND_TRACE_SF_(
      v25->AttachedDevice,
      v17,
      v19,
      v25->DeviceExtension,
      5,
      7,
      v26,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  }
LABEL_90:
  CInputDest::SetEmpty(a9);
  return v11;
}
