/*
 * XREFs of ChangeComposableCursor @ 0x1C01A8FC0
 * Callers:
 *     xxxDwmStopRedirection @ 0x1C0057060 (xxxDwmStopRedirection.c)
 *     MagpDestroyLensContext @ 0x1C00EA634 (MagpDestroyLensContext.c)
 *     MagContextThreadCallout @ 0x1C01A2E60 (MagContextThreadCallout.c)
 *     MagSetLensContextInformation @ 0x1C01A3870 (MagSetLensContextInformation.c)
 *     NtUserEnableSoftwareCursorForScreenCapture @ 0x1C01CF530 (NtUserEnableSoftwareCursorForScreenCapture.c)
 *     ?EnableDwmSwCursorMoveSize@@YAXPEAH@Z @ 0x1C01E9440 (-EnableDwmSwCursorMoveSize@@YAXPEAH@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EFC00 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C01F2B00 (xxxCancelTrackingForThread.c)
 * Callees:
 *     SetPointer @ 0x1C005CFA0 (SetPointer.c)
 */

__int64 __fastcall ChangeComposableCursor(__int64 a1)
{
  __int64 result; // rax
  int v2; // ebx

  result = (unsigned int)gSoftwareCursorCount;
  v2 = gSoftwareCursorCount + ((_DWORD)a1 != 0 ? 1 : -1);
  if ( gSoftwareCursorCount )
  {
    if ( gSoftwareCursorCount == 1 && !(_DWORD)a1 )
    {
      SetPointer(a1);
      LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = 0;
      goto LABEL_7;
    }
  }
  else if ( (_DWORD)a1 )
  {
    SetPointer(0LL);
    LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = 1;
LABEL_7:
    result = SetPointer(1LL);
  }
  gSoftwareCursorCount = v2;
  return result;
}
