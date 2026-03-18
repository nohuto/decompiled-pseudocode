/*
 * XREFs of ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C01D3394
 * Callers:
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C01B9DB0 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C01C0AF0 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 *     ?DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z @ 0x1C01C13F0 (-DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z.c)
 *     ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C01CD660 (-NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z.c)
 *     ?NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z @ 0x1C01CD800 (-NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x1C01DA938 (WPP_RECORDER_AND_TRACE_SF_L.c)
 */

void __fastcall CTouchProcessor::SetDelegateActionInt(__int64 a1, __int64 a2, int a3)
{
  bool v4; // al
  _UNKNOWN **v5; // rdx
  void *v6; // r8
  int v7; // eax

  switch ( a3 )
  {
    case 1:
      *(_DWORD *)(a2 + 304) |= 1u;
      break;
    case 2:
      *(_DWORD *)(a2 + 304) |= 2u;
      break;
    case 3:
      *(_DWORD *)(a2 + 304) |= 4u;
      break;
    case 4:
      if ( (*(_DWORD *)(a2 + 304) & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12543);
      if ( (*(_DWORD *)(a2 + 304) & 0x20) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12544);
      if ( (*(_DWORD *)(a2 + 304) & 8) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12545);
      *(_DWORD *)(a2 + 304) |= 8u;
      break;
    case 5:
      if ( !gbIgnoreStressedOutStuff )
      {
        v7 = *(_DWORD *)(a2 + 304);
        if ( (v7 & 4) == 0 && (v7 & 8) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12551);
      }
      *(_DWORD *)(a2 + 304) |= 0x10u;
      break;
    case 6:
      if ( (*(_DWORD *)(a2 + 304) & 0x20) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12558);
      *(_DWORD *)(a2 + 304) |= 0x20u;
      break;
    default:
      v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      v5 = &WPP_RECORDER_INITIALIZED;
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = &WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids;
        LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        LOBYTE(v5) = v4;
        WPP_RECORDER_AND_TRACE_SF_L(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)v5, (_DWORD)v6, 290, 2);
      }
      break;
  }
}
