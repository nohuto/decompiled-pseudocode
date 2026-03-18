/*
 * XREFs of ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003B608
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C003404C (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     HandleInputDestDestruction @ 0x1C003ACA0 (HandleInputDestDestruction.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C0044710 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C00CFE9C (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     IsCapturedBySystem @ 0x1C00D0410 (IsCapturedBySystem.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C01D0D94 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C01D3B64 (-RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C01D54BC (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01FBCD8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CInputDest::operator==(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  int v6; // eax
  bool v7; // zf

  v5 = *a1;
  if ( !(_DWORD)v5 && !*(_DWORD *)a2 )
  {
    LOBYTE(v6) = 1;
    return v6;
  }
  v6 = v5 & *(_DWORD *)a2;
  if ( v6 )
  {
    LOBYTE(v5) = 1;
    if ( (v6 & 1) != 0 )
    {
      if ( a1[2] != *(_DWORD *)(a2 + 8) )
        goto LABEL_13;
      v7 = a1[3] == *(_DWORD *)(a2 + 12);
    }
    else
    {
      if ( (v6 & 2) == 0 )
      {
        if ( (v6 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, a3);
        LOBYTE(v6) = *((_QWORD *)a1 + 10) == *(_QWORD *)(a2 + 80);
        return v6;
      }
      if ( a1[8] != *(_DWORD *)(a2 + 32) || a1[9] != *(_DWORD *)(a2 + 36) )
        goto LABEL_13;
      v7 = *((_QWORD *)a1 + 3) == *(_QWORD *)(a2 + 24);
    }
    if ( v7 )
    {
LABEL_14:
      LOBYTE(v6) = v5;
      return v6;
    }
LABEL_13:
    LOBYTE(v5) = 0;
    goto LABEL_14;
  }
  return v6;
}
