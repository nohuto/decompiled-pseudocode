/*
 * XREFs of ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C01D447C
 * Callers:
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C01BD900 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C01C4158 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 *     ?DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z @ 0x1C01C45D0 (-DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z.c)
 *     ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C01CEBB0 (-NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z.c)
 *     ?NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z @ 0x1C01CED50 (-NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x1C01DA7E0 (WPP_RECORDER_AND_TRACE_SF_L.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::SetDelegateActionInt(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  bool v6; // al
  _UNKNOWN **v7; // rdx
  const int *v8; // r8
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  char v13; // [rsp+40h] [rbp-18h]

  switch ( (_DWORD)a3 )
  {
    case 1:
      *(_DWORD *)(a2 + 304) |= 1u;
      return;
    case 2:
      *(_DWORD *)(a2 + 304) |= 2u;
      return;
    case 3:
      *(_DWORD *)(a2 + 304) |= 4u;
      return;
  }
  v4 = (unsigned int)(a3 - 4);
  if ( (_DWORD)a3 == 4 )
  {
    v12 = *(_DWORD *)(a2 + 304);
    if ( (v12 & 4) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2, a3);
      v12 = *(_DWORD *)(a2 + 304);
    }
    if ( (v12 & 0x20) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2, a3);
      v12 = *(_DWORD *)(a2 + 304);
    }
    if ( (v12 & 8) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2, a3);
      v12 = *(_DWORD *)(a2 + 304);
    }
    v10 = v12 | 8;
    goto LABEL_30;
  }
  v5 = (unsigned int)(a3 - 5);
  if ( (_DWORD)a3 != 5 )
  {
    if ( (_DWORD)a3 != 6 )
    {
      v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      v7 = &WPP_RECORDER_INITIALIZED;
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = a3;
        v8 = &WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids;
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        LOBYTE(v7) = v6;
        WPP_RECORDER_AND_TRACE_SF_L(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v7,
          (_DWORD)v8,
          287,
          2,
          7,
          287,
          (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids,
          v13);
      }
      return;
    }
    v9 = *(_DWORD *)(a2 + 304);
    if ( (v9 & 0x20) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, a3);
      v9 = *(_DWORD *)(a2 + 304);
    }
    v10 = v9 | 0x20;
LABEL_30:
    *(_DWORD *)(a2 + 304) = v10;
    return;
  }
  if ( !gbIgnoreStressedOutStuff )
  {
    v11 = *(_DWORD *)(a2 + 304);
    if ( (v11 & 4) == 0 && (v11 & 8) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, a3);
  }
  *(_DWORD *)(a2 + 304) |= 0x10u;
}
